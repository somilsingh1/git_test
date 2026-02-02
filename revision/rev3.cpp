#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,7,8,9,55,12,33,66,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[0]<arr[i])
        {
            arr[0]=arr[i];
        };
    }
    cout<<"largest number; "<<arr[0];
    return 0;
}