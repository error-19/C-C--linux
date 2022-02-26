#include<bits/stdc++.h>
using namespace std;
int c,d,e,f,g,h,i,j,k;
int main(){
int t,n;
cin>>t;
int ar[t];
for(int i=0;i<t;i++){
cin>>ar[i];
if(ar[i]==1){
c++;
}
else if(ar[i]==2){
d++;
}
else if(ar[i]==3){
e++;
}
else if(ar[i]==4){
f++;
}
else if(ar[i]==5){
g++;
}
else if(ar[i]==6){
h++;
}
else if(ar[i]==7){
i++;
}
else if(ar[i]==8){
j++;
}
else if(ar[i]==9){
k++;
}
}
if(c>=2){c=2;}
else if(d>=2){d=2;}
else if(e>=2){e=2;}
else if(f>=2){f=2;}
else if(g>=2){g=2;}
else if(h>=2){h=2;}
else if(i>=2){i=2;}
else if(j>=2){j=2;}
else if(k>=2){k=2;}
cout<<c+d<<endl;
}
