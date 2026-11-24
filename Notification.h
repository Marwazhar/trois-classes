#include<iostream>
#include<string>
using namespace std;
class Notification {
  protected:
	  string destinataire;
	  string message;
public:
	Notification(string d, string m);
	 virtual void afficher();
	virtual void envoyer()=0;
	virtual ~Notification();

};

