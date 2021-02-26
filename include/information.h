#ifndef INFORMATION_H
#define INFORMATION_H

#include "warehouse.h"
#include "narges.h"
#include "kokab.h"
#include "laleh.h"
#include "lilium.h"
#include "magnolia.h"
#include "maryam.h"
#include "orkideh.h"
#include "sonbol.h"
#include "vase.h"
#include <vector>

class Information
{
public:
    Information();
    WareHouse WareHouse;
    Vase VaseL[5];
    void SetNumbers(std::vector<Flower *>&);
    int GenRan1();
    int GenRan2();

    std::vector<Flower*>Flowers;
};

#endif // INFORMATION_H
