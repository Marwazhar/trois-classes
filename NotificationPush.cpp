#include "NotificationPush.h"

NotificationPush::NotificationPush(string d, string m, string app)
    : Notification(d, m)
{
    application = app;
}

void NotificationPush::afficher()
{
    cout << "PUSH" << endl;
    cout << "Destinataire : " << destinataire << endl;
    cout << "Application : " << application << endl;
    cout << "Message : " << message << endl;
}

void NotificationPush::envoyer()
{
    cout << "Envoi Push..." << endl;
}
