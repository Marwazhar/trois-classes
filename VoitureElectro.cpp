#include "VoitureElectro.h"

VoitureElectro::VoitureElectro(int q, string m, int v, int NB)
    : Voiture(q, m, v)
{
    this->niveauBatterie = NB;
}

void VoitureElectro::afficher()
{
    Voiture::afficher();

    cout << "Le niveau de batterie de la voiture est : "
        << this->niveauBatterie << endl;
}

VoitureElectro::~VoitureElectro()
{
    cout << "Destructeur de la classe VoitureElectro" << endl;
}