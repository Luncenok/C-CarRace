//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "Bike.h"

Bike::Bike(std::string name, int mileage, int speed, int speedAfterChangingGear)
        : Vehicle(name, mileage, speed), speedAfterChangingGear(speedAfterChangingGear) {}

int Bike::driveAndGetMileage() {
    changeGear();
    return Vehicle::driveAndGetMileage();
}

void Bike::changeGear() {
    speed = speedAfterChangingGear;
}
