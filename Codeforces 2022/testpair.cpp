#include<bits/stdc++.h>
using namespace std;
int main(){
int k;
cin>>k;
vector<pair<string ,int>>v;
for(int i=0;i<k;i++){
 string s;
 cin>>s;
 int t;
 cin>>t;
 v.push_back({s,t});
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
cout<<v[i].first << " "<<v[i].second<<endl;
}
}
