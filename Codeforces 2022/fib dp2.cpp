#include<bits/stdc++.h>
using namespace std;
int g(int n){
cout<<n<<endl;
if(n==0) return 0;
if(n==1) return 0;
cout<<"g("<<n<<") is calling g("<<n-1<<") and g("<<n-2<<") \n";
return g(n-1)+g(n-2);
}
int main(){
g(6);
return 0;
}


