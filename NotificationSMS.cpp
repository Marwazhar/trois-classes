#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string d, string m, string op)
    : Notification(d, m)
{
    operateur = op;
}

void NotificationSMS::afficher()
{
    cout << "SMS" << endl;
    cout << "Numero : " << destinataire << endl;
    cout << "Operateur : " << operateur << endl;
    cout << "Message : " << message << endl;
}

void NotificationSMS::envoyer()
{
    cout << "Envoi SMS..." << endl;
}
