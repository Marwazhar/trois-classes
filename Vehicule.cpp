#include "Vehicule.h"


Vehicule::Vehicule(string m, int v)
{
	this ->vitesse =v;
	this ->marque = m;
}
void Vehicule::afficher() 
{
	cout << "la marque est : "<< this-> marque << endl;
	cout << "la vitesse est :  "<< this-> vitesse << endl;
}
Vehicule::~Vehicule()
{
	cout << "destructeur de classe Vehicule"<< endl;
}
