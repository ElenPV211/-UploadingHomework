#include <iostream>
using namespace std;
int main() {

	float p1, p2, p3, p4, p5, p6, p7;
	float sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0;
	int pID = 0, pkol = 0, pkol1 = 0, pkol2 = 0, pkol3 = 0, pkol4 = 0;
	int pkol5 = 0, pkol6 = 0, pkol7 = 0;
	int kol1 = 0, kol2 = 0, kol3 = 0, kol4 = 0, kol5 = 0, kol6 = 0, kol7 = 0;
	// ������������ ��� �������� � ����
	p1 = 8.27;
	p2 = 7.44;
	p3 = 7.80;
	p4 = 7.80;
	p5 = 1.70;
	p6 = 2.3;
	p7 = 2.1;

	setlocale(0, ""); //������� ����������� �������� �� ������� ������� �������
	do
	{
		cout << "\n�����\t   || ��� ��� ������ �����\t ||��������� �����\n";
		cout << "���������  || \t\t 1\t\t ||" << p1 << "  ����\n";
		cout << "��� ����   || \t\t 2\t\t ||" << p2 << "  ����\n";
		cout << "���������  || \t\t 3\t\t ||" << p3 << "  ����\n";
		cout << "�������    || \t\t 4\t\t ||" << p4 << "  ����\n";
		cout << "\n�������\t || ��� ��� ������ �������\t||��������� �������\n";
		cout << "�������    || \t\t 5\t\t ||" << p5 << "  ����\n";
		cout << "��������   || \t\t 6\t\t ||" << p6 << "  ����\n";
		cout << "������     || \t\t 7\t\t ||" << p7 << "  ����\n";
		cout << "�������� ���� - �������� ��� 8\n\n";
		cin >> pID;
		switch (pID)
		{
		case 1:
			cout << "������� ����������: \n";
			cin >> kol1;
			sum1 = p1 * kol1;
			pkol1 += kol1;
			sum1 += sum1;

			break;
		case 2:
			cout << "������� ����������: \n";
			cin >> kol2;
			sum2 = p2 * kol2;
			pkol2 += kol2;
			sum2 += sum2;
			break;
		case 3:
			cout << "������� ����������: \n";
			cin >> kol3;
			sum3 = p3 * kol3;
			pkol3 += kol3;
			sum3 += sum3;
			break;
		case 4:
			cout << "������� ����������: \n";
			cin >> kol4;
			sum4 = p4 * kol4;
			pkol4 += kol4;
			sum4 += sum4;
			break;

		case 5:
			cout << "������� ����������: \n";
			cin >> kol5;
			sum5 = p5 * kol5;
			pkol5 += kol5;
			sum5 += sum5;
			break;

		case 6:
			cout << "������� ����������: \n";
			cin >> kol6;
			sum6 = p6 * kol6;
			pkol6 += kol6;
			sum6 += sum6;
			break;

		case 7:
			cout << "������� ����������: \n";
			cin >> kol7;
			sum7 = p7 * kol7;
			pkol7 += kol7;
			sum7 += sum7;
			break;

		case 8:
			//������ ���������� ������ ����� �����
			kol1 = int(pkol1 / 5);
			sum1 = p1 * (pkol1 - kol1);

			kol2 = int(pkol2 / 5);
			sum2 = p2 * (pkol2 - kol2);

			kol3 = int(pkol3 / 5);
			sum3 = p3 * (pkol3 - kol3);

			kol4 = int(pkol4 / 5);
			sum4 = p4 * (pkol4 - kol4);


			cout << "\t\t��� ����\n\n";
			cout << " 1.\t��������� �� �����\t" << sum1 << "  " << pkol1 << "  ��.  " << kol1 << " ��. ���������\n ";
			cout << "2.\t��� ���� �� �����\t" << sum2 << "  " << pkol2 << "  ��.  " << kol2 << " ��. ���������\n ";
			cout << "3.\t��������� �� �����\t" << sum3 << "  " << pkol3 << "  ��.  " << kol3 << " ��. ���������\n ";
			cout << "4.\t������� �� �����\t" << sum4 << "  " << pkol4 << "  ��.  " << kol4 << " ��. ���������\n\n ";

			cout << "5.\t������� �� �����\t" << sum5 << "  " << pkol5 << "  ��.\n ";
			//������ ������ �� ������� ���������� ������ 2 ���� � ���������� ����������� 3 ��
			if (p5 > 2 && pkol5 > 3)
			{
				sum5 = sum5 - sum5 * 0.15;
				cout << "\t������ �� ������� ������� ���������� 15%, � ������  " << sum5 << "\n\n";
			}
			cout << "6.\t�������� �� �����\t  " << sum6 << "   " << pkol6 << "  ��.\n ";
			if (p6 > 2 && pkol6 > 3)
			{
				sum6 = sum6 - sum6 * 0.15;
				cout << "\t������ �� ������� ��������, ���������� 15%, � ������ " << sum6 << "\n";
			}
			cout << " 7.\t������ �� �����\t" << sum7 << "  " << pkol7 << "  ��.\n ";

			if (p7 > 2 && pkol7 > 3)
			{
				sum7 = sum7 - sum7 * 0.15;
				cout << "\t������ �� ������� ������, ���������� 15% � ������" << sum7 << "\n";
			}

			sum = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7;
			cout << "\n\n����� � ������ �� �����: \t\t" << sum << "\n\n";

			if (sum > 50)
			{
				sum = sum - sum * 0.2;
				cout << " ����� ��������� 50 ����, ���� ������ 20 %, � ������  " << sum << "\n\n";
			}
			break;

		default:
			cout << "������ ������ ��� � ����";
		}
	} while (pID < 8);

	return 0;
}

