#include <iostream>;
#include <string>;
using namespace std;


class Teacher {

  private:
      double salary;

  public:
      string name;
      string dept;
      string sub;
      

      void changeDept(string newDept){
        dept = newDept;

      }

      // set salary
      void setSalary(double newSalary){
        salary = newSalary;
      }
      // get salary
      double getSalary(){
        return salary;
      }

};

int main()
{
  Teacher t1;

  t1.name = "Khurram";
  t1.dept = "CSIT";
  t1.sub = "C++";
  t1.setSalary(2500);

cout<<"information of Teacher is:" <<t1.name<<endl;
cout<<"information of Teacher is:" <<t1.dept<<endl;
cout<<"information of Teacher is:" <<t1.sub<<endl;
cout<<"information of Teacher is:" <<t1.getSalary()<<endl;


  return 0;
};
