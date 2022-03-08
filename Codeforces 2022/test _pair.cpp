#include<bits/stdc++.h>
using namespace std;
int main(){
//pair <string ,vector<int>>p;
//p.first="shamim sorkar";
//p.second={10,20,30};
//cout<<p.first<<endl;
//for(auto u:p.second){
//cout<<u<<" ";
//pair function:
//pair<int ,int>p;
//p=make_pair(2,3);
//p.first++;
//cout<<p.first<<" "<<p.second<<endl;
//pair with out function
//pair<string,vector<int>>p;
////p={10,20};
//p={"shamim",{10,20,30,40}};
//cout<<p.first<<endl;
//cout<<p.second.size()<<endl;
//}
//comparism of pair
//pair<int,int>p1,p2;
//p1={3,6};
//p2={3,5};
//if(p1<p2){
//cout<<"yes"<<endl;}
//else{
//cout<<"No"<<endl;}
//pair<int,int> p=min(p1,p2);
////pair<int,int> p=max(p1,p2);
//cout<<p.first<<" "<<p.second<<endl;
int k;
cin>>k;
vector<pair<string,int>>v;
for(int i=0;i<k;i++){
string a;
int b;
cin>>a>>b;
v.push_back({a,b});
}
sort(v.begin(),v.end());
//int sz=unique(v.begin(),v.end())-v.begin();
for(int i=0;i<v.size();i++)
{
cout<<v[i].first<<" "<<v[i].second<<endl;
}

}
