#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i;
cin>>t;
while(t--){
int n,a;
cin>>n;
int ara[n+1];
for(i=0;i<n;i++){
cin>>ara[i];
}
sort(ara,ara+n);
for(i=0;i<n;i++){
cout<<ara[i]<<endl;
}
}
}
