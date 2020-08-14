//  https://www.hackerrank.com/challenges/vector-erase/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int number, len_vector;
    cin >> len_vector;
    vector<int>arr;
    for(int i =0; i < len_vector; i++)
    {
        cin >> number;
        arr.push_back(number);
    } 

    long int  a, b;
    // Execute first query
    cin >> a;
    a-=1;
    arr.erase(arr.begin()+a);
    // Execute second query
    cin  >> a >> b;
    a-=1;
    b--;
    arr.erase(arr.begin()+a, arr.begin()+b);
   
    // Print new vector size and its content
    len_vector = arr.size();
    cout << len_vector <<endl;
    for(int i =0; i < len_vector; i++)
        cout << arr[i] << " ";
    cout <<endl; 

    return 0;
}
