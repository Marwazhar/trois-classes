
#include <iostream>
#include "Tableau.h"

using namespace std;


Tableau::Tableau(int n) {
    taille = n;
    Tab = new double[taille];

    for (int i = 0; i < taille; i++) {
        Tab[i] = 0;
    }
}

Tableau::~Tableau() {
    delete[] Tab;
}

Tableau::Tableau(const Tableau& T) {
    taille = T.taille;
    Tab = new double[taille];

    for (int i = 0; i < taille; i++) {
        Tab[i] = T.Tab[i];
    }
}


Tableau& Tableau::operator=(const Tableau& T) {
    if (this != &T) {
        delete[] Tab;

        taille = T.taille;
        Tab = new double[taille];

        for (int i = 0; i < taille; i++) {
            Tab[i] = T.Tab[i];
        }
    }

    return *this;
}
double& Tableau::operator[](int i)const {
    if (i >= 0 && i < taille) {
        return Tab[i];
    }

}