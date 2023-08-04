#include<bits/stdc++.h>
using namespace std;
int main(){

long long int var=0,number,normal=5;
cin>>number;
for(long long int i=0;i>=0;i++){
    if(number/normal !=0){
       var=var+(number/normal);
       normal=normal*5;
    }else
    break;
}
cout<<var<<endl;
}