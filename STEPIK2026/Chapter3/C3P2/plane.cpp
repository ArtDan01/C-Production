#include <iostream>
#include <iomanip>
#include "plane_fuel.hpp"

int main()
{
    int range1, range2, weight;
    std::cin >> range1 >> range2 >> weight;

    auto result = calculateRefuel(range1, range2, weight);

    if (!result.has_value())
    {
        std::cout << "ERROR\n";
    }
    else
    {
        std::cout << std::fixed
                  << std::setprecision(2)
                  << result.value()
                  << "\n";
    }

    return 0;
}