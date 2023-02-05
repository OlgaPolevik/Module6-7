//
//  SmartLamp.cpp
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#include <stdio.h>
//#include "Device.h"
//#include "Appliances.h"
#include "SmartLamp.h"

SmartLamp::SmartLamp(int batteryLife, int weight, int power) : Device(batteryLife), Appliances(weight), _power(power)
{
    
}

void SmartLamp::ShowSpec()
{
    cout << "Умный светильник, время работы аккумулятора: " << _batteryLife << "ч., " << "вес: " << _weight << "гр., " << "мощность: " << _power << "Вт." << endl;
}

