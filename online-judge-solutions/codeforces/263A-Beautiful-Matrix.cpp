#include <iostream>
using namespace std;

int main()
{
    int m[5][5], row, column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
            {
                column = i;
                row = j;
            }
        }
    }
    cout << abs(column - 2) + abs(row - 2) << endl;
    
    return 0;
}
