#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,5,77,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n/2; i++)
    {
       int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"reversed array:\n";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}