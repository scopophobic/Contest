//https://www.codechef.com/COOK141D/problems/LEAGUE


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int w=(n-1);
	    int s=(n-1)/2;
	    cout<<(w-s)*3<<endl;
	}
	return 0;
}
