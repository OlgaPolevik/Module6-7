//
//  main.cpp
//  Module6-7
//
//  Created by Ольга Полевик on 28.06.2021.
//

#include <iostream>
#include <string>
#include "IElectronics.h"
#include "Device.h"
#include "Appliances.h"
#include "Notebook.h"
#include "VacuumCleaner.h"
#include "SmartLamp.h"

using namespace std;

int main(int argc, char* argv[])
{
    setlocale (LC_ALL,"");
    IElectronics* shop[3];
    
    shop[0] = new Notebook(18, string ("Intel"));
    shop[1] = new VacuumCleaner(3000, string("красный"));
    shop[2] = new SmartLamp(8, 500, 18);
    
    bool open = true;
    while(open)
    {
        cout << "Выберите товар: 1 - ноутбук, 2 - пылесос, 3 - умный светильник, 0 - для выхода" << endl;
        int choice;
        cin >> choice;
        switch(choice)
        {
            case 1:
                shop[0] -> ShowSpec();
                break;
            case 2:
                shop[1] -> ShowSpec();
                break;
            case 3:
                shop[2] -> ShowSpec();
                break;
            case 0:
                open = false;
                break;
                
            default:
                cout << "Выберите товар от 1 до 3 или 0, чтобы выйти" << endl;
                break;
        }
    }
    return 0;
}
