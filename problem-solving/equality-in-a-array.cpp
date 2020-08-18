//  https://www.hackerrank.com/challenges/equality-in-a-array/problem
// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {
    int solution =0;
    unordered_map<int, int>mp;
    int len = arr.size();
    for(int i =0; i < len; i++)
        mp[arr[i]]++;

    int biggest = INT_MIN;
    for(auto x : mp)
    {
        if(x.second > biggest)
            biggest = x.second;
        solution += x.second; 
    }

    solution -= biggest;
    return solution; 

}
