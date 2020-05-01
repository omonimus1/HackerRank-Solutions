
// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int random_int;
    long int random_long;
    char weird_char;
    float just_a_float;
    double easy_double; 
    scanf("%d %ld %c %f %lf", &random_int , &random_long, 
    &weird_char, &just_a_float, &easy_double);

    printf("%d\n",random_int);
    printf("%ld\n", random_long);
    printf("%c\n", weird_char);
    printf("%f\n", just_a_float);
    printf("%lf\n", easy_double );
    
    return 0;
}