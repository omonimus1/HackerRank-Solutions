//  https://www.hackerrank.com/challenges/reduced-string/problem
string superReducedString(string s) {
    int len = s.size();
    string result = "";
    unordered_map<char, int>mp;
    for (int i = 0; i < len; i++)
        mp[s[i]]++;

    char letter;
    for (int i = 0; i < len; i++)
    {
        letter = s[i];
        if (mp[letter] % 2 != 0)
        {
            result += letter;
            mp[letter] = 0;
        }

    }
    if (result == "")
        return "Empty String";
    return result;
}
