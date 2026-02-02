#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> v = {'a','c','a','f','c','d','c','s','c','a','d','c','c'};
    unordered_map<char,int> um;
    for(auto i : v)
        um[i]++;
    
    for(auto i : um)
        cout<<i.first<<" : "<<i.second<<endl;
}