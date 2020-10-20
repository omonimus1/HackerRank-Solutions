// https://www.hackerrank.com/challenges/alternating-characters/problem
int alternatingCharacters(string s) {
    int len = s.size();
    if(len <=1 )
        return 0; 

    int solution = 0;

    for(int i =0; i< len-1; i++)
    {
         if(s[i] == s[i+1])
            solution+=1; 
    }
    return solution; 

}
