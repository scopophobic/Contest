#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    string result="NO";
	    int d=min(min(a,b),min(b,c));
	    if(a==b && a==d){
	        result="YES";
	    }
	    else if(a==c && a==d){
	        result="YES";
	    }
	    else if(b==c && b==d){
	        result="YES";
	    }
	    
	    cout<<result<<endl;
	    
	}
	
	return 0;
}
