#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    
	    int speed_A = a/x;
	    int speed_B = b/y;
	    
	    if(speed_A > speed_B ){
	        
	        cout<<"Alice"<<endl;
	    }
	    else if(speed_A == speed_B) {
	        cout<<"Equal"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;

}
