#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)


int main(){
    int t;
    cin>>t;
    
    
    while(t--){
        ll n,q;
        int o=0,e=0;
        cin>>n>>q;
        ll arr[n];
        
        ll sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(x%2==0) e++;
            else o++;
        }
       
        while(q--){
            ll x,y;
            cin>>x>>y;
            int temp=1;
            if(x==0){
                temp=y*e;
                if(y%2!=0){
                    o=n;
                    e=0;
                }
            }
            else {
                temp=y*o;
                if(y%2!=0){
                    e=n;
                    o=0;
                }
            }
            sum+=temp;
            
            cout<<sum<<endl;
        }
    }
    return 0;
}
