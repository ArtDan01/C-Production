#include<iostream>
using namespace std;

int main(){
    const char* names[] = { "Анна", "Андрей", "Степан", "Мария", "Сергей" };
    //put your code here
    const char** males[]={names + 1, names + 2, names + 4};
    const char** females[]={names, names + 3};
    for (int i = 0; i < 2; i++)
		cout << *females[i] << " ";
	cout << endl;
    for (int i = 0; i < 3; i++)
		cout << *males[i] << " ";
	cout << endl;
    return 0;
}