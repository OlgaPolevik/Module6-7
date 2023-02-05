//
//  VacuumCleaner.cpp
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#include <stdio.h>
#include "VacuumCleaner.h"

VacuumCleaner::VacuumCleaner(int weight, string color) : Appliances(weight), _color(color)
{
    
}

void VacuumCleaner::ShowSpec()
{
    cout << _color << " пылесос, вес: " << _weight << "гр." << endl;
}
