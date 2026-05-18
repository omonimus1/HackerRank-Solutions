// IS TOO SLOW - https://www.hackerrank.com/challenges/strange-code/problem?isFullScreen=true
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'strangeCounter' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER t as parameter.
 */

long strangeCounter(long t) {
    // quando il coutner tocca 1 - si resseta e fa per 2.
    // si parte sempre da 3 e 1
    // 1 - counter - 3 duplication-rot
    
    // time - value
    int value = 3;
    int multiplier_starting_point = 3;
    int time = 1;
    while (time < t) {
        std::cout << "time: " << time << " t: " <<t << " value: " << value << std::endl; 
        if (value == 1) {
            // dobbiamo raddoppiare e combinciare a contare di nuovo
            multiplier_starting_point *= 2;
            value = multiplier_starting_point;
            time +=1;
            continue;
        }
        value -= 1;
        time +=1; // increment time to reach t.

    }
    return value;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    long t = stol(ltrim(rtrim(t_temp)));

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
