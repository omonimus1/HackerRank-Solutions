// https://www.hackerrank.com/challenges/strong-password/problem
#include <bits/stdc++.h>

using namespace std;

bool has_lower(string pass)
{
    for(int i =0; i < pass.size(); i++)
    {
        if(islower(pass[i]))
            return true;
    }
    return false; 
}

bool has_uppercase(string pass)
{
    for(int i=0; i < pass.size(); i++)
    {
        if(isupper(pass[i]))
            return true;
    }
    return false;
}

bool password_has_special_char(string pass)
{
    for(int i=0; i < pass.size(); i++)
    {
        if(pass[i] == '!' || pass[i] == '@' ||  pass[i] == '#' ||  
        pass[i] == '$' || pass[i] == '%' || pass[i] == '^' ||  
        pass[i] == '&' ||  pass[i] == '*' || pass[i] == '(' || pass[i]== ')' ||  pass[i] == '-' || pass[i] == '+')
            return true;
    }
    return false;
}

bool password_has_at_least_one_digit(string pass)
{
    for(int i =0; i < pass.size(); i++)
    {
        if(isdigit(pass[i]))
            return true;
    }
    return false;
}


// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    //if(password.size() < 6)
    //    return 6 - password.size();
    
    // If password.size() >=0 and all the conditions are spected, return 0; 
    int solution = 0;
    if(!password_has_at_least_one_digit(password))
        solution++;
    if(!password_has_special_char(password))
        solution++;
    if(!has_lower(password))
        solution++;
    if(!has_uppercase(password))
        solution++;

    int diff = 6 - password.size();
    return max(solution, diff); 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
