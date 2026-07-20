#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cin >> name;
    if (name == "vertebrado")
    {
        string name11;
        cin >> name11;
        if (name11 == "ave")
        {
            string name12;
            cin >> name12;
            if (name12 == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (name12 == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if (name11 == "mamifero")
        {
            string name13;
            cin >> name13;
            if (name13 == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (name13 == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (name == "invertebrado")
    {
        string name21;
        cin >> name21;
        if (name21 == "inseto")
        {
            string name22;
            cin >> name22;
            if (name22 == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (name22 == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if (name21 == "anelideo")
        {
            string name23;
            cin >> name23;
            if (name23 == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (name23 == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
