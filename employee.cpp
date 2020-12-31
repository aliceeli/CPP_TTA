#include <iostream>
using namespace std;

class employee{
  public:

  string name;
  int year;
  string salary;
  string address;
};

int main() {

employee emp1;
emp1.name = "Robert";
emp1.year = 2018;
emp1.salary = "£25000";
emp1.address = "64C London Street";

employee emp2;
emp2.name = "Farah";
emp2.year = 2015;
emp2.salary = "£35000";
emp2.address = "68D Bristol Road";

employee emp3;
emp3.name = "Satinder";
emp3.year = 2019;
emp3.salary = "£32500";
emp3.address = "26B Salt Street";

cout <<emp1.name<<" "<<emp1.year<<" "<< emp1.salary<<" "<<emp1.address<< endl;
cout <<emp2.name<<" "<<emp2.year<<" "<< emp2.salary<<" "<<emp2.address<< endl;
cout <<emp3.name<<" "<<emp3.year<<" "<< emp3.salary<<" "<<emp3.address<< endl;

}


