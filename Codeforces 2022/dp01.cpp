#include<bits/stdc++.h>
using namespace std;
int g(int n){
cout<<n<<endl;
if(n==0) return 2;
if(n==-1) return 2;
cout<<"g("<<n<<") is calling g("<<n-1<<")\n";
return g(n-1);
}
int main(){
g(5);
return 0;
}

