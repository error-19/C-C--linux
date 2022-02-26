#include<bits/stdc++.h>
using namespace std;
int main(){
    int shamim;
    cin>>shamim;
    while(shamim--){
int t,k=0,l=0;
cin>>t;
vector<int> v;
for(int i=0;i<t;i++){
    int a;
    cin>>a;
    v.push_back(a);
}
for(int i=0;i<t;i++){
    if(v[i]!=i+1){
        k=i;
        break;
}
}
for(int i=0;i<t;i++){
    if(v[i]==k+1){
        l=i;
        break;
    }
}
reverse(v.begin()+k,v.begin()+l+1);
for(int i=0;i<t;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
    }
}
