#include "Functions.h"

using namespace std;

void DataEntry(Data* (&d), int &n)
{
	cout << "Введите размер массива: ";
	cin >> n;

	d = new Data[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите Ваш возраст: ";
		cin >> d[i]._age.age;

		cout << "Введите Ваш пол (мужской, женский): ";
		cin >> d[i]._sex.sex;

		cout << "Введите Ваше образование (начальное, среднее, высшее): ";
		cin >> d[i]._edu.edu;
		
		cout << "Введите Ваш ответ (нет, да): ";
		cin >> d[i]._ans.ans;

cout<<"________________________________________\n";
	}

}

void Print(Data* d, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Данные №" << i + 1 << endl;
    cout << "Введите Ваш возраст: " << d[i]._age.age << endl;
		cout << "Введите Ваш пол (мужской, женский): " << d[i]._sex.sex << endl;
    cout << "Введите Ваше образование (начальное, среднее, высшее): " << d[i]._edu.edu << endl;
		cout << "Введите Ваш ответ (нет, да): " << d[i]._ans.ans << endl;

		cout<<"________________________________________\n";

	}
}

void DataChange(Data* (&d), int n)
{
	int _n;

	cout << "Введите номер нужного элемента от 1 до " << n << ":";
	cin >> _n;
	_n--;

	if (_n >= 0 && _n < n)
	{
		cout << "Введите Ваш возраст: ";
		cin >> d[_n]._age.age;

		cout << "Введите Ваш пол (мужской, женский): ";
		cin >> d[_n]._sex.sex;

		cout << "Введите Ваше образование (начальное, среднее, высшее): ";
		cin >> d[_n]._edu.edu;

		cout << "Введите Ваш ответ (нет, да): ";
		cin >> d[_n]._ans.ans;

		system("cls");
		cout << "Данные изменены." << endl;
	}
	else
		cout << "Номер введен не корректно." << endl;
}

void Copy(Data* (&d_n), Data* (&d_o), int n)
{
	for (int i = 0; i < n; i++)
		d_n[i] = d_o[i];
}

void AddData(Data* (&d), int &n)
{
	Data* add;
	add = new Data[n];
	Copy(add, d, n);
  n++;
	d = new Data[n];
	Copy(d, add, --n);

	cout << "Введите Ваш возраст: ";
	cin >> d[n]._age.age;

	cout << "Введите Ваш пол (мужской, женский): ";
	cin >> d[n]._sex.sex;

	cout << "Введите Ваше образование (начальное, среднее, высшее): ";
	cin >> d[n]._edu.edu;

	cout << "Введите Ваш ответ (нет, да): ";
	cin >> d[n]._ans.ans;

	system("cls");

	cout << "Данные добавлены." << endl;

	delete[]add;
}

void DeleteData(Data* (&d), int &n)
{
	int _n;
	cout << "Введите номер нужного элемента от 1 до " << n << ":";
	cin >> _n;
	_n--;

	if (_n >= 0 && _n < n)
	{
		Data* add = new Data[n];
		Copy(add, d, n);

		--n;
		d = new Data[n];

		int k = 0;

		for (int i = 0; i <= n; i++)
		{
			if (i != _n)
			{
				d[k] = add[i];
				k++;
			}
		}
		cout << "Данные удалены." << endl;
	}
	else
    cout << "Номер введен не корректно." << endl;
}

void DataFind(Data* d, int n)
{
	if (TRUE)
	{
cout << "Мужчины старше 40 лет, имеющие высшее образование, ответившие ДА на вопрос анкеты: \n" << endl;

		for (int i = 0; i < n; i++)
		{
			if (d[i]._age.age >= 40 &&
(d[i]._sex.sex == "мужской" || d[i]._sex.sex == "Мужской") &&
				(d[i]._edu.edu == "высшее" || d[i]._edu.edu == "Высшее") &&
				(d[i]._ans.ans == "да" || d[i]._ans.ans == "Да"))
			{
				cout << "Данные №" << i + 1 << endl;

				cout << d[i]._age.age << endl;
				cout << d[i]._sex.sex << endl;
				cout << d[i]._edu.edu << endl;
				cout << d[i]._ans.ans << endl;

				cout<<"________________________________________\n";

			}
		}
	}
	else
		cout << "Список пуст." << endl;

	if (TRUE)
	{
    cout << "Женщины младше 30 лет, имеющие среднее образование, ответившие НЕТ на вопрос анкеты: \n" << endl;

		for (int i = 0; i < n; i++)
		{
			if (d[i]._age.age < 30 &&
        (d[i]._sex.sex == "женский" || d[i]._sex.sex == "Женский") &&
				(d[i]._edu.edu == "среднее" || d[i]._edu.edu == "Среднее") &&
				(d[i]._ans.ans == "нет" || d[i]._ans.ans == "Нет"))
			{
				cout << "Данные №" << i + 1 << endl;

				cout << d[i]._age.age << endl;
				cout << d[i]._sex.sex << endl;
				cout << d[i]._edu.edu << endl;
        cout << d[i]._ans.ans << endl;
				cout<<"________________________________________\n";
			}
		}
	}

	if (TRUE)
	{
    cout << "Мужчины младше 25 лет, имеющие начальное образование, ответившие ДА на вопрос анкеты: \n" << endl;

		for (int i = 0; i < n; i++)
		{
			if (d[i]._age.age < 25 &&
        (d[i]._sex.sex == "мужской" || d[i]._sex.sex == "Мужской") &&
        (d[i]._edu.edu == "начальное" || d[i]._edu.edu == "Начальное") &&
				(d[i]._ans.ans == "да" || d[i]._ans.ans == "Да"))
			{
				cout << "Данные №" << i + 1 << endl;

				cout << d[i]._age.age << endl;
				cout << d[i]._sex.sex << endl;
				cout << d[i]._edu.edu << endl;
				cout << d[i]._ans.ans << endl;

        cout<<"________________________________________\n";
			}
		}
	}
}
