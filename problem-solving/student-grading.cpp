// https://www.hackerrank.com/challenges/grading/problem
vector<int> gradingStudents(vector<int> grades) {
    int len  = grades.size();
    int single_digit; 
    int difference1, difference2;
    for(int i =0; i < len; i++)
    {
        // Base case: No Rund up
        if(grades[i] < 38)
            continue;
        
        // Round-up uperation
        single_digit = grades[i] % 10;
        if(single_digit == 0 || single_digit == 5)
            continue; 
         
        if(single_digit == 3 || single_digit == 4)
            grades[i] += 5-single_digit;
        else
        {
            
            if(single_digit == 8 || single_digit == 9)
                grades[i] += 10 - single_digit; 
        }
    }
    return grades;
}