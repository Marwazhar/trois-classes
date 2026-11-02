#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:

   
    Date(int j = 1, int m = 1, int a = 2000);
    static bool estBissextile(int a);
    static bool estValide(int j, int m, int a);

    void afficher() const;
    Date& operator=(const Date& d);

   
};

#endif