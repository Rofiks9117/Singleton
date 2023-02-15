#include <iostream>
#include "ChocolateBoiler.h"

int main()
{
    ChocolateBoiler* boiler = ChocolateBoiler::getlnstance();
    boiler->fill();
    boiler = ChocolateBoiler::getlnstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    return 0;
}