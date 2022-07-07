#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    map<int,int>mapp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mapp[arr[i]]++;
	        
	    }
	    sort(arr,arr+n);
	    
	    string s="YES";
	    
	    for(auto it:mapp){
	        if(it.second%it.first!=0){
	            s="NO";
	            break;
	        }
	    }
	    cout<<s<<endl;
	    
	        
	}
	
}
