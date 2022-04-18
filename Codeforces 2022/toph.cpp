#include<bits/stdc++.h>
using namespace std;
int main(){
int c=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
c++;
}
cout<<c<<endl;
if(c%3==1){
for(int i=0;i<s.size();i++){
cout<<s[i]<<",";<<s[i+3]<<","<<s[i+7]<<}
}


}
