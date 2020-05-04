//https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=false
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> mySet;
    long int test_cases, a, b;
    cin >> test_cases;
    while(test_cases--)
    {
        cin >> a >> b;
        if(a == 1)
        {
            mySet.insert(b);
        }
        else if(a==2)
        {
            mySet.erase(b);
        }
        else if(a==3)
        {
            // If the number is preent print Yes, No otherwise
            set<int>::iterator itr = mySet.find(b);
            if(itr == mySet.end())
                cout<<"No"<<endl;
            else {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}



