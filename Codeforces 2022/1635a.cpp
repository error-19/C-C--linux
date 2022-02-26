#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
int k=s.size();
if((s[0]=='R')||(s[0]=='G')|| (s[0]=='B')) {
cout<<"NO"<<endl;
}
else if((s[k-1]=='r')||(s[k-1]=='g')|| (s[k-1]=='b')){
cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
}
}
}
