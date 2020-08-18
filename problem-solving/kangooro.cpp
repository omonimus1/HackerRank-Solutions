//  https://www.hackerrank.com/challenges/kangaroo/problem?h_r=next-challenge&h_v=zen
string kangaroo(int x1, int v1, int x2, int v2) {
    string result = "NO";
    bool canCatchUp = (v2 < v1);
    if(canCatchUp) {
        bool willIntersectOnLand = (x1 - x2) % (v2 - v1) == 0;
        if(willIntersectOnLand) {
            result = "YES";
        }
    }

   return result; 

}