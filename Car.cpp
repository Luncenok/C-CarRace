//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "Car.h"

Car::Car(std::string name, int mileage, int speed, int nitro) : Vehicle(name, mileage, speed), nitroMaxSpeed(nitro) {}

int Car::driveAndGetMileage() {
    if (nitroMaxSpeed > 0) {
        return nitro();
    } else {
        return Vehicle::driveAndGetMileage();
    }
}

int Car::nitro() {
    mileage += nitroMaxSpeed;
    return nitroMaxSpeed = 0;
}
