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

void printVect_ref(vector<int> &v)//pass vector by reference only time complexity is O(1) otherwise complete vector is copied
{
    cout<<"size is "<<v.size()<<endl;
    //v.size->O(1)
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    cout<<"Program starts"<<endl<<endl;
    //pair can be made of any kind of variable same or different
    pair<int,string> p;
    p=make_pair(123,"abc");//pair can be initialized like this or
    //in curly brackets as follows
    p={2,"abc"};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<"copy pair";
    pair<int, string> p1=p; //copy pair
    p1.first=321;
    cout<<p.first<<endl;
    cout<<p1.first<<endl;
    //p is not changed
    cout<<"copy pair reference"<<endl;
    pair<int,string> &p2=p;
    p2.first=567;
    cout<<p.first<<endl;
    cout<<p2.first<<endl;

    int a[]={1,2,3};
    int b[]={2,3,4};
    // a and b are related and all 
    //operations done on a needs to be done on b as well
    //use array of pairs
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    cout<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }    

    //generally array of pairs is not used only vector of pair is used

    break_();
    pair<int,string> q;
    q={1,"string"};
    cout<<q.first<<" "<<q.second<<endl;
    cout<<"Enter variable 1"<<endl;
    break_();
    //cin>>q.first;
    //cin>>q.second;
    break_();
    cout<<q.first<<" "<<q.second<<endl;

    break_();
    break_();
    break_();
/*
    vector<int> v;
    // vectors have dynamic size which can change during execution
    //vector of container or pair is possible
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printVect(v);
        v.push_back(x);
    }
    printVect(v);

    */

    //array and vector need contious memory allocation and hence there
    //is a limit on the max size of array and vector that is possible

    // define vector of fixed size
    break_();
    vector<int> v(10);
    printVect(v);

    //Dynamic changing of vector size

    v.push_back(153);
    printVect(v);

    break_();
    break_();
    vector<int> d(10,3);
    //make a vector of size 10 with all number to be 3
    printVect(d);
    break_();
    d.pop_back();//remove last element from vector
    d.pop_back();//remove last element from vector O(1)
    printVect(d);

    vector<int> v2=d;//copy array completely O(n) complexity
    printVect(v2);

    vector<string> v;
    

}