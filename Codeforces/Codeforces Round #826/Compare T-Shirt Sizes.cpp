#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

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



int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
    string a,b;
    cin>>a>>b;
    int count1=0,count2=0;
    int x=a.length();
    int y=b.length();
    for(int i=0,j=0;i<a.length(),j<b.length();i++,j++){
      if(a[i]=='X')
        count1++;
      if(b[j]=='X')
        count2++;
    }
    if(a[x-1]=='S' && b[y-1]=='M')
      cout<<"<\n";
    else if(a[x-1]=='S' && b[y-1]=='L')
      cout<<"<\n";
    else if(a[x-1]=='M' && b[y-1]=='L')
      cout<<"<\n";
    else if(a[x-1]=='L' && b[y-1]=='S')
      cout<<">\n";
    else if(a[x-1]=='L' && b[y-1]=='M')
      cout<<">\n";
    else if(a[x-1]=='M' && b[y-1]=='S')
      cout<<">\n";
    else{
      if(a[x-1]=='S'){
      if(count1==count2)
        cout<<"=\n";
      else if(count1>count2)
        cout<<"<\n";
      else
        cout<<">\n";
      }
      else{
        if(count1==count2)
          cout<<"=\n";
        else if(count1>count2)
        cout<<">\n";
        else
        cout<<"<\n";
      }
    }
  }
  return 0;
}
