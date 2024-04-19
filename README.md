# Traffic Light Simulator

A simple traffic light simulator implemented in C++ using threads and chrono for time management.

## Introduction

This project demonstrates a basic traffic light simulation using C++ and multithreading. It utilizes an enum `TrafficLightColor` to represent the different states of a traffic light and a `TrafficLight` class to manage the switching of colors.

## Features

- Simulates a traffic light with three colors: RED, GREEN, and YELLOW.
- Uses `std::thread` for managing the traffic light simulation.
- Utilizes `std::chrono` for time-based color switching.

## Getting Started

### Prerequisites

- C++ compiler with support for C++11 or later.
- Standard C++ libraries.

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/traffic-light-simulator.git
   ```

2. Navigate to the project directory:

   ```bash
   cd traffic-light-simulator
   ```

3. Compile the code:

   ```bash
   g++ main.cpp -o traffic_light_simulation -std=c++11 -pthread
   ```

## Usage

1. Run the compiled executable:

   ```bash
   ./traffic_light_simulation
   ```

2. Observe the console output to see the traffic light colors changing every 5 seconds.