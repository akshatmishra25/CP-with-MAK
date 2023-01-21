#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        s.insert(element);
    }
    if(s.size()<2){
        cout<<"NO\n";
    }
    else{
        auto it = s.begin();
        it++;
        cout<<*(it)<<"\n";
    }
    return 0;
}