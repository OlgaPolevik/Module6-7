//
//  Appliances.cpp
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#include <stdio.h>
#include "Appliances.h"

using namespace std;

Appliances::Appliances(int weight) : _weight(weight)
{
    
}

void Appliances::ShowSpec()
{
    cout << "Вес: " << _weight << endl;
}
