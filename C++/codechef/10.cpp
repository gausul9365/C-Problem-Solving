#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  // cup final

  int t;
  cin>>t;
  while(t--){

    int n,m,d;
    cin>>n>>m>>d;

    int z = abs(n-m);
    if(z<=d){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
  return 0;


}
