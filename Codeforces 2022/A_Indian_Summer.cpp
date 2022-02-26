#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<pair<string ,string>>v;
for(int i=0;i<t;i++){
string a,b;
cin>>a>>b;
v.push_back({a,b});
}
sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();
cout<<sz<<endl;
}
