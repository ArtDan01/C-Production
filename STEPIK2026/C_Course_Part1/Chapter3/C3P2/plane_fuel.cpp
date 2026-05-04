#include "plane_fuel.hpp"

std::optional<double> calculateRefuel(
    int range1,
    int range2,
    int weight)
{
    if (range1 < 0 || range2 < 0 || weight <= 0)
        return std::nullopt;

    int consumption = 1;
    int fuel_volume = 300;

    if(weight > 500 && weight <= 1000) consumption = 4;
    if(weight > 1000 && weight <= 1500) consumption = 7;
    if(weight > 1500 && weight <= 2000) consumption = 9;
    if(weight > 2000) return std::nullopt;

    double max_range = (double)fuel_volume / consumption;

    if (max_range < range1)
        return std::nullopt;

    double stock = max_range - range1;

    if (max_range < range2)
        return std::nullopt;

    double refuel = (range2 - stock) * consumption;

    if (refuel < 0)
        refuel = 0;

    return refuel;
}