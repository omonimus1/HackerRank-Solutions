// https://www.hackerrank.com/challenges/one-week-preparation-kit-diagonal-difference/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-twoint 
diagonalDifference(vector<vector<int>> arr) {
    int main =0, secondary=0;
    int j=0; 
    for (int i =0;i < arr.size(); i++)
    {
        main+= arr[i][j];
        j+=1;
    }
    j=arr.size()-1;
    for(int i = 0; i< arr.size(); i++)
    {
        secondary += arr[i][j];
        j--; 
    }
    cout << main << "  " << secondary;
    return abs(main-secondary);
}
