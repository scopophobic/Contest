// Problem: ACS Contest: JUNE222D 

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int t=n%100;
	    int t1=n/100;
	    int a=t+t1;
	    if(a<=10){
	        cout<<a;
	        cout<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	
	return 0;
}
