#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        string word;
        cin >> word;
        if (word == "#")
        {
            break;
        }
        else
        {
            count++;
            if (word == "HELLO")
            {
                cout << "Case " << count << ": " << "ENGLISH" << endl;
            }
            else if (word == "HOLA")
            {
                cout << "Case " << count << ": " << "SPANISH" << endl;
            }
            else if (word == "HALLO")
            {
                cout << "Case " << count << ": " << "GERMAN" << endl;
            }
            else if (word == "BONJOUR")
            {
                cout << "Case " << count << ": " << "FRENCH" << endl;
            }
            else if (word == "CIAO")
            {
                cout << "Case " << count << ": " << "ITALIAN" << endl;
            }
            else if (word == "ZDRAVSTVUJTE")
            {
                cout << "Case " << count << ": " << "RUSSIAN" << endl;
            }
            else
            {
                cout << "Case " << count << ": " << "UNKNOWN" << endl;
            }
        }
    }

    return 0;
}
