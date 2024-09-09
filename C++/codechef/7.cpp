#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int z= (n+4)/4;
	    if(n<=4){
	    cout<<z-1<<endl;
	    }
	    else{
	        cout<<z<<endl;
	    }
	}
	return 0;

}
