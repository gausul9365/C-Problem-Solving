#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--){
	    
	    int a, s, d, f, i;
	    int x=0;
	    int y=0;
	    cin>>a>>s>>d>>f;
	    
	    int arr[i] = {a,s,d,f};
	    
	    for(i=0; i<3; i++){
	        
	        if(arr[i]==0){
	            x++;
	        }
	        else{
	            y++;
	        }
	    }
	    
	    if(x==4){
	        cout<<"IN"<<endl;
	    }
	    else{
	        cout<<"OUT"<<endl;
	    }
	    
	}
	return 0;
	

}
// test cases 
// 4
// 1 1 0 0
// 0 0 0 0
// 0 0 0 1
// 1 1 1 1