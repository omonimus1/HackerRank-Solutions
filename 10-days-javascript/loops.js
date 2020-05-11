// https://www.hackerrank.com/challenges/js10-loops/problem?isFullScreen=true
function is_a_wovels(single_char)
{
    if(single_char == 'a' || single_char == 'e' || single_char == 'i' || single_char == 'o' || single_char == 'u')
        return true;
    else 
        return false;
}

function vowelsAndConsonants(s) {
    for(var i =0; i< s.length; i++)
    {
        if(is_a_wovels(s[i]))
            console.log(s[i]);
    }
    for(var i =0; i< s.length; i++)
    {
        if(!is_a_wovels(s[i]))
            console.log(s[i]);
    }
}