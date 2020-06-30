// https://www.hackerrank.com/challenges/beautiful-binary-string/problem
int beautifulBinaryString(string b) {
    int len = b.size();
    if(len < 3)
        return 0;
    if(len == 3)
    {
        if(b == "010")
            return 1;
        return 0;
    }

    int solution =0;
    for(int i =0; i < b.size()-2; i++)
    {
        if(b[i]== '0')
        {
            if(b[i+1] == '1' && b[i+2] == '0')
            {
                solution++;
                i += 2;
            }   
        }
    }
    return solution; 
}