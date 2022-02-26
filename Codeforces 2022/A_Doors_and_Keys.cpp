#include<bits/stdc++.h>
using namespace std;
int main(){
long long shamim;
cin>>shamim;
while(shamim--){
int p=1;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='R'){
        for(int j=i+1;j<s.size();j++){
            if(s[j]=='r'){
            if(j>i){
            p=0;break;
            }
            }

        }
    }
       else  if((s[i]=='G')){
        for(int j=i+1;j<s.size();j++){
            if(s[j]=='g'){
            if(j>i){
             p=0;break;
            }

            }
        }
       }
       else  if(s[i]=='B'){
        for(int j=i+1;j<s.size();j++){
            if(s[j]=='b'){
            if(j>i){
             p=0;
             break;
            }
        }
        }
    }
}
 if(p==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}

