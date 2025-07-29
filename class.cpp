#include<iostream>
#include<string>
using namespace std;

class Me{
    public:
    string name;
    string hireColor;
    int age;
    int birthYear;
};

int main(){
    Me myObj;
    myObj.name="fazle";
    myObj.hireColor="black";
    myObj.age=23;
    myObj.birthYear=2002;

    cout<<myObj.name<<" "<<myObj.hireColor<<" "<<myObj.age<<" "<<myObj.birthYear;
    
    return 0;
}