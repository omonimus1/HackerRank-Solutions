// https://www.hackerrank.com/challenges/camelcase/problem
// Complete the camelcase function below.
int camelcase(string s) {
    int counter =0;
    for(int i =0; i < s.size(); i++)
    {
        if(isupper(s[i]))
            counter++;
    }
    return ++counter;
}