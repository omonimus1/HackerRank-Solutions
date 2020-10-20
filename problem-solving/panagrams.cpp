// https://www.hackerrank.com/challenges/pangrams/problem
#include <bits/stdc++.h>

using namespace std;

string positive = "pangram";
string negative = "not pangram"; 
// Complete the pangrams function below.
string pangrams(string s) {
    unordered_map<char, bool>mp; 
    int len = s.size();
    char single_letter;  
    for(int i =0; i< len; i++)
    {
        single_letter = tolower(s[i]);
        mp[single_letter] = true;  
    }


    single_letter = 'a';
    for(int i=0;  i < 26; i++)
    {
        if(!mp.count(single_letter))
        return negative;
    single_letter++; 
    }
    return positive; 
}
