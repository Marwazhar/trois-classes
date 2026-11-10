                
#include "Tableau.h"

class TableauBorne : public Tableau {
private:
    float min;
    float max;

public:
    TableauBorne(int n, float a, float b);
    const double& operator[](int i) const;
};

