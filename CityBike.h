//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#ifndef CITYBIKE_H
#define CITYBIKE_H

#include "Bike.h"

class CityBike : public Bike {
public:
    CityBike(std::string name, int mileage, int speed, int speedAfterChangingGear, bool hasBasket, Vehicle *target);

    int driveAndGetMileage() override;

    void throwRockFromBasket(Vehicle *other) const;

protected:
    bool hasBasket;
    Vehicle *target;
};

#endif // CITYBIKE_H
