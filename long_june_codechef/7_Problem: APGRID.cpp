// Problem: APGRID Contest: JUNE222D

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void free0ne(int n,int m){
    for(int i=0;i<m;i++){
        cout<<i+1<<" ";
        cout<<endl;
    }
    int fdone=1+n+1;
    for(int i=1;i<n;i++){
        int mdone=fdone;
        cout<<mdone<<" ";
        for(int j=1;j<m;j++){
        cout<<mdone+i+1<<" ";
        mdone+=(i+1);
    }
    fdone+=(n+1);
    cout<<endl;
    }
}
void freetwo(int n,int m){
    
    int ss;
    for(int i=0,a=m+1;i<n;i++,a++){
        ss=i+1;
        cout<<ss<<" ";
        for(int j=1;j<m;j++){
            cout<<ss+a<<" ";
            ss+=a;
        }
        cout<<endl;
    }
}
int main() {
 long long t;
 cin>>t;
 while(t--){
     int arr[]={3,4,5,3,2,5,7};
     sort(arr,arr+7);
     int n,m;
     cin>>n>>m;
     
     if(n<m){
         free0ne(n,m);
     }
     else{
         freetwo(n,m);
     }
 }
 return 0;
}
