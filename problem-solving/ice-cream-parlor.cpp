// Complete the icecreamParlor function below.
vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int>solution;
    int len = arr.size(); 
    for(int i =0;  i< len-1; i++)
    {
        for(int j=i+1; j < len; j++)
        {
            if(arr[i]+ arr[j] == m)
            {
                solution.push_back(i+1);
                solution.push_back(j+1);
                return solution; 
            }
        }
    }
    return solution; 

}
