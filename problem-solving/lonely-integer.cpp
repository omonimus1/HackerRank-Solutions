//  https://www.hackerrank.com/challenges/lonely-integer/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign
/*
You will be given an array of integers. All of the integers except one occur twice. 
That one is unique in the array.
print that unique value; 
*/
int lonelyinteger(vector<int> a) {
    int len = a.size(); 
    if(len == 1)
        return a[0];
    
    sort(a.begin(), a.end());
    for(int i =0;  i< len-2; i+=2)
    {
        if(a[i] == a[i+1])
            continue; 
        if(a[i] != a[i+1] && a[i+1] == a[i+2])
            return a[i];
        else
           return a[i+1];  
    }
    return a[len-1];
}