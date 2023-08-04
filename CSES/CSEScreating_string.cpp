// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
static int count =0;
vector<string>vec;
void possible_permutation(string s,int length,int ind){
  if(ind==length){
     auto it = find (vec.begin(), vec.end(), s);
    if (it != vec.end())
    {
       return;
    }
    else{
        // std::cout << "Element not found.\n\n";
    //   cout<<s<<endl;
      vec.push_back(s);
      ::count++;
      return;
    }
  }
  for(int i=ind;i<=length;i++){
      swap(s.at(ind),s.at(i));
      possible_permutation(s,length, ind+1);
       swap(s.at(ind+1),s.at(i));
       possible_permutation(s,length, ind+1);
  }
}
int main() {
   string s1;
   cin>>s1;

//  cout<<s1<;
  possible_permutation( s1,s1.length()-1,0);
cout<<::count<<"\n";
for(auto b :vec){
    cout<<b<<endl;
}
    return 0;
}