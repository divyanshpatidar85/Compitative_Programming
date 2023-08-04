#include<iostream>
using namespace std;
int main(){
long long int n,i,j,k=0;
cin>>n;
long long int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(j=1;j<n;j++){
    if(arr[j]-arr[j-1]<0){
        k=arr[j-1]-arr[j]+k;
        arr[j]=arr[j-1];

    }
   
}
cout<<k;
return 0;
}