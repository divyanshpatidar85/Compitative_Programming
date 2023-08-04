// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  long long int fir,sec,test;
   cin>>test;
   for(long long int i=0;i<test;i++){
       cin>>fir>>sec;
       long long int k=0;
      if(fir>sec){
        k=fir/2;
        if(k<sec && (fir+sec)%3==0){
            cout<<"YES \n";
        }else{
            cout<<"NO\n";
        }
      }else{
        k=sec/2;
        if(k<=fir && (fir+sec)%3==0){
            cout<<"YES \n";
        }else{
            cout<<"NO\n";
        }
      }
   }

    return 0;
}