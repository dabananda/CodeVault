#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    string str, s;
    int n;
    cin >> n;
    map<string, int> m;
    map<string, int>::iterator i;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        getline(cin,str);
        m[s]++;
    }
    for (i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
    return 0;
}