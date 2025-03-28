#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Before deleting first element from array : " << endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

     cout << "After deleting "<<1<<"th element from array : " << endl;

             for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
     for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;


   return 0;
}
