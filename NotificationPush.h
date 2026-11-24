#ifndef NOTIFICATIONPUSH_H
#define NOTIFICATIONPUSH_H

#include "Notification.h"

class NotificationPush : public Notification
{
private:
    string application;

public:
    NotificationPush(string d, string m, string app);

    void afficher() override;

    void envoyer() override;
};

#endif

