//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike(std::string name, int mileage, int speed, int speedAfterChangingGear);

    int driveAndGetMileage() override;

    void changeGear();

protected:
    int speedAfterChangingGear;
};

#endif // BIKE_H
