// https://www.hackerrank.com/challenges/find-the-median/problem
int findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());

    int len = arr.size();
    // If number of element in the list is odd
    // Return middle element
    if(len % 2 != 0)
        return arr[(len/2)];
    
    // Return average of the two middle elements
    int a = arr[len/2];
    int b = arr[(len/2)+1];
    
    return (a + b)/2;

}
