#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
{
    nb = 0;
}

void GestionnaireNotifications::ajouter(Notification* n)
{
    if (nb < 100)
    {
        tab[nb] = n;
        nb++;
    }
    else
    {
        cout << "Gestionnaire plein !" << endl;
    }
}

void GestionnaireNotifications::envoyerToutes()
{
    for (int i = 0; i < nb; i++)
    {
        tab[i]->envoyer();
    }
}