#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count1 = 0, count2 = 0;
        string digit, one = "one", two = "two";
        cin >> digit;
        if (digit.length() > 3)
        {
            cout << 3 << endl;
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                if (digit[j] == one[j])
                {
                    count1++;
                }
                if (digit[j] == two[j])
                {
                    count2++;
                }
            }
            if (count1 > count2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
