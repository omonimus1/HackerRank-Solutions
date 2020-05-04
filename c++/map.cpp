// https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=false&h_r=next-challenge&h_v=zen
#include <map>
#include <iostream>
#include <utility>
using namespace std;

int main() {
    map<string, int> marks;
    long int test_cases, grades, query;
    string student_name; 
    cin >> test_cases;
    while(test_cases--)
    {
        cin >> query >> student_name;
        if(query == 1)
        {
            // Store student name and grade
            cin >> grades;
            // If the user exist, add the new record, otherwise, update current value
             // Print the marks of the student if he/she exists, 0 otherwise
            map<string, int>::iterator itr = marks.find(student_name);
            if(itr == marks.end())
                marks.insert(make_pair(student_name, grades));
            else 
            {
                itr->second = itr->second+grades;
            }
        }
        else if(query ==2)
        {
            // Remove marks and name of the student
            marks.erase(student_name);
        }
        else if(query ==3)
        {
            // Print the marks of the student if he/she exists, 0 otherwise
            map<string, int>::iterator itr = marks.find(student_name);
            if(itr == marks.end())
                cout <<0<<endl;
            else 
            {
                cout<<itr->second<<endl;
            }
        }
    }
    return 0;
}
 