//  https://www.hackerrank.com/challenges/30-sorting/problem
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }

    long int len = a.size();
    long int swaps = 0;
    for(int i =0; i < len; i++)
    {
        for (int j = 0; j < len-1;  j++)
        {
            if(a[j] > a[j+1])
            {
                swaps+=1;
                swap(a[j], a[j+1]);
            }
        }

        if(swaps == 0)
            break;
    }

    cout<<"Array is sorted in " << swaps << " swaps."<<endl;
    cout<<"First Element: "<< a[0] <<endl;
    cout<<"Last Element: " << a[len-1]; 
    // Write Your Code Here
    return 0;
}