//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string name, int mileage, int speed) : name(name), mileage(mileage), speed(speed) {}

int Vehicle::driveAndGetMileage() {
    mileage += speed;
    return mileage;
}

std::string Vehicle::toString() const {
    return name + " mileage: " + std::to_string(mileage) + " speed: " + std::to_string(speed);
}

void Vehicle::setSpeed(int a) {
    speed = a;
}

bool Vehicle::operator<(const Vehicle &other) const {
    return mileage < other.mileage;
}

bool Vehicle::operator>(const Vehicle &other) const {
    return mileage > other.mileage;
}
