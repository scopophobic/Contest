// Problem: PAIREQ Contest: JUNE222D 

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
	    sort(arr, arr + n);
	    
	    map <int, int> count;
	    int m_count=0;
	    
	    for(auto i:arr){
	        count[i]++;
	        m_count=max(m_count,count[i]);
	    }
	    int a=n-m_count;
	    cout<<a<<endl;
	    
	    
	    
	}
	return 0;
}
