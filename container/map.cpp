#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, char> chMap;
    chMap[1] = 'a';
    chMap[2] = 'b';
    chMap[10] = 'A';
    chMap[5] = 'e';

    for (auto x=chMap.begin(); x!=chMap.end(); x++)
        cout << "key:" << x->first << " value:" << x->second << endl;

    return 0;
}