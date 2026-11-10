#include "TableauBorne.h"
#include <cstdlib>

TableauBorne::TableauBorne(int n, float a, float b)
    : Tableau(n) {
    min = a;
    max = b;
}


const double& TableauBorne::operator[](int i) const {
    if (i >= 0 && i < taille)
        return Tab[i];

    exit(-1);
}