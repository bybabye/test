#include<iostream>
#include<iomanip>
using namespace std;

main(){
	string s;
    cin>>s;
	if(s[0] == '-')
        cout<<s.length() - 1;
    else
        cout<<s.length();
}
