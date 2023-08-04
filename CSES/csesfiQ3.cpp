#include<iostream>
using namespace std;
int main(){
string s;
long long int a=0,c=0,g=0,t=0;
long long int   arr[5000],e=0,B=0;
cin>>s;
// A, C, G, and T.
for(long long int i=0;i<s.length();i++){
    if(s.at(i)=='A'){
        if(a == 0){
       
    a++;
   
        }
        if(a>0){
          
            for(long long int j=i+1;j<s.length();j++){
                if(s.at(j)=='A'){
               
                   i=j;
                    a++;
                }
                else{
                   
                 
                   if(a>B){
                   B= a;
                   
                   }
                     
                   a=0;
                  
                break;
                }
                if(a>B){
                   B= a;
                   
                   }
            }
        }
        if(a>B){
                   B= a;
                   
                   }
    }



   else if(s.at(i)=='C'){
    
        if(c == 0){
            
        c++;
           
 
        }
        if(c>0){
           
            for(long long int j=i+1;j<s.length();j++){
                if(s.at(j)=='C'){
                   
                     i=j;
                    c++;
                }
                else{
                  
                   if(c>B){
                   B= c;
                   
                   }
                      c=0;
                  
                break;
                }
                if(c>B){
                   B= c;
                   
                   }
                  
            }
        }
    if(c>B){
                   B= c;
                   
                   }

   }
    else if(s.at(i)=='G'){
  
        if(g == 0){
           
    g++;
        }
        if(g>0){
          
            for(long long int j=i+1;j<s.length();j++){
                if(s.at(j)=='G'){
                    i=j;;
                    g++;
                }
                else{
                   if(g>B){
                   B= g;
                   
                   }
                 g=0;;
                     
                break;
                }
                if(g>B){
                   B= g;
                   
                   }
                
                 
            }
        }
        if(g>B){
                   B= g;
                   
                   }
    }
    
    else if(s.at(i)=='T'){
 
        if(t == 0){
           
    t++;
        }
        if(t>0){
            
            for(long long int j=i+1;j<s.length();j++){
                
                if(s.at(j)=='T'){
                    i=j;
               
                    t++;
                }
                else{
                     if(t>B){
                   B= t;
                   
                   }
                     t=0;
                 
                break;
                }
                if(t>B){
                   B= t;
                   
                   }

              
            }
        }
    }
    if(t>B){
                   B= t;
                   
                   }
}

cout<<B;

return 0;
}