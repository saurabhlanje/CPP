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
            auto it = std::lower_bound(vec.begin(), vec.end(), number);
    pose=distance(vec.begin(), it)+1;
    if (it != vec.end()&& *it == number) {

        cout<<"Yes "<<pose<<endl;
    } else {
        cout<<"No "<<pose<<endl;
    }
    }
    
    
    
    return 0;
    
}
