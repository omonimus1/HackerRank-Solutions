// https://www.hackerrank.com/challenges/staircase/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int whites = n - 1;

    for (int i = 0; i < n; i++)
    {
        int spaces = whites;
        for (int a = 0; a < n; a++)
        {
            if (a < spaces)
                cout << " ";
            else
                cout << "#";

        }
        whites--;
        cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
