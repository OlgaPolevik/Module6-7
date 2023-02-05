//
//  Device.h
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#ifndef Device_h
#define Device_h

#include <iostream>
#include "IElectronics.h"

using namespace std;

class Device : virtual public IElectronics
{
public:
    Device(int batteryLife);
    virtual void ShowSpec() override;
protected:
    int _batteryLife;
};

#endif /* Device_h */
