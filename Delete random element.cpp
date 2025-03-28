#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Before deleting random element from array : " << endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    int k;
    cin>>k;
     cout << "After deleting "<<k<<"th element from array : " << endl;
     if (k>n) {cout<< "Position does not exist" <<endl;}
     else{
             for(int i=k-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
     for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

     }
   return 0;
}
