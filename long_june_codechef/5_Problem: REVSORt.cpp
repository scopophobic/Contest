// Problem: REVSORT Contest: JUNE222D 


#include <bits/stdc++.h>
using namespace std;

bool check(){
    int n,x;
	    cin>>n>>x;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int f;
	    
	    for(int i=0;i<n-1 ;i++){
	        if(arr[i]>arr[i+1]){
	            if(arr[i]+arr[i+1] > x){
	                return 0;
	            }
	            else{
	                swap(arr[i],arr[i+1]);
	            }
	        }
	        
	    }
	    return 1;
}




int main() {
	int t;
	cin>>t;
	while(t--){
	    int ans=check();
	    if(ans){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
