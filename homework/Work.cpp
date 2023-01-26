#include <iostream>
#include <conio.h>
#include <math.h>

//#define lucky tiket
//#define SHOOTER 
//#define FACTORIAL 
//#define STEPEN 
//#define ASCII 
//#define FibonacciQuarterly 
//#define FibonacciRows
//#define SimpleNumber

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef lucky tiket
	int tiket;
	int num1 = 0;
	int num2 = 0;
	cout << "Введите шестизначный номер билета:" << endl;
	cin >> tiket;
	int copy = tiket / 1000;
	for (int i = 0; i < 3; i++)
	{
		num1+= tiket % 10;
		tiket /= 10;
		num2 += copy % 10;
		copy /= 10;
	}
	if (num1 == num2) cout << "Билет счастливый" << endl;
	else cout << "Билет обычный" << endl;
#endif lucky tiket

#ifdef SHOOTER 
	char symbol;
	do
	{
		symbol = _getch();
		if (symbol == 119) cout << "Вперед" << endl;
		else if (symbol == 115) cout << "Назад" << endl;
		else if (symbol == 97) cout << "Влево" << endl;
		else if (symbol == 100) cout << "Вправо" << endl;
		else if (symbol == 32) cout << "Прыжок" << endl;
		else if (symbol == 13) cout << "Огонь" << endl;
		else cout << "Error" << endl;

	} while (symbol != 27);
#endif SHOOTER 

#ifdef FACTORIAL 
	int number, res;
	long long int resl = 1;
	cout << "Введите число:" << endl;
	cin >> number;
	res = number;
	if (number == 0) cout << "Факториал = 1" << endl;
	else
	{
		for (int i = 0; i < number; i++)
		{
			resl *= res;
			res--;
		}
		cout << "Факториал числа равен:" << resl << endl;
	}
#endif FACTORIAL 

#ifdef STEPEN

	int stepen, main;
	long long int resl = 1;
	cout << "Введите число:" << endl;
	cin >> main;
	cout << "Введите степень числа:" << endl;
	cin >> stepen;
	for (int i = 0; i < stepen; i++) resl *= main;
	cout << "Результат равен:" << resl << endl;
#endif STEPEN

#ifdef ASCII
	for (int i = 0; i <= 16; i++)cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 16; i <= 32; i++)cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 32; i <= 48; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 48; i <= 64; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 64; i <= 80; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 80; i <= 96; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 96; i <= 112; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 112; i <= 128; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 128; i <= 144; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 144; i <= 160; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 160; i <= 176; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 176; i <= 192; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 192; i <= 208; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 208; i <= 224; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 224; i <= 240; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
	for (int i = 240; i <= 256; i++) cout << i << "=" << (char)i << "\t";
	cout << "\n";
#endif ASCII

#ifdef FibonacciQuarterly
	int chislo;
	int num = 1;
	cout << "Введите число:" << endl;
	cin >> chislo;
	for (int resl = 0; resl < chislo;)
	{
		cout << resl << "\t" << num << "\t";
		resl += num;
		num += resl;
	}
#endif FibonacciQuarterly

#ifdef FibonacciRows
	int chislo, end;
	int num1 = 1;
	int num2 = 0;
	cout << "Введите число:" << endl;
	cin >> chislo;
	end = chislo/2;
	for (int i = 0; i<end; i++)
	{
		cout << num2 << "\t";
		cout << num1 << "\t";
		num2 += num1;
		num1 += num2;
	}
	if (chislo % 2) cout << num2;
#endif FibonacciRows

#ifdef SimpleNumber
	int number;
	cout << "Введите придел:" << endl;
	cin >> number;
	for (int i = 2; i <= number; ++i) 
	{
     if (i == 2 || i == 3 || i == 5 || i == 7 ||i == 11 || i==13 || i==17) cout << i << "\t";
     if (i % 2 && i % 3 && i % 5 && i % 7 && i % 11 && i % 13 && i % 17) cout << i << "\t";
	}
#endif SimpleNumber
}