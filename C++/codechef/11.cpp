#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    int floorOfx = ceil((x+9)/10 );
	    int floorOfy = ceil((y+9)/10 );

      int numOfFloor = abs(floorOfx - floorOfy);

      cout<<numOfFloor<<endl;
	}
  return 0;

}
