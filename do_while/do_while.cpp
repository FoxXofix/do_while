#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int number, id = 1;
	cout << "Введите number = ";
	cin >> number;
	do // выводим на экран id а затем увеличивает
		cout << id++ << "\t"; //её значение на еденицу
		while (id <= number); //до тех пор пока меньше id <= number 
}