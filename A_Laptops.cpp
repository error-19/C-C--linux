#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
int a[t],b[t],c,d;
 for(int i=0;i<t;i++){
     cin>>a[i];
 }
 for(int i=0;i<t;i++){
     cin>>b[i];
 }
for(int i=0;i<t;i++){
    if(a[i]<a[i+1]){
        if(b[i]>b[i+1]){
            cout<<"Happy Alex"<<endl;
        }
        else {
            cout<<"Poor Alex"<<endl;
        }
     }
     else{
          if(b[i]>b[i+1]){
            cout<<"Happy Alex"<<endl;
        }
        else {
            cout<<"Poor Alex"<<endl;
        }
     }
}
  }