#include "Date.h"

Date::Date(int j, int m, int a) {

    if (estValide(j, m, a)) {
        jour = j;
        mois = m;
        annee = a;
    }
    else {
        cout << "Date invalide !" << endl;

        jour = 1;
        mois = 1;
        annee = 2000;
    }
}
bool Date::estBissextile(int a) {

    return (a % 4 == 0 && a % 100 != 0)
        || (a % 400 == 0);
}

bool Date::estValide(int j, int m, int a) {

    if (j < 1 || m < 1 || m > 12 || a < 1 || a > 2026)
        return false;

    int joursMois[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (estBissextile(a)) {
        joursMois[1] = 29;
    }

    if (j > joursMois[m - 1]) {
        return false;
    }

    return true;
}
void Date::afficher() const {

    cout << jour << "/" << mois << "/" << annee << endl;
}
Date& Date::operator=(const Date& d) {

    if (this != &d) {
        jour = d.jour;
        mois = d.mois;
        annee = d.annee;
    }

    return *this;
}


}                                   