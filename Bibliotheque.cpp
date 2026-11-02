#include "Bibliotheque.h"

namespace biblio {

    int Bibliotheque::nbBibliotheques = 0;

    Bibliotheque::Bibliotheque(string n, int c) {
        nom = n;
        capacite = c;
        nbLivres = 0;

        livres = new Livre * [capacite];

        for (int i = 0; i < capacite; i++) {
            livres[i] = nullptr;
        }

        nbBibliotheques++;
    }

   
    Bibliotheque::Bibliotheque(const Bibliotheque& b) {
        nom = b.nom;
        capacite = b.capacite;
        nbLivres = b.nbLivres;

        livres = new Livre * [capacite];

        for (int i = 0; i < nbLivres; i++) {
            livres[i] = new Livre(*b.livres[i]);
        }

        for (int i = nbLivres; i < capacite; i++) {
            livres[i] = nullptr;
        }

        nbBibliotheques++;
    }

    Bibliotheque& Bibliotheque::operator=(const Bibliotheque& b) {
        if (this != &b) {

            for (int i = 0; i < nbLivres; i++) {
                delete livres[i];
            }

            delete[] livres;

            nom = b.nom;
            capacite = b.capacite;
            nbLivres = b.nbLivres;

            livres = new Livre * [capacite];

            for (int i = 0; i < nbLivres; i++) {
                livres[i] = new Livre(*b.livres[i]);
            }

            for (int i = nbLivres; i < capacite; i++) {
                livres[i] = nullptr;
            }
        }

        return *this;
    }

    Bibliotheque::~Bibliotheque() {
        for (int i = 0; i < nbLivres; i++) {
            delete livres[i];
        }

        delete[] livres;

        nbBibliotheques--;
    }

    Livre& Bibliotheque::ajouterLivre(const Livre& l) {

        if (nbLivres >= capacite) {
            throw runtime_error("Bibliotheque pleine !");
        }

        livres[nbLivres] = new Livre(l);

        nbLivres++;

        return *livres[nbLivres - 1];
    }

    Bibliotheque& Bibliotheque::operator+=(const Livre& l) {
        ajouterLivre(l);

        return *this;
    }

    Livre* Bibliotheque::rechercher(int id) const {

        for (int i = 0; i < nbLivres; i++) {

            if (livres[i]->getId() == id) {
                return livres[i];
            }
        }

        return nullptr;
    }