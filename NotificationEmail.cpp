#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string d, string m, string o)
    : Notification(d, m)
{
    objet = o;
}

void NotificationEmail::afficher()
{
    cout << "EMAIL" << endl;
    cout << "Destinataire : " << destinataire << endl;
    cout << "Objet : " << objet << endl;
    cout << "Message : " << message << endl;
}

void NotificationEmail::envoyer()
{
    cout << "Envoi Email" << endl;
}