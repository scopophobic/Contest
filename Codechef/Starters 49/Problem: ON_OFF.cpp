#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    string r;
	    cin>>s>>r;
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(s[i]!=r[i]){
	            c+=1;
	        }
	    }
	    if(c%2==0 || c==0){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	
	return 0;
}
