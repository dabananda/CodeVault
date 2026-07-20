#include <iostream>
using namespace std;

int main()
{
	float salary;
	cin >> salary;
	if (salary <= 400)
	{
		float readjustment = salary * (15.00 / 100);
		printf("Novo salario: %0.2f\n", salary + readjustment);
		printf("Reajuste ganho: %0.2f\n", readjustment);
		cout << "Em percentual: 15 %" << endl;
	}
	else if (salary <= 800.00)
	{
		float readjustment = salary * (12.00 / 100);
		printf("Novo salario: %0.2f\n", salary + readjustment);
		printf("Reajuste ganho: %0.2f\n", readjustment);
		cout << "Em percentual: 12 %" << endl;
	}
	else if (salary <= 1200)
	{
		float readjustment = salary * (10.00 / 100);
		printf("Novo salario: %0.2f\n", salary + readjustment);
		printf("Reajuste ganho: %0.2f\n", readjustment);
		cout << "Em percentual: 10 %" << endl;
	}
	else if (salary <= 2000)
	{
		float readjustment = salary * (7.00 / 100);
		printf("Novo salario: %0.2f\n", salary + readjustment);
		printf("Reajuste ganho: %0.2f\n", readjustment);
		cout << "Em percentual: 7 %" << endl;
	}
	else
	{
		float readjustment = salary * (4.00 / 100);
		printf("Novo salario: %0.2f\n", salary + readjustment);
		printf("Reajuste ganho: %0.2f\n", readjustment);
		cout << "Em percentual: 4 %" << endl;
	}

	return 0;
}