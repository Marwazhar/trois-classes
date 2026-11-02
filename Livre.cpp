#include "Livre.h"
int Livre::compteur = 0;

Livre::Livre(string t, string a, Date d) {

    id = ++compteur;
    titre = t;
    auteur = a;
    dateParution = d;

    notes = nullptr;
    nbNotes = 0;
}

Livre::Livre(const Livre& l) {

    id = ++compteur;
    titre = l.titre;
    auteur = l.auteur;
    dateParution = l.dateParution;

    nbNotes = l.nbNotes;

    if (nbNotes > 0) {
        notes = new int[nbNotes];

        for (int i = 0; i < nbNotes; i++) {
            notes[i] = l.notes[i];
        }
    }
    else {
        notes = nullptr;
    }
}


Livre::~Livre() {

    delete[] notes;

    cout << "Destruction du livre : "
        << titre << endl;
}

Livre& Livre::operator=(const Livre& l) {

    if (this != &l) {

        int* nouveau = nullptr;

        if (l.nbNotes > 0) {

            nouveau = new int[l.nbNotes];

            for (int i = 0; i < l.nbNotes; i++) {
                nouveau[i] = l.notes[i];
            }
        }

        delete[] notes;

        titre = l.titre;
        auteur = l.auteur;
        dateParution = l.dateParution;

        nbNotes = l.nbNotes;
        notes = nouveau;
    }

    return *this;
}

void Livre::ajouterNote(int note) {

    if (note < 0 || note > 20) {
        cout << "Note invalide !" << endl;
        return;
    }

    int* nouveau = new int[nbNotes + 1];

    for (int i = 0; i < nbNotes; i++) {
        nouveau[i] = notes[i];
    }

    nouveau[nbNotes] = note;

    delete[] notes;

    notes = nouveau;

double Livre::calculerMoyenne() const {

    if (nbNotes == 0)
        return 0;

    int somme = 0;

    for (int i = 0; i < nbNotes; i++) {
        somme += notes[i];
    }

    return (double)somme / nbNotes;
}

void Livre::afficher() const {

    cout << "ID : " << id << endl;
    cout << "Titre : " << titre << endl;
    cout << "Auteur : " << auteur << endl;

    cout << "Date de parution : ";
    cout << dateParution << endl;

    cout << "Notes : ";

    for (int i = 0; i < nbNotes; i++) {
        cout << notes[i] << " ";
    }

    cout << endl;

    cout << "Moyenne : " << calculerMoyenne() << endl;
}

string Livre::getTitre() const {

    return titre;
}


}
