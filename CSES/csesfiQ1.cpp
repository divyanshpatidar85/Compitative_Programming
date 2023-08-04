#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
cout<<n<<" ";
if(n>=1 && n<=1000000){
while(n!=1){
  
if(n%2==0){
    n=n/2;
}
else {
    // cout<<"ji"<<n;
    n=(n*3)+1;
}

cout<<n<<" ";
}
}
return 0;
}

