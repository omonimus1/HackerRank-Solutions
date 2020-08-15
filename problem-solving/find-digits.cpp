//  https://www.hackerrank.com/challenges/find-digits/problem
int findDigits(int n) {
    int digit;
    int number = n; 
    int solution = 0;
    while(n >0){
        digit = n%10;
        if(digit != 0 && (number%digit) == 0)
            solution++;
        n/=10;
    }
    return solution;
}