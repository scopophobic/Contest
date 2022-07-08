#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;



int main() {
    int n=9;
    
  int arr[n]={5,4,3,2,4,2,2,3,3};
  
  sort(arr,arr+n);
  
  int a,b;
  int t;
  cin>>t;
  while(t--){
      
        cin >> a >> b;
    int c = a^b, x = 2^a, y = 2^b, z = 2^c;

        vector<int> array = {2};
        if(x&1) array.push_back(x);
        if(y&1) array.push_back(y);
        if(z&1) array.push_back(z);
        sort(array.begin(),array.end());
    for_each(array.begin(),array.end(),[](const auto& el) {
                 cout << el << " ";
             });cout<<endl;
  }
  return 0;
}
