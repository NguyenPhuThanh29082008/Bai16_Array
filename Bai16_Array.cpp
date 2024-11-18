// Bai16_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };
    cars[1] = "Vinfast";
    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\n";
    }
    return 0;
}
