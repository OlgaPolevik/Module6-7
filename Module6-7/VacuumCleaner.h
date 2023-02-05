//
//  VacuumCleaner.h
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#ifndef VacuumCleaner_h
#define VacuumCleaner_h

#include <iostream>
#include "IElectronics.h"
#include "Appliances.h"

using namespace std;

class VacuumCleaner final : public Appliances
{
public:
    VacuumCleaner(int weight, string color);
    void ShowSpec() override;
private:
    string _color;
};

#endif /* VacuumCleaner_h */
