// #include<iostream>
// using namespace std;
// int main(){
// long long int  num,another,j=0;
// cin>>num;
// for(long long int i=1;i<=num;i++){
//  another=i*i;
//  another=(another*(another-1))/2;
//  if(another>0){
//     another=another-(8*j);
//    j = j+(i-1);

//  }
//  cout<<another<<endl;


// }
// return 0;
// }
#include<iostream>
#include<string.h>
using namespace std;
class Saving_Account{
	string name;
	string id;
	float balance;
    
    public:
    void set_data(){
    	cout<<"Enter account holder name :"<<endl;
       (cin>>name);
    	cout<<"Enter account number  : "<<endl;
    	cin>>id;
    	cout<<"Enter your account balance :"<<endl;
    	cin>>balance;
    
    }
    void get_data(){
    	cout<<"Account holder is : "<<endl;
         cout<<name;
    
    	cout<<"Account number is : "<<id<<endl;
    	
    	
    	cout<<"Account balance is : "<<balance<<endl;
    		
    }
    void credit(float crdt_amt){
    	balance=balance+crdt_amt;
	}
	void debit(float debt_amt){
   
    	if( balance-debt_amt>=0){
    		balance= balance-debt_amt;
		}
		else{
			cout<<"Account balance is not sufficient \n";
			exit(0);
		}
	}
};
int main(){
	float crdt,debt;
	Saving_Account divyansh;
	divyansh.set_data();
	divyansh.get_data();
	
	int j;
	cout<<"Enter 1 for credit \n"
	    <<"Enter 2 for debit  \n"
	    <<"Else enter any number except 1 and 2 \n";
	    cin>>j;
	    
	    if(j==1){
	        cout<<"Enter amount \n";
	        cin>>crdt;
	               divyansh.credit(debt);
	    }
	    else if(j==2){
	           cout<<"Enter debit amount \n";
	        cin>>debt;
	        divyansh.debit(debt);
	    }
	    else{
	        return 0;
	    }
	   
		divyansh.get_data();
	return 0;
}