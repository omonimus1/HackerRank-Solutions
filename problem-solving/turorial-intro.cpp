//  https://www.hackerrank.com/challenges/tutorial-intro/problem
int introTutorial(int V, vector<int> arr) {
    for(int i =0; i < arr.size(); i++)
    {
        if(arr[i] == V)
            return i;
    }
    return -1; 

}