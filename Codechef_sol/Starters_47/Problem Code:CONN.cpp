#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    bool n=false;
	    int a=0;
	    
	    while(a<=x){
	        if((a-x)%2==0){
	            n=true;
	            break;
	            
	        }
	        a+=7;
	    }
	    if (n){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}
