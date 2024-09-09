#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
      int count=0;
      int notCount = 0;
	    for(int i=0; i<n; i++){
	        
	        cin>>arr[i];
	        if(arr[i]>=10 && arr[i]<=60){
              count++;
          }
          else{
            notCount++;
          }

	    }
      cout<<count<<endl;
	}
  return 0;

}
