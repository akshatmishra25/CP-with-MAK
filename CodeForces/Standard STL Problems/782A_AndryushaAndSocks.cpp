#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<int> s;
int c=0;
int ans=0;
for(int i=0; i<2*n; i++){
  int element;
  cin>>element;
  if(s.count(element)){
    c--;
  }
  else{
    s.insert(element);
    c++;
    ans=max(ans, c);
  }
  }
 cout<<ans<<"\n"; 
 return 0;
}