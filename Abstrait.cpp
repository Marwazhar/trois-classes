// Abstrait.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"

using namespace std;

int main()
{
    NotificationEmail email("email@gmail.com", "Bonjour", "Bienvenue");
    NotificationSMS sms("0612345678", "Votre code est 1234", "Maroc Telecom");
    NotificationPush push("User102", "Paiement confirme", "MyBank");

    Notification* tab[3];

    tab[0] = &email;
    tab[1] = &sms;
    tab[2] = &push;

    for (int i = 0; i < 3; i++)
    {
        tab[i]->afficher();
        tab[i]->envoyer();

        cout << "-------------------" << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
