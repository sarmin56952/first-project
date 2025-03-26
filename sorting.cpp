#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    v1.push_back(100);
    v1.push_back(20);
    v1.push_back(45);
    v1.push_back(5);
    v1.push_back(70);
    cout<<"Before sorting"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    sort(v1.begin(),v1.end());
    cout<<"After sorting"<<endl;
    for(int i=0;i<v1.size();i++)
    {

        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
