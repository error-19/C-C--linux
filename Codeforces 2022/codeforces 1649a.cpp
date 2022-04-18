#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a<b){
    if(c>d){cout<<"Happy Alex"<<endl;}
    else{cout<<"Poor Alex"<<endl;}
  }else if(a>b){
      if(c>d){
        cout<<"Happy Alex"<<endl;
      }
      else{
        cout<<"Poor Alex"<<endl;
      }
    }
    }
    return 0;
  }