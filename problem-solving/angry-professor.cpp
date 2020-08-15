//  https://www.hackerrank.com/challenges/angry-professor/problem
string angryProfessor(int k, vector<int> a) {
    int current_in_class = 0;
    for(int i =0; i < a.size(); i++)
    {
        if(current_in_class >= k)
            return "NO";
        if(a[i] <=0)
            current_in_class+=1;
    }

    return "YES";
}