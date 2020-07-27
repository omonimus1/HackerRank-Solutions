// https://www.hackerrank.com/challenges/js10-switch/problem?isFullScreen=true
function getLetter(s) {
    let letter = s[0];
    var combination1 = /[aeiou]/g; 
    var combination2 = /[bcdfg]/g;
    var combination3 = /[hiklmm]/g;
    var combination4 = /[n[qrstvwxyz]]/g;
    
    if(letter.match(combination1))
        return 'A';
    else if(letter.match(combination2))
        return 'B';
    else if(letter.match(combination3))
        return 'C';
    else
         return 'D';

}
