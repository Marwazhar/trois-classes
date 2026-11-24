#include "Notification.h"

Notification::Notification(string d, string m)
{
    destinataire = d;
    message = m;
}

void Notification::afficher()
{
    cout << "Destinataire : " << destinataire << endl;
    cout << "Message : " << message << endl;
}

Notification::~Notification()
{
}