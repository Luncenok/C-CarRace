//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "CityBike.h"

CityBike::CityBike(std::string name, int mileage, int speed, int speedAfterChangingGear, bool hasBasket, Vehicle *target)
        : Bike(name, mileage, speed, speedAfterChangingGear), hasBasket(hasBasket), target(target) {}

int CityBike::driveAndGetMileage() {
    throwRockFromBasket(target);
    return Bike::driveAndGetMileage();
}

void CityBike::throwRockFromBasket(Vehicle *other) const {
    if (hasBasket) {
        other->setSpeed(5);
    }
}
