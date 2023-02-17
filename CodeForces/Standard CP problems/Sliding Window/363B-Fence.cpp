#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238462643383279;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int minsum=INT_MAX;
    int i=0;
    int j=0;
    int ans=0;
    int cursum=a[0];
    while(j<n){
      if((j-i+1)<k){
       j++;
       cursum+=a[j];
      }
      if((j-i+1)==k){
        if(minsum>cursum){
          minsum=cursum;
          ans=i+1;
        }
        j++;
        cursum-=a[i];
        i++;
        cursum+=a[j];
      }
    }
    cout<<ans<<"\n";
  return 0;
}