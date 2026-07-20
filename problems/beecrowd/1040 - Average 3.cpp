#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, media;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    if (media >= 7)
    {
        printf("Media: %0.1f\n", media);
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5)
    {
        printf("Media: %0.1f\n", media);
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        printf("Media: %0.1f\n", media);
        cout << "Aluno em exame." << endl;
        float n5;
        cin >> n5;
        printf("Nota do exame: %0.1f\n", n5);
        float result = (media + n5) / 2;
        if (result >= 5)
        {
            cout << "Aluno aprovado." << endl;
            printf("Media final: %0.1f\n", result);
        }
        else if (result < 5)
        {
            cout << "Aluno reprovado." << endl;
            printf("Media final: %0.1f\n", result);
        }
    }

    return 0;
}
