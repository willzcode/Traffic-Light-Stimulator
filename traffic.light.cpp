#include <iostream>
#include <thread>
#include <chrono>

enum TrafficLightColor {
    RED,
    GREEN,
    YELLOW
};

class TrafficLight {
private:
    TrafficLightColor color;

public:
    TrafficLight() : color(RED) {}

    void switchToNextColor() {
        switch (color) {
            case RED:
                color = GREEN;
                break;
            case GREEN:
                color = YELLOW;
                break;
            case YELLOW:
                color = RED;
                break;
        }
    }

    void displayColor() {
        switch (color) {
            case RED:
                std::cout << "Traffic Light: RED\n";
                break;
            case GREEN:
                std::cout << "Traffic Light: YELLOW\n";
                break;
            case YELLOW:
                std::cout << "Traffic Light: GREEN\n";
                break;
        }
    }
};

int main() {
    TrafficLight trafficLight;

    while (true) {
        trafficLight.displayColor();
        std::this_thread::sleep_for(std::chrono::seconds(5)); // Simulate time passage

        trafficLight.switchToNextColor();
    }
    return 0;
}