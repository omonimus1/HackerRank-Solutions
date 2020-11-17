// https://www.hackerrank.com/challenges/compare-the-triplets/problem
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int>solution;
    int alice = 0, bob=0;       
    for(int i=0;  i< 3; i++)
    {
        if(a[i] > b[i])
            alice++; 
        if(a[i] < b[i])
            bob++; 
    }
    solution.push_back(alice);
    solution.push_back(bob); 
    return solution; 
}
