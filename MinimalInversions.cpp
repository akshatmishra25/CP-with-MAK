//Link - https://www.codechef.com/problems/MININV

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  long long int n;
	  cin>>n;
	  long long int a[n];
	  unordered_map<int, int> travLeft;
	  unordered_map<int, int> travRight;
	  for (int i = 0; i < n; i++) {
	      cin>>a[i];
	      travLeft[a[i]]++;
	  }
	  long long int curInv=0;
	  long long int maxInv=0;
	  for (int i = n-1; i >= 0; i--) {
	      travRight[a[i]]++;
	      travLeft[a[i]]--;
	      curInv+=travLeft[a[i]+1];
	      curInv-=travRight[a[i]-1];
	      maxInv=max(maxInv, curInv);
	  }
	  cout<<maxInv<<"\n";
	}
	return 0;
}

