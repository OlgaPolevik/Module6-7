//
//  IElectronics.h
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#ifndef IElectronics_h
#define IElectronics_h

#include <iostream>

class IElectronics
{
public:
    virtual void ShowSpec() = 0;
    virtual ~IElectronics() = default;
};

#endif /* IElectronics_h */
