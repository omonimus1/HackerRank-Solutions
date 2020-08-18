//  https://www.hackerrank.com/challenges/sock-merchant/problem?h_r=next-challenge&h_v=zen
// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    int len =ar.size();
    unordered_map<int, int>mp;
    for(int i =0; i < len; i++)
    {
        mp[ar[i]]++;   
    }

    int solution = 0;
    for(auto x : mp)
    {
        if(x.second == 1)
            continue; 
        if(x.second %2 !=0)
        {
            x.second--;
        }
        solution += x.second /2;

    }
    return solution; 
}