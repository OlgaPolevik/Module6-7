//
//  Notebook.cpp
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#include <stdio.h>
#include "Notebook.h"

Notebook::Notebook(int batteryLife, string cpu) : Device(batteryLife), _cpu(cpu)
{
    
}

void Notebook::ShowSpec()
{
    cout << "Ноутбук, CPU: "<< _cpu << " время работы аккумулятора: " << _batteryLife << "ч." << endl;
}
