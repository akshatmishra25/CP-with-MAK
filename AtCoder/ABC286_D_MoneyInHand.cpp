#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n>>x;
  vector<bool> possibleAmt(x+1, false);
  possibleAmt[0]=true;
  for(int i=1; i<=n; i++){
   int a,b;
    cin>>a>>b;
    while(b){
     for(int j=x; j>=a; j--){
      possibleAmt[j]=((possibleAmt[j])|(possibleAmt[j-a]));
     }
     b--;
    }
    }
   if(possibleAmt[x]){
   cout<<"Yes\n";}
  else{
   cout<<"No\n";
  }

  return 0;
}