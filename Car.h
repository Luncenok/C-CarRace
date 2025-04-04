//
// Created by Mateusz Idziejczak on 16/11/2023.
//
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string name, int mileage, int speed, int nitro);

    int driveAndGetMileage() override;

    int nitro();

protected:
    int nitroMaxSpeed;
};

#endif // CAR_H
