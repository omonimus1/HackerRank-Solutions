// https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true
int getMoneySpent(vector<int> keyboards, vector<int> drives, int target) {
    int lenght_keyboards = keyboards.size();
    int lenght_drives = drives.size();
    std::sort(keyboards.begin(), keyboards.end(), std::greater<int>());
    std::sort(drives.begin(), drives.end(), std::greater<int>());

    std::cout << lenght_keyboards << " " << lenght_drives;
    
    int highest = -1;
    for  (int i =0; i < lenght_drives; i++) {
        for (int j=0; j < lenght_keyboards; j++){
            if (drives[i] + keyboards[j] <= target && drives[i] + keyboards[j] > highest) {
                highest = drives[i] + keyboards[j];
            }
        }
    }
    return highest;
}
