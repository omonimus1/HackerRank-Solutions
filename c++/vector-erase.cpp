#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int size , e , index , range_start , range_end;
    cin >> size;
    vector<int> vett; 
    for(int i=0; i< size; i++)
    {
        cin >>e;
        vett.push_back(e);

    } 
    //cin >> index; 
    //cin >> range_start >> range_end;
    index = 2;
    range_start = 2;
    range_end = 4;
    vett.erase(vett.begin()+index);
    vett.erase(vett.begin()+range_start ,vett.end()+range_end);

    for(int i=0; i< vett.size(); i++)
    {
        cout << vett[i] << " ";
    }
    return 0; 
}