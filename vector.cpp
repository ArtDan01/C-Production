#include <iostream>
#include <vector>
using namespace std;

size_t find_range_n(vector<int>& vec, int number){
    size_t max = 0;
    size_t tempMax = 0;

    for(auto n : vec){
        if (n == number){
            tempMax++;
        }
        else{
            max = std::max(tempMax, max);
            tempMax = 0;
        }
    }
    return std::max(tempMax, max);
}

int main(){
  std::vector<int> v{0, 11111, 2345, 23232, 333333, 11};
 return 0;
}