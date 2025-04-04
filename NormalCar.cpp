//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "NormalCar.h"

NormalCar::NormalCar(std::string name, int mileage, int speed, int nitro, int numDoors)
        : Car(name, mileage, speed, nitro), numDoors(numDoors) {}

int NormalCar::driveAndGetMileage() {
    unlockHiddenPower();
    return Car::driveAndGetMileage();
}

void NormalCar::unlockHiddenPower() {
    nitroMaxSpeed += numDoors;
}
