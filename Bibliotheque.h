#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <iostream>
#include <string>
#include "Livre.h"

using namespace std;

namespace biblio {

    class Bibliotheque {
    private:
        string nom;
        Livre** livres;
        int nbLivres;
        int capacite;
        static int nbBibliotheques;

    public:
        Bibliotheque(string nom, int capacite);

        Bibliotheque(const Bibliotheque& b);

        Bibliotheque& operator=(const Bibliotheque& b);

        ~Bibliotheque();

        Livre& ajouterLivre(const Livre& l);

        Bibliotheque& operator+=(const Livre& l);

        Livre* rechercher(int id) const;
    };

}

#endif