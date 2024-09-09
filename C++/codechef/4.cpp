#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin>>T;
    while(T--){
        int N;
        cin>>N; // Take input for N before the for loop
        int x=0;
        int y=0;
        
        for(int i=0; i<N; i++){
            int num;
            cin>>num;
            
            if(num>=1000){
                x++;
            }
            else{
                y++;
            }
        }
        cout<<x<<endl; // Print the value of x after the for loop
    }
    return 0;
}