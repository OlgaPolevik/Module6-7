//
//  Device.cpp
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#include <stdio.h>
#include "Device.h"

using namespace std;

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
    
}

void Device::ShowSpec()
{
    cout << "Время работы аккумулятора: " << _batteryLife  << endl;
}
