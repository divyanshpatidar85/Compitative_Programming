#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
 double n;
int m=1000000000+7;
long int  result=1;
cin>>n;
//cout<<m;
for(long long int i=n;i>0;i--){
    result=(result*2)%m;

}
cout<<result;
// result=pow(2,n);
// result=result%m;
// cout<<result;


return 0;
}

