/*Even Jumps
Little Mayur and his grandmother are learning mathematics. His grandmother has N blocks. Each block has a shape of cube and a number 
is written on top of it. She keeps his pet frog, Tony, at the first block. Tony can jump two blocks at a time, such that if it is at 
1st block, it can jump to 3rd block and from 3rd block to 5th block and so on.

Grandmother wants Mayur to find sum of numbers on all the blocks that Tony has landed. Can you help Mayur find the sum.

Input Format:
The first line of input contains an integer, that denotes the value of N. The following line contains N space separated integers. 

Output Format:
The first and only line of output contains the sum of numbers on all the blocks that Tony has landed.

Constraints:
N lies in the range: [1, 100]
Value of numbers on blocks lies in the range: [1, 10000]         
-----------------
Sample Input 1
5
1 2 3 4 5 
Sample Output 1
9
Explanation
Tony will land on blocks with numbers 1, 3 and 5 and hence the sum is 9.
*/

#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum=0;
    int i=0;
    while(i<n){
        sum+=arr[i];
        i+=2;
    }
    cout<<sum<<endl;
    return 0;
    
}
