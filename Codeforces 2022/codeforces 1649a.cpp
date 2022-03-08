#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
int ara[100],k=0;
for(int i=0;i<n;i++){
cin>>ara[i];
if(ara[i]==0){
k++;
}
}
cout<<k*2<<endl;
}
}
