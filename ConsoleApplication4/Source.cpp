#include <stdint.h>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
start:
	int NZ;
	cout << "введите номер задания = " << endl;
	cin >> NZ;
	switch (NZ == 1)
	{
	case(1):
	{
		//1. Написать программу вычисления стоимости переговоров, 
		//если по субботам и воскресеньям предоставляется 20% скидка. 
		//Ввести продолжительность разговора и день недели (цифра от 1 до 7).

		
		int pr_raz, den_nedeli, price_1_min = 120;
		cout << "продолжительность разговора " << endl;
		cin >> pr_raz;

		cout << "введите день недели " << endl;
		cin >> den_nedeli;

		switch (den_nedeli)
		{
		case 6:
		case 7:

		{
			//20% скидка в выходной день
			cout << "стоимость разговора в выходные дни = " << pr_raz * (price_1_min *0.8) << endl;

		}
		break;


		default:
		{
			//цена в будний день
			cout << "цена в будний день = " << pr_raz*price_1_min << endl;
		}
		break;

		}
	}

	}
	switch (NZ == 2)
	{
	case 1:
	{
		int a, b = 5, c = 10, sum;
		//2. Вычислить стоимость покупки с учетом скидки. 
		// Скидка 5% предоставляется, если сумма покупки превышает 500 тенге и 10%, если больше 1000 тенге
		
		cout << "введите стоимость покупки " << endl;
		cin >> a;
			
		switch (sum)
	case (1):
			if (a > 500)
			{
				cout << "скидка 5% " << (a / 100)*b << endl;
			}
			break;

			if (a > 1000)
			{
				cout << "скидка 10% " << (a / 100)*c << endl;
			}
			break;
			
			
	
	}
	
	}
	
	
		
		

	
	

}
