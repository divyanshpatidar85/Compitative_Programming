#include <bits/stdc++.h>
using namespace std;
int main()
{
    int file, sizes,cost=0;
    cout << "Enter the total number of file \n";
    cin >> file;
    int arr[file];
    for (int i = 0; i < file; i++)
    {
        cout << "Enter the size of file :" << i + 1 << endl;
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int ii=0;
    while (ii+1!=n)
    {
    cout<<"On merging file whose wait are "<<arr[ii]<<"   "<<arr[ii+1]<<" and replacing both file and introduce a new file whose wait is "<<arr[ii]+arr[ii+1]<<endl;
   int j=arr[ii]+arr[ii+1];
    cout<<"Cost is : "<<cost<<endl;
    cost=cost+j;
    ii=ii+1;
    arr[ii]=j;
    // n = sizeof(arr) / sizeof(arr[0]);
    sort(arr+ii, arr + n);
    for (int i = 0; i < file; i++)
    {
        // cout << "Enter the size of file :" << i + 1 << endl;
        cout<< arr[i]<<"  ";
    }
    cout<<endl;
    }
    cout<<"Total Cost of merging\n"<<cost;
   

    return 0;
}