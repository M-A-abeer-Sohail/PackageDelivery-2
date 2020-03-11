#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
// #include "truck.hpp"
// #include "node.hpp"
// #include "box.hpp"

using namespace std;

// int main()
// {
//     TruckDelivery delivery;
//     delivery.loadTrucks();
//     delivery.calculateCost();
//     delivery.makeJourney();
//     delivery.unloadTrucks();
//     return 0;
// }

int main()
{
    char line[100];
    int count;
    int n;
    ifstream myfile("Drivers.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {

            cout << line << '\n';
        }
        myfile.close();
    }

    else
        cout << "Unable to open file";

    return 0;
}