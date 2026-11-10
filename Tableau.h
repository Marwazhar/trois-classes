#include<iostream>
using namespace std;
class Tableau{
    protected:
        int taille;
        double* Tab;

    public:
        Tableau(int n);
        ~Tableau();

        Tableau(const Tableau& T);

        Tableau& operator=(const Tableau& T);

        double& operator[](int i)const;
    };




};

