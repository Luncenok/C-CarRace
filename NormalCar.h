//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#ifndef NORMALCAR_H
#define NORMALCAR_H

#include "Car.h"

class NormalCar : public Car {
public:
    NormalCar(std::string name, int mileage, int speed, int nitro, int numDoors);

    int driveAndGetMileage() override;

    void unlockHiddenPower();

protected:
    int numDoors;
};

#endif // NORMALCAR_H
