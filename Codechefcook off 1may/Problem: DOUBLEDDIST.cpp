//https://www.codechef.com/COOK141D/problems/DOUBLEDDIST


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    bool f=true;
	    sort(arr,arr+n);
	    for(int i=1;i<n-1;i++){
	        int x=arr[i]-arr[i-1];
	        int y=arr[i+1]-arr[i];
	        if(2*x!=y && x!=2*y){
	            f=false;
	            break;
	        }
	    }
	    if(f){
	        cout<<"YES"<<endl;
	        
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    } 
	}
	
	return 0;
}
