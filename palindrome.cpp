#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool palindrome(string *str, int s, int e){

  if(s>=e){
    return true;
  }
  else{
    return (str[e]==str[s] && palindrome(str, e+1, s-1));
  }
}

int main() {

string str[20] = "abcba";


int s=0;

int e = 4;
cout << palindrome(str, s, e) << endl;


  

  return 0;

}

