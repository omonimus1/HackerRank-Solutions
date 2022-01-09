// https://www.hackerrank.com/challenges/one-week-preparation-kit-time-conversion/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-one
string timeConversion(string s) {
    // Understand if AM or PM
    int len = s.size(); 
    string prefix =  s.substr(len-2, len-1); 
    cout <<prefix;
    // get hours
    string hour = s.substr(0,2);
    s = s.substr(0, len-2); 
    if (prefix == "AM")
    {
        if(hour == "12")
            s[0] = s[1] = '0';
        return s;  
    }
    //  PM CASE
    if (hour == "12") 
        return s;
    // convert hour to number
    int hour_in_digits = stoi(hour);
    hour_in_digits +=12;
    // reconvert new hour in string
    hour = to_string(hour_in_digits);
    s[0] = hour[0];
    s[1] = hour[1];
    return s; 
}