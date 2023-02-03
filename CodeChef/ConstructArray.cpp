#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
using namespace std;

int MOD=1e9+7;      // Hardcoded, directly change from here for functions!

//Fast Method to calculate Power

uint power(int x, int y, int p=MOD){
  unsigned long long res=1;
  int op=0;
  while(y>0){
    op++;
    if(y&1) res=(res*x)%p;
    y/=2;
    x=(x*x)%p;
  }
  return res;
}

//To calculate Mod Inverse
uint modInverse(int n, int p=MOD){
  return power(n, p-2, p);
}

//Used to calculate nCr
uint nCr(int n, int r, int p=MOD){
  if(n<r){
    return 0;
  }
  if(r==0){
    return 1;
  }
  vector<int> fac(n+1,0);
  fac[0]=1;
  for(int i=1; i<=n; i++){
    fac[i]=(fac[i-1]*i)%p;
  }
  return (fac[n] * modInverse(fac[r],p)%p * modInverse(fac[n-r],p)%p)%p;
}

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


void solve(){
  int n;
  cin>>n;
  if(n&1==1){
      cout<<"-1\n";
  }
  else{
      cout<<1<<" ";
      for (int i = 0; i < n-2; i++) {
          if(i&1){
          cout<<"2 ";
          }
          else{
              cout<<"0 ";
          }
      }
      cout<<"0";
      cout<<"\n";
  }
  
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
     cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

  
