//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "SportCar.h"

SportCar::SportCar(std::string name, int mileage, int speed, int nitro, bool isRed) : Car(name, mileage, speed, nitro), isRed(isRed) {}

int SportCar::driveAndGetMileage() {
    addGasForFun();
    return Car::driveAndGetMileage();
}

void SportCar::addGasForFun() {
    speed += isRed ? 2 : 1;
}
