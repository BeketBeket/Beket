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
	cout << "������� ����� ������� = " << endl;
	cin >> NZ;
	switch (NZ == 1)
	{
	case(1):
	{
		//1. �������� ��������� ���������� ��������� �����������, 
		//���� �� �������� � ������������ ��������������� 20% ������. 
		//������ ����������������� ��������� � ���� ������ (����� �� 1 �� 7).

		
		int pr_raz, den_nedeli, price_1_min = 120;
		cout << "����������������� ��������� " << endl;
		cin >> pr_raz;

		cout << "������� ���� ������ " << endl;
		cin >> den_nedeli;

		switch (den_nedeli)
		{
		case 6:
		case 7:

		{
			//20% ������ � �������� ����
			cout << "��������� ��������� � �������� ��� = " << pr_raz * (price_1_min *0.8) << endl;

		}
		break;


		default:
		{
			//���� � ������ ����
			cout << "���� � ������ ���� = " << pr_raz*price_1_min << endl;
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
		//2. ��������� ��������� ������� � ������ ������. 
		// ������ 5% ���������������, ���� ����� ������� ��������� 500 ����� � 10%, ���� ������ 1000 �����
		
		cout << "������� ��������� ������� " << endl;
		cin >> a;
			
		switch (sum)
	case (1):
			if (a > 500)
			{
				cout << "������ 5% " << (a / 100)*b << endl;
			}
			break;

			if (a > 1000)
			{
				cout << "������ 10% " << (a / 100)*c << endl;
			}
			break;
			
			
	
	}
	
	}
	
	
		
		

	
	

}
