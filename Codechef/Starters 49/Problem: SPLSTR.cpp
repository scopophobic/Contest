#include <bits/stdc++.h>

using namespace std;

int count(string fex, char a)
{
    int co = 0;
    for (auto i : fex)
    {
        if (i == a)
        {
            co++;
        }
    }
    return co;
}


int main()
{
    int t;
    cin >> t;
    while (t--){
        
	    int arr[]={2,3,4,2,1,3,4,5};
	    int size=sizeof(arr)/sizeof(arr[0]);
	    
	    int i=2;
	    while(i--)
	    {
	        for(int k=0;k<size;k++){
	            if(arr[k]>arr[k+1])
	            {
	                swap(arr[k],arr[k+1]);
	            }
	        }
	    }
        
    int n, k;
    string fex;
    cin >> n >> k >> fex;

    map<char, int> str;

    str['1'] = count(fex.begin(), fex.end(), '1');
    str['0'] = count(fex.begin(), fex.end(), '0');

    int ans = max(str['0'], str['1']) - min(str['0'], str['1']);

    int over = 0;
    if (ans % k)
    {
        over++;
    }

    ans /= k;
    ans += over;

    cout << ans << endl;

    }
    return 0;
}
