#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={7,51,5,8,58,57,57,68,50};
    int k=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+k);
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the kth smallest element is:" <<arr[0]<<endl;
}