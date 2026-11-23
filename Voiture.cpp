#include "Voiture.h"

Voiture::Voiture(int q,string m,int v) :Vehicule(m,v){
	this->quantite = q;
}
void Voiture::Afficher(){
	cout << "quantite des Voiture: " << this->quantite <<endl;
}
Voiture::~Voiture()
{
	cout << "destructeur de la classe Voiture " << endl;
}