// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
   long int n;
   cin >> n;
   unordered_map<string, string>mp;
   string person, number; 
   int i; 
   for(i=0;  i < n; i++)
   {
       cin >> person >> number;
       mp[person] = number;
   }

   for(i=0; i< n; i++)
   {
       cin >> person; 
       if(mp.count(person))
            cout <<person << "=" <<mp[person] <<endl;
        else {
            cout <<"Not found"<<endl; 
        }
   }

    return 0;
}