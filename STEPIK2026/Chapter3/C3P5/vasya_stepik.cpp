#include <iostream>
using namespace std;
    
int main(){
    int calc, var1, var2;
    cin >> calc >> var1 >> var2;
    int result = 0;
    switch (calc)
    {
    case 1:
    {
        /* code */
        int fee = var1;
            int late_cnt = var2;

            int late_money = late_cnt / 3 * 20;
            fee += late_money;
            int code_lines = fee / 50 * 100;
            if(fee % 50 != 0) code_lines += 100;
            result = code_lines;
            cout << result << endl;
    }
        break;
    case 2:
    {
        int code_lines = var1;
            int fee_related = var2;

            if(code_lines / 100 * 50 < fee_related){
                cout << "ERROR" << endl;
            } 
            else {
                result = ((code_lines / 100 * 50 - fee_related) / 20) * 3 + 2;
                cout << result << endl;
            }
    }
        break;
    case 3:
    {
            int code_lines = var1;
            int late_cnt = var2;

            result = (code_lines / 100) * 50 - (late_cnt / 3) * 20;
            if(result < 0) result = 0;
            cout << result << endl;
            break;
    }
    default:
    cout << "ERROR" << endl;
        break;
    }   

    return 0;
}