#include <iostream>

using namespace std;

int fun(int n){
  if(n==0)
  return 0;

  cout<<n<<endl;
    fun(n-1);
}

int main() {
  int n = 25;
  fun(n);
  return 0;

}

