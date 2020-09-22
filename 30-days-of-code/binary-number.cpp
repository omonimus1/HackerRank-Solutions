// https://www.hackerrank.com/challenges/30-binary-numbers/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string bin = "";
    int solution = 0, counter =0; 
    int i; 
    while(n > 0)
    {
        bin += to_string(n%2);
        n/=2;
    }
    //cout << bin; 
    int len = bin.size(); 
    for(i=0;  i <len; i++)
    {
        counter = 0;
        while(i < len && bin[i] == '1')
        {
            i+=1;
            counter +=1;
        }
        if(counter > solution)
            solution = counter; 
    }
    cout << solution << endl; 

    return 0;
}
