//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#ifndef OFFROADER_H
#define OFFROADER_H

#include "Bike.h"

class OffRoader : public Bike {
public:
    OffRoader(std::string name, int mileage, int speed, int speedAfterChangingGear, bool hasFatTyres);

    int driveAndGetMileage() override;

protected:
    bool hasFatTyres;
};

#endif // OFFROADER_H
