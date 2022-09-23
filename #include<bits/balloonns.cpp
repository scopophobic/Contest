
#include<bits/stdc++.h>
using namespace std;
#include <unordered_map>

int burstingBalloons(int *arr, int n)
{

    unordered_map<int, int> arrowsAtHeight;
    for (int i = 0; i < n; i++)
    {
        if (arrowsAtHeight.find(arr[i]) != arrowsAtHeight.end())
        {
            
            arrowsAtHeight[arr[i]]--;
            if (arrowsAtHeight[arr[i]] == 0)
            {
                arrowsAtHeight.erase(arr[i]);
            }
        }

        
        arrowsAtHeight[arr[i] - 1]++;
    }

    int ans = 0;
    for (auto arrow : arrowsAtHeight)
    {
        ans += arrow.second;
    }

    return ans;
}



int main() {

	int n;
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<burstingBalloons(arr,n);
    return 0;
}
