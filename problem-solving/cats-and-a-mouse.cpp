// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
const string MOUSE_ESCAPE = "Mouse C";
const string CAT_A_WINS = "Cat A";
const string CAT_B_WINS = "Cat B";

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    int distance_between_a_and_mouse = abs(z - x);
    int distance_between_b_and_mouse = abs(z - y);

    if(distance_between_a_and_mouse == distance_between_b_and_mouse)
        return MOUSE_ESCAPE;
    else if(distance_between_b_and_mouse < distance_between_a_and_mouse)
        return CAT_B_WINS;
    
    return CAT_A_WINS;
}