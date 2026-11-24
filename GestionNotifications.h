
#include "Notification.h"

class GestionnaireNotifications
{
private:
    Notification* tab[100];
    int nb;

public:
    GestionnaireNotifications();

    void ajouter(Notification* n);

    void envoyerToutes();
};