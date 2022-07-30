#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int a1=max(a,b);
	    int a2=max(c,d);
	    
	    cout<<a1+a2<<endl;
	    
	}
	
	return 0;
}
