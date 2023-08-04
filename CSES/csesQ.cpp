// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   string s;
   cin>>s;
   char arr[s.length()],jrr[s.length()],fake;
   int first=0,sec=0,flag=0,j,z=0,some_dif=0;
   for(int i=0;i<s.length();i++){
       if(s.at(i)=='1')
       continue;
           arr[first]=s.at(i);
           first++;
           some_dif++;
       j=i+1;
       while(flag !=1 && j<s.length()){
           if(s.at(j)==s.at(i) && s.at(j)!='1'){
               jrr[sec]=s.at(j);
               s.at(j)='1';
               flag=1;
               some_dif--;
               sec++;
           }
           j++;
          
       }
       if(s.length()%2!=0 &&flag !=1){
           fake=s.at(i);
           z=1;
           first--;
       }
        flag=0;
       
   }
   if(first-sec==1 || first-sec==0){
    for(int i=0;i<first;i++){
            cout<<arr[i];
        }
     //   cout<<"RAM RAMSA => "<<some_dif<<endl;
        if(z==1){
            if(some_dif>=2){
                cout<<"NO SOLUTION \n";
            }else
            cout<<fake;
        }
         for(int i=sec-1;i>=0;i--){
            cout<<jrr[i];
        }
        }else{
            cout<<"NO SOLUTION\n";
        }
}