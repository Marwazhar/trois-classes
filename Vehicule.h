#include<iostream>
using namespace std;
class Vehicule{
private:
	string marque;
	int vitesse;
public:
	Vehicule(string m, int v);
	 void afficher();
	virtual ~Vehicule();

};

