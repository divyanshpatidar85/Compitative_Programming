
#include<iostream>
using namespace std;
int main(){
long long int j=0,n,flag=0,i=0,k,m,z=0;
cin>>n;
long long int  arr[n-1];

for( k=0;k<n-1;k++){
    cin>>arr[k];
}

for(m=1;m<=n;m++){
z=z+m;

}
for( j=0;j<n-1;j++){

    i=i+arr[j];

}
cout<<(z-i);
return 0;
}