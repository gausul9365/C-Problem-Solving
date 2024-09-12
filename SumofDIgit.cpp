#include <iostream>

using namespace std;


int sumOfdigit(int n){
  
  int sum = 0;
  int rem ;
  if(n==0) return sum;
  else {
    rem = n%10;
  sum = rem + sumOfdigit(n/10);
  
  }
  return sum;
  
}

int main() {

  int n = 5743468;
  cout <<sumOfdigit(n) << endl;

  return 0;

}

