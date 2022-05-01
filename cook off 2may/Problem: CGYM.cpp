
//https://www.codechef.com/COOK141D/problems/CGYM

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>z){
	        cout<<"0"<<endl;
	    }
	    if(x+y<=z){
	            cout<<"2"<<endl;
	            
	        }
	    else if(x<=z){
	        cout<<"1"<<endl;
	        
	    }
	    
	}
	
}
