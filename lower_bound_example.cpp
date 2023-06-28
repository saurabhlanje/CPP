#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    int num2check;
    cin>>num;
    vector<int> vec;
    for( int i=0;i<num;i++)
    {
        int  number;
        cin>>number;
        vec.push_back(number);
    }
    cin>>num2check;
    for(int i=0;i<num2check;i++)
    {
        int number;
        int pose;
        cin>>number;
            auto it = std::lower_bound(vec.begin(), vec.end(), number); // this function find the position of the integer within the vector and resturns the iterator to the position
        //if it dosent exist then it gives the iterator to the next higher number
    pose=distance(vec.begin(), it)+1;
    if (it != vec.end()&& *it == number) { // here *it ==number is used to check if the iterator points to the number or it just dosent exist in the vector and the iterator points to the next higher number

        cout<<"Yes "<<pose<<endl;
    } else {
        cout<<"No "<<pose<<endl;
    }
    }
    
    
    
    return 0;
    
}
