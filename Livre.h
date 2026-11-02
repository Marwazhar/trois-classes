
#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Livre {

private:

    static int compteur;

    int id;
    string titre;
    string auteur;
    Date dateParution;

    int* notes;
    int nbNotes;

public:
    Livre(string t, string a, Date d);
    Livre(const Livre& l);
    ~Livre();
    Livre& operator=(const Livre& l);
    void ajouterNote(int note);
    double calculerMoyenne() const;
    void afficher() const;
    string getTitre() const;

};

#endif