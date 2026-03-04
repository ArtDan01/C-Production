#include <iostream>
#include <vector>
#include <optional>
#include <iomanip>
#include </home/artem/Stepik/C-Production/STEPIK2026/Chapter3/C3P2/plane_fuel.hpp>

std::optional<double> calculateRefuel(int, int, int);

struct TestCase {
    int range1;
    int range2;
    int weight;
    std::optional<double> expected;
};

int main()
{
    std::vector<TestCase> tests = {
        {20, 100, 600, 80.0},
        {10, 20, 2500, std::nullopt},
        {-10, 20, 600, std::nullopt},
        {1000, 1200, 600, std::nullopt},
        {10, 20, 100, 0.0}
    };

    int passed = 0;

    for (size_t i = 0; i < tests.size(); ++i)
    {
        auto result = calculateRefuel(
            tests[i].range1,
            tests[i].range2,
            tests[i].weight
        );

        bool ok = result == tests[i].expected;

        if (ok)
        {
            std::cout << "Test " << i+1 << " PASSED\n";
            passed++;
        }
        else
        {
            std::cout << "Test " << i+1 << " FAILED\n";
        }
    }

    std::cout << "\nPassed "
              << passed << " / "
              << tests.size() << "\n";
}