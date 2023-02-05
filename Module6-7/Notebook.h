//
//  Notebook.h
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#ifndef Notebook_h
#define Notebook_h

#include <iostream>
#include "IElectronics.h"
#include "Device.h"

using namespace std;

class Notebook final : public Device
{
public:
    Notebook(int batteryLife, string cpu);
    void ShowSpec() override;
private:
    string _cpu;
};

#endif /* Notebook_h */
