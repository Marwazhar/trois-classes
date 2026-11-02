
#include <iostream>
#include "Date.h"
#include "Livre.h"
#include "Bibliotheque.h"

using namespace std;
using namespace biblio;

int main() {

 
    Date d1(15, 5, 2024);
    Date d2(20, 8, 2023);
    Date d3(10, 3, 2025);

 
    Livre l1("POO C++", "Ahmed", d1);
    Livre l2("Langage C", "Ali", d2);
    Livre l3("Python", "Sara", d3);


    l1.ajouterNote(15);
    l1.ajouterNote(18);
    l1.ajouterNote(12);

    l2.ajouterNote(14);
    l2.ajouterNote(16);

    l3.ajouterNote(19);
    l3.ajouterNote(17);

    Bibliotheque b("Ma Bibliotheque", 5);

    b += l1;
    b += l2;
    b += l3;

    
    cout << "===== LES LIVRES =====" << endl;

    l1.afficher();
    cout << endl;

    l2.afficher();
    cout << endl;

   
    int id;
    cout << "Donner l'ID du livre a rechercher : ";
    cin >> id;

    Livre* resultat = b.rechercher(id);

    if (resultat != nullptr) {
        cout << "Livre trouve :" << endl;
        resultat->afficher();
    }
    else {
        cout << "Livre introuvable !" << endl;
    }

    return 0;
}