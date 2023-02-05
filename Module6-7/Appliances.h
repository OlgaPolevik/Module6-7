//
//  Appliances.h
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#ifndef Appliances_h
#define Appliances_h

#include <iostream>
#include "IElectronics.h"

using namespace std;

class Appliances : virtual public IElectronics
{
public:
    Appliances(int weight);
    virtual void ShowSpec() override;
protected:
    int _weight;
};

#endif /* Appliances_h */
