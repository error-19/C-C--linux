#include<bits/stdc++.h>
using namespace std;
bool sum(){
//while(t--){
bool  p,q,w;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='r'){
        for(int j=i+1;j<s.size();j++){
            if(s[j]=='R'){
                p=1;
            }

        }
    }
       else  if((s[i]=='g')){
        for(int j=i+1;j<s.size();j++){
            if(s[j]=='G'){
                q=1;
            }
        }
       }
       else  if(s[i]=='b'){
        for(int j=i+1;j<s.size();j++){
            if(s[j]=='B'){
                w=1;
            }

        }
    }
}
return p&&q&&w;
}
int main(){
bool p,q,w;
      bool sum();
 if((p&&q&&w)==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

