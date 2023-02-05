//
//  SmartLamp.h
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#ifndef SmartLamp_h
#define SmartLamp_h

#include <iostream>
#include "IElectronics.h"
#include "Device.h"
#include "Appliances.h"

using namespace std;

class SmartLamp final: public Device, Appliances
{
public:
    SmartLamp(int batteryLife, int weight, int power);
    void ShowSpec() override;
private:
    int _power;
};

#endif /* SmartLamp_h */
