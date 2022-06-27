// Problem: STRNG Contest: JUNE222D

#include<bits/stdc++.h> 
#include<iostream> 
#include<algorithm> 
using namespace std; 
void fil(int rep[],int a[],int arr[],int n){ 
    rep[0]=a[0]; 
    for(int i=1;i<n;i++) 
        rep[i]=__gcd(rep[i-1],a[i]); 
    arr[n-1]=a[n-1]; 
    for(int i=n-2;i>=0;i--) 
        arr[i]=__gcd(arr[i+1],a[i]); 
} 
int gcoutra(int p,int r,int rep[],int arr[],int n){ 
    if(p==0)  
        return arr[r+1]; 
    if(r==n-1) 
        return rep[p-1]; 
         
    return __gcd(rep[p-1],arr[r+1]); 
} 
    int main(){ 
    // your code goes here 
    int t; 
    cin >>t; 
    while(t--){ 
    int n; 
    cin >>n; 
        int rep[n],arr[n]; 
        int a[n]; 
        for(int i=0;i<n;i++){ 
            cin >>a[i]; 
        } 
    fil(rep,a,arr,n); 
    int ans=0; 
    for(int i=0;i<n;i++){ 
        if((gcoutra(i,i,rep,arr,n))>1){ 
                 ans ++; 
        } 
    } 
   cout << ans << endl; 
   } 
   return 0; 
    }
