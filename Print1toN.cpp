// #include <iostream>

// using namespace std;

//  int fun(int n){
//   if(n == 0)
//   return 0;

//   fun(n-1);
//   cout << n << endl;
// }
// int main() {
//   int n= 7;
//   fun(n);

//   return 0;

// }

// we never have to print n after the recursive call, it is not the best way to call coz its paraent and child function call many times that leads to coz bad time complexity

// so we use some variable to print the number as printing in n to 1

#include <iostream>

using namespace std;


int fun(int n, int k){

  if(n==0){
    return 0;
  }
  else{
    cout << k+1 << endl;
    // fun(n-1, k+1);  thsi is the best way to call tail recursion 
  }

}

int main() {



  int n =20;
  int k = 0;
  fun(n,k);
  return 0;

}


