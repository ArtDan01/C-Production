#include <iostream>
#include <vector>
#include <optional>
#include <iomanip>
using namespace std;

int vasya(int calc, int var1, int var2){

    int result = 0;

    if((calc == 1) || (calc == 2) || (calc == 3) ){

    if(calc == 1){

        int fee = var1;
        int late_cnt = var2;

        int late_money = late_cnt / 3 * 20;
        fee += late_money;
        int code_lines = fee / 50 * 100;
        if(fee % 50 != 0) code_lines += 100;
        result = code_lines;
        cout << result << endl;
        return result;
    }

    if(calc == 2){

        int code_lines = var1;
        int fee_related = var2;

        if(code_lines / 100 * 50 < fee_related){
            cout << "ERROR" << endl;
        } 
        else {
            result = ((code_lines / 100 * 50 - fee_related) / 20) * 3 + 2;
            cout << result << endl;
        }
        return result;
    }

    if(calc == 3){

        int code_lines = var1;
        int late_cnt = var2;

        result = (code_lines / 100) * 50 - (late_cnt / 3) * 20;
        if(result < 0) result = 0;
        cout << result << endl;
        return result;
    }
    }
    else {
        cout << "ERROR" << endl;
        
    }

    return 0;
}

struct TestCase {
    int calc;
    int var1;
    int var2;
    std::optional<double> expected;
};

int main() {
    // put your code here
    /*
    50 $ за каждые 100 строк
    */

       std::vector<TestCase> tests = {
        {1, 1030, 4, 2100},
        {2, 3125, 1100, 68},
        {3, 2370, 7, 1100},
        {5, 1000, 20, std::nullopt},
        {1, 2100, 2, 4200},
        {2, 500, 1000, std::nullopt},
        {3, 500, 40, 0},
        {1, 5040, 10, 10200},
        {1, 810, 50, 2300},
        {2, 3423, 1500, 32},
        {3, 4248, 11, 2040},
    };

     int passed = 0;

    for (size_t i = 0; i < tests.size(); ++i)
    {
        auto result = vasya(
            tests[i].calc,
            tests[i].var1,
            tests[i].var2
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
    

    return 0;
}