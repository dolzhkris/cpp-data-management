#include <iostream>
#include "Functions.h"

using namespace std;

int _startmenu;

void Menu()
{
	cout << "Выберите действие" << endl
		<< "{0} Выход из программы: " << endl
		<< "{1} Ввод данных: " << endl
		<< "{2} Вывод данных: " << endl
		<< "{3} Изменение данных: " << endl
		<< "{4} Добавление данных: " << endl
		<< "{5} Удаление данных: " << endl
		<< "{6} Сортировка данных: " << endl
		<< "Ваш выбор: ";
	cin >> _startmenu;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Menu();

	int _size = 0; 
	Data* d = new Data[_size];

	while (_startmenu != 0)
		switch (_startmenu)
		{
		case 1:
			system("cls"); 

			DataEntry(d, _size);

			system("pause");
			system("cls");
			Menu();
			break;
		case 2:
			system("cls");
      if (_size != 0)
      				Print(d, _size);
      			else
      				cout << "Список пуст." << endl;
      
      			system("pause");
      			system("cls");
      			Menu();
      			break;
      		case 3:
      			system("cls");
      
      			if (_size != 0)
      				DataChange(d, _size);
      			else
      				cout << "Список пуст." << endl;
      
      			system("pause");
      			system("cls");
      			Menu();
      			break;
      		case 4:
      			system("cls");
      
      			if (_size != 0)
      			{
      				AddData(d, _size);
      				_size++;
      			}
      			else
      				cout << "Список пуст." << endl;
      
      			system("pause");
      			system("cls");
      			Menu();
      			break;
      		case 5:
      			system("cls");
      
      			if (_size != 0)
      				DeleteData(d, _size);
      			else
      				cout << "Список пуст." << endl;
      
      			system("pause");
      			system("cls");
      			Menu();
      		case 6:
      			system("cls");
      
      			if (_size != 0)
              DataFind(d, _size);
              			else
              				cout << "Список пуст." << endl;
              
              			system("pause");
              			system("cls");
              			Menu();
              		}
              	
              }
