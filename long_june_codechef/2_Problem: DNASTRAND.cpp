// Problem: DNASTRAND Contest: JUNE222D 

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='A'){
	            cout<<"T";
	        }
	        else if(s[i]=='T'){
	            cout<<"A";
	        }
	        else if(s[i]=='G'){
	            cout<<"C";
	        }
	        else{
	            cout<<"G";
	        }
	        
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
