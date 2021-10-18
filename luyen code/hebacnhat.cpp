#include<iostream>
using namespace std;
main(){
    int n ;
    cin>>n;
    if(n == 0)
        cout<<"INF";
    else{
        for(int i  = n ; i > 0 ; i--){
            if(n % i == 0){
                cout<<i;
            }	
        }
    }
}
