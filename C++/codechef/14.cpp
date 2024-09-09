#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;

        cin >> a >> b >> c;
        
       int z = max(a,b);
       int y = min(a,b);
       
       if(z>c){
        if(a>b){
          cout << b << endl;
        }
        else{
            cout<<c<<endl;
        }
           
       }
       else if(z<c){
           cout<<z<<endl;
       }
      
    }
    return 0;

}