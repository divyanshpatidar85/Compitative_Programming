// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void hanoi(int disk,char source,char mid,char destination){
    if(disk<=1){
         cout<<source<<" "<<destination<<endl;
        return;
    }
     
    hanoi(disk-1,source,destination,mid);
     cout<<source<<" "<<destination<<endl;
    hanoi(disk-1,mid,source,destination);
      


}
int main() {
  int n;
  cin>>n;
 float k=(pow(2,n)-1);
  cout<<int(k)<<endl;
  hanoi(n,'1','2','3');
}