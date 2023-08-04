#include<iostream>
using namespace std;
int main(){
long long t,row,column;
cin>>row;
cin>>column;
int n=1,m=1,j=1,position=0,k=2,check=0,d=0;
while(n!=row ||  m!=column ){
    j++;
    position++;
    if(position == k+check){
    n++;
    d++;
    while(position !=1  ){
        if(d==1){
            m++;
            d=0;
        }
        j++;
        position--;
        if(position==1){
            check++;
            position=0;
            j=j-1;
            break;

        }

    }


    }



}
cout<<j;

return 0;
}











#include<iostream>
using namespace std;
int main(){
long long t,row,column;
cin>>row;
cin>>column;
int m=1,n=0,j=1,column_position=0,k=2,check=0,d=0,row_position=0,z=0;
while(m!=row || n!=column ){
    while(row_position !=0){
        z=1;
        row_position--;
        column_position++;
         j++;
    m++;
    }
    if(z==0){
    j++;
    m++;
    column_position++;
    }
    if(column_position==check+d){
        m++;
        d++;
         while(column_position !=1  ){
        j++;
        column_position--;
        if(column_position==1){
            check++;
            row_position++;
            column_position=0;
            j=j-1;
            break;

        }
    }
  

}
}
cout<<j;

return 0;
}