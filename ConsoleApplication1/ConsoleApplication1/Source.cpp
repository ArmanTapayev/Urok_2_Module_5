#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	system("color 1A");
	srand(time(NULL));

	int n, i, j;

	do
	{
		cout << "������� ����� �������: ";
		cin >> n;
		cout << endl;

		switch (n)
		{
		case 1:
		{
			/*1. ������ ������������ ��� �������� �������� ����� �������� �������.
			� ������� ������� ��������� ����� ��������� ������ ������ ����������,
			�������� � ��������� �� 50 �� 100 �������������*/

			int A[20];

			for (i = 0; i < 20; i++)
			{
				A[i] = 50 + rand() % 50;
				cout << "��� " << i + 1 << " ��������: " << A[i] << endl;
			}

			cout << endl;

			system("pause");
			system("cls");

		}

		break;

		case 2:
		{
			/*2. ��������� ������ �� ������ ��������� ����� �������,
			����� �������� ��������� ��� ��������� ������� ����� ������� ������������:
			a.	��������� ������������������;
			b.	������������ ������������������ */

			int A[8], min, max, temp;

			cout << "������ �� ����������: " << endl;
			cout << endl;

			for (i = 0; i < 8; i++)
			{
				A[i] = 1 + rand() % 30;
				cout << "A[" << i << "]=" << A[i] << endl;
			}

			/* ������������� ����������� �������
			���������� ���� ��� ���� ��������� ����� ����������
			��� ������ ������������� �������� � ��� ������*/

			for (i = 0; i < 7; i++)
			{
				max = i; // ���������� ������ �������� ��������

						 // ���� ������������ ������� ����� ��������� �� ����� i-���
						 // ��� ��������� ��������� ����� i-���

				for (int j = i + 1; j < 8; j++)
				{
					if (A[j] > A[max])     // ���� ������� ������ �������������,
						max = j;		   // ���������� ��� ������ � max
				}

				temp = A[i];
				A[i] = A[max];
				A[max] = temp;

			}

			cout << endl;
			cout << "��������� ������������������." << endl;
			cout << endl;

			for (i = 0; i < 8; i++)
			{
				cout << "A[" << i << "]=" << A[i] << endl;
			}


			/* ������������� ����������� �������
			���������� ���� ��� ���� ��������� ����� ����������
			��� ������ ������������ �������� � ��� ������*/

			for (i = 0; i < 7; i++)
			{
				min = i; // ���������� ������ �������� ��������

						 // ���� ����������� ������� ����� ��������� �� ����� i-���
						 // ��� ��������� ��������� ����� i-���

				for (int j = i + 1; j < 8; j++)
				{
					if (A[j] < A[min])     // ���� ������� ������ ������������,
						min = j;		   // ���������� ��� ������ � min
				}

				temp = A[i];
				A[i] = A[min];
				A[min] = temp;

			}

			cout << endl;
			cout << "������������ ������������������." << endl;
			cout << endl;

			for (i = 0; i < 8; i++)
			{
				cout << "A[" << i << "]=" << A[i] << endl;
			}

			system("pause");
			system("cls");

		}
		break;

		case 3:
		{
			/*3. ������ ������������� ������, ��������� �� 10 ���������.
			�������� ������� ������������ � ������ ��������.   */

			int A[10], max, maxi, temp;

			max = 0;

			cout << "�������� ������: " << endl;

			for (i = 0; i < 10; i++)
			{
				A[i] = 10 - rand() % 20;
				cout << "A[" << i << "]=" << A[i] << endl;
				if (A[i] > max)
				{
					max = A[i];
					maxi = i;
				}
			}

			cout << endl;
			cout << "������������ �������: A[" << maxi << "] = " << A[maxi] << endl;
			cout << endl;

			temp = A[0];
			A[0] = A[maxi];
			A[maxi] = temp;

			cout << "������ ����� ������: " << endl;

			for (i = 0; i < 10; i++)
			{
				cout << "A[" << i << "]=" << A[i] << endl;
			}

			system("pause");
			system("cls");

		}

		break;

		case 4:
		{
			/*4. ����� ������, ��������� �� 15 ��������� ������������� ����.
			���������� ���������� ���������, �������� ������� ������ ������� ��������.*/

			double A[15];
			int count;

			count = 0;

			for (i = 0; i < 15; i++)
			{
				A[i] = 10 + rand() % 30;
				cout << "A[" << i << "]=" << A[i] << endl;
				if (A[i] > A[0]) count++;

			}

			cout << endl;
			cout << "���������� ���������, �������� ������� ������ ������� ��������: " << count << endl;
			cout << endl;

			system("pause");
			system("cls");

		}
		break;

		case 5:
		{
			/*5. ������ ������������� ������, ��������� �� 15 ���������.
			���������� ����� � �������� ������������� � ������������ ���������     */

			int A[15], max, maxi, min, mini;

			max = 0;
			min = 1000000;

			for (i = 0; i < 15; i++)
			{
				A[i] = 1 + rand() % 20;
				cout << "A[" << i << "]=" << A[i] << endl;
				if (A[i] < min)
				{
					min = A[i];
					mini = i;
				}

				if (A[i] > max)
				{
					max = A[i];
					maxi = i;
				}
			}

			cout << endl;
			cout << "������������ ������� - A[" << maxi << "]=" << A[maxi] << endl;
			cout << "����������� ������� - A[" << mini << "]=" << A[mini] << endl;
			cout << endl;
			cout << "����� ������������� � ������������ �������� - : " << max + min << endl;
			cout << "�������� ������������� � ������������ �������� - : " << max - min << endl;

			system("pause");
			system("cls");

		}

		break;

		}

	} while (n != 0);

}