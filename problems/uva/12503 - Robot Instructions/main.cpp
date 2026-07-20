#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, n;
    string query[105];
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        cin >> n;
        string str1, str2;
        int str3, p = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> str1;
            if  (str1 == "LEFT"){
                query[i] = str1;
                p--;
            }
            else if (str1 == "RIGHT")
            {
                query[i] = str1;
                p++;
            }
            else
            {
                cin >> str2 >> str3;
                query[i] = query[str3];
                if (query[str3] == "LEFT")
                {
                    p--;
                }
                else if (query[str3] == "RIGHT")
                {
                    p++;
                }
            }
        }
        cout << p << endl;
    }

    return 0;
}