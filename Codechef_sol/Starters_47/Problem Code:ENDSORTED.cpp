#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> arr(n,0);
	    int a1,a2;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==1)a1 = i;
	        if(arr[i]==n)a2 = i;
	    }
	    
	    int r=0;
	    if(a1==0 && a2==n-1)r=0;
	    else if(a1==0 and a2!=n-1)r=n-1-a2;
	    else if(a1!=0 and a2==n-1)r=a1;
	    else{
	        r=n-1 -a2+a1;
	        if(a2<a1) r-=1;
	    }
	    cout<<r<<endl;
	    
	    
	}
	return 0;
}
