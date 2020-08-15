//  https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int len = ar.size();
    sort(ar.begin(), ar.end());

    int solution = 0;
    for(int i =0; i < len-1; i++)
    {
        for(int j=i+1; j < len; j++)
        {
            if( (ar[i]+ar[j]) % k == 0)
                solution++;
        }
    }
    return solution; 

}