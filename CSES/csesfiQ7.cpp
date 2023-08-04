#include<iostream>
using namespace std;
int main(){
    long long int test;
    cin>>test;
long long int  pos;
long long int  row,column;

for(long long int i =0;i<test;i++){
cin>>row;
cin>>column;
if(row>column){
    pos=row;
}
else if(column>row){
    pos=column;
}
else{
    pos=row;
}
long long int result= ((pos*pos)-pos+1);

if(row>column){
  if(pos%2==0){
    result=result+(row-column);
  }
  else{
    result=result-(row-column);
  }
}

else if(column>row){
    if(pos%2==0){
   result=result-(column-row);
    }else{
          result=result+(column-row);
    }
}
else{
   result=result;
}
cout<<result<<endl;
}

return 0;
}