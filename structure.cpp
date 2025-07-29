#include<iostream>
#include<string>
using namespace std;

struct man {
  string name;
  int age;
  int birthYear;
  float tall;
};

int main(){

    man myObj;
    myObj.name="Fazle";
    myObj.age=23;
    myObj.birthYear=2002;
    myObj.tall=5.8;

    cout<<myObj.name<<" "<<myObj.age<<" "<<myObj.birthYear<< " "<<myObj.tall;
    
    return 0;
}



