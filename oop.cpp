#include <iostream>

using namespace std;

class Person{
    public:
    string first_name;
    string second_name;
    string location;
    int age;
    Person(){};
    Person(string first_name, string second_name, string location, int age){
        this->first_name = first_name;
        this->second_name = second_name;
        this->location = location;
        this->age = age;
    }
};

class Show : public: Person{
    public:
    
    Show(const Person& Person){
        this->first_name = Person.first_name;
        this->second_name = Person.second_name;
        this->location = Person.location;
        this->age = Person.age;
    }
    const void ShowInfo(){
        cout << "First name:" << this->first_name << endl;
    }
};