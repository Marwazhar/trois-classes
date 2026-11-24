#include "Notification.h"

class NotificationEmail : public Notification{
private:
    string objet;

public:
    NotificationEmail(string d, string m, string o);

    void afficher() override;

    void envoyer() override;
};
