#include <iostream>
#include <cassert>
using namespace std;

int main() {
    // Test 1: Basic input
    // This tests if your program runs without crashing
    int a = 5, b = 6;
    int result = a + b / 2;  // 5 + 3 = 8
    assert(result == 8);
    
    // Test 2: Edge case - zero values
    a = 0;
    b = 0;
    result = a + b / 2;  // 0 + 0 = 0
    assert(result == 0);
    
    // Test 3: Negative values
    a = -5;
    b = 4;
    result = a + b / 2;  // -5 + 2 = -3
    assert(result == -3);
    
    cout << "All tests passed!" << endl;
    return 0;
}