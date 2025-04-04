//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "OffRoader.h"

OffRoader::OffRoader(std::string name, int mileage, int speed, int speedAfterChangingGear, bool hasFatTyres)
        : Bike(name, mileage, speed, speedAfterChangingGear), hasFatTyres(hasFatTyres) {}

int OffRoader::driveAndGetMileage() {
    if (hasFatTyres && speed > 0)
        speed -= 1; // slowing down because tired
    return Bike::driveAndGetMileage();
}
