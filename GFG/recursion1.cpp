#include <iostream>
#include <vector>

using namespace std;

void fun1(){
  cout<<"before fun1"<<endl;
}

void fun2(){
  cout<<"i am Fun2"<<endl;
  fun1();
  cout<<"After Fun 1"<<endl;
}

int main(){

cout<<"Before fun 2"<<endl;
fun2();

  return 0;
}