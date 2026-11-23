// NewEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "VoitureElectro.h"

using namespace std;

int main() {

    Voiture V1(4, "Dacia", 180);

    cout << "----- Voiture -----" << endl;
    V1.afficher();

    cout << endl;

    VoitureElectro V2(4, "Tesla", 220, 90);

    cout << "----- Voiture Electrique -----" << endl;
    V2.afficher();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
