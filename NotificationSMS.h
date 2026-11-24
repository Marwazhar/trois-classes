#ifndef NOTIFICATIONSMS_H
#define NOTIFICATIONSMS_H

#include "Notification.h"

class NotificationSMS : public Notification
{
private:
    string operateur;

public:
    NotificationSMS(string d, string m, string op);

    void afficher() override;

    void envoyer() override;
};

#endif