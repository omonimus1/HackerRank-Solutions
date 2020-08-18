//  https://www.hackerrank.com/challenges/bon-appetit/problem
void bonAppetit(vector<int> bill, int k, int b) {
    int len = bill.size();
    int sum = 0;
    for(int i =0;  i< len; i++)
        sum += bill[i];

    sum -= bill[k];
    int result = sum / 2;

    if(result == b)
        cout <<"Bon Appetit"<<endl;
    else {
        cout<< b-result <<endl; 
    }

}