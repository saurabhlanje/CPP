#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void break_()
{
    cout<<endl<<"***********************************"<<endl;
}

void printVect(vector<int> v)
{
    cout<<"size is "<<v.size()<<endl;
    //v.size->O(1)
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}

void printVect(vector<pair<int,int>> v)
{
    cout<<"size is "<<v.size()<<endl;
    //v.size->O(1)
    for(int i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<"   ";
    cout<<endl;
}

int main()
{
    //vector of pair
    vector<pair<int,int>> v={{1,2},{3,4},{5,6},{7,8}};
    printVect(v);
    //add element to vector of pair
    v.push_back({9,10});
    printVect(v);

    

}
