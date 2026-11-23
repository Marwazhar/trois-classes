
#include "Voiture.h"

class VoitureElectro : public Voiture
{
private:
    int niveauBatterie;

public:
    VoitureElectro(int q, string m, int v, int NB);

    void afficher();

    ~VoitureElectro();
};