#pragma once
#include "Vehicule.h"
class Voiture :  public Vehicule{
private:
	int quantite;	
public:
	Voiture(int q,string,int);
	void Afficher();
	~Voiture();


};

