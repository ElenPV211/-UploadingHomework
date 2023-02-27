#include <iostream>
using namespace std;
int main() {

	float p1, p2, p3, p4, p5, p6, p7;
	float sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0;
	int pID = 0, pkol = 0, pkol1 = 0, pkol2 = 0, pkol3 = 0, pkol4 = 0;
	int pkol5 = 0, pkol6 = 0, pkol7 = 0;
	int kol1 = 0, kol2 = 0, kol3 = 0, kol4 = 0, kol5 = 0, kol6 = 0, kol7 = 0;
	// присваивание цен позициям в меню
	p1 = 8.27;
	p2 = 7.44;
	p3 = 7.80;
	p4 = 7.80;
	p5 = 1.70;
	p6 = 2.3;
	p7 = 2.1;

	setlocale(0, ""); //команда позволяющая выводить на консоль русские символы
	do
	{
		cout << "\nПицца\t   || код для выбора пиццы\t ||стоимость пиццы\n";
		cout << "Моцарелла  || \t\t 1\t\t ||" << p1 << "  долл\n";
		cout << "Три сыра   || \t\t 2\t\t ||" << p2 << "  долл\n";
		cout << "Гавайская  || \t\t 3\t\t ||" << p3 << "  долл\n";
		cout << "Венеция    || \t\t 4\t\t ||" << p4 << "  долл\n";
		cout << "\nНапитки\t || код для выбора напитка\t||стоимость напитка\n";
		cout << "Лимонад    || \t\t 5\t\t ||" << p5 << "  долл\n";
		cout << "Буратино   || \t\t 6\t\t ||" << p6 << "  долл\n";
		cout << "Тархун     || \t\t 7\t\t ||" << p7 << "  долл\n";
		cout << "Покинуть меню - выберите код 8\n\n";
		cin >> pID;
		switch (pID)
		{
		case 1:
			cout << "Введите количество: \n";
			cin >> kol1;
			sum1 = p1 * kol1;
			pkol1 += kol1;
			sum1 += sum1;

			break;
		case 2:
			cout << "Введите количество: \n";
			cin >> kol2;
			sum2 = p2 * kol2;
			pkol2 += kol2;
			sum2 += sum2;
			break;
		case 3:
			cout << "Введите количество: \n";
			cin >> kol3;
			sum3 = p3 * kol3;
			pkol3 += kol3;
			sum3 += sum3;
			break;
		case 4:
			cout << "Введите количество: \n";
			cin >> kol4;
			sum4 = p4 * kol4;
			pkol4 += kol4;
			sum4 += sum4;
			break;

		case 5:
			cout << "Введите количество: \n";
			cin >> kol5;
			sum5 = p5 * kol5;
			pkol5 += kol5;
			sum5 += sum5;
			break;

		case 6:
			cout << "Введите количество: \n";
			cin >> kol6;
			sum6 = p6 * kol6;
			pkol6 += kol6;
			sum6 += sum6;
			break;

		case 7:
			cout << "Введите количество: \n";
			cin >> kol7;
			sum7 = p7 * kol7;
			pkol7 += kol7;
			sum7 += sum7;
			break;

		case 8:
			//расчёт количества каждой пятой пиццы
			kol1 = int(pkol1 / 5);
			sum1 = p1 * (pkol1 - kol1);

			kol2 = int(pkol2 / 5);
			sum2 = p2 * (pkol2 - kol2);

			kol3 = int(pkol3 / 5);
			sum3 = p3 * (pkol3 - kol3);

			kol4 = int(pkol4 / 5);
			sum4 = p4 * (pkol4 - kol4);


			cout << "\t\tВаш счёт\n\n";
			cout << " 1.\tМоцарелла на сумму\t" << sum1 << "  " << pkol1 << "  шт.  " << kol1 << " шт. бесплатно\n ";
			cout << "2.\tТри сыра на сумму\t" << sum2 << "  " << pkol2 << "  шт.  " << kol2 << " шт. бесплатно\n ";
			cout << "3.\tГавайская на сумму\t" << sum3 << "  " << pkol3 << "  шт.  " << kol3 << " шт. бесплатно\n ";
			cout << "4.\tВенеция на сумму\t" << sum4 << "  " << pkol4 << "  шт.  " << kol4 << " шт. бесплатно\n\n ";

			cout << "5.\tЛимонад на сумму\t" << sum5 << "  " << pkol5 << "  шт.\n ";
			//расчёт скидки на напитки стоимостью больше 2 долл в количестве превышающем 3 шт
			if (p5 > 2 && pkol5 > 3)
			{
				sum5 = sum5 - sum5 * 0.15;
				cout << "\tСкидка на позицию Лимонад составляет 15%, к оплате  " << sum5 << "\n\n";
			}
			cout << "6.\tБуратино на сумму\t  " << sum6 << "   " << pkol6 << "  шт.\n ";
			if (p6 > 2 && pkol6 > 3)
			{
				sum6 = sum6 - sum6 * 0.15;
				cout << "\tСкидка на позицию Буратино, составляет 15%, к оплате " << sum6 << "\n";
			}
			cout << " 7.\tТархун на сумму\t" << sum7 << "  " << pkol7 << "  шт.\n ";

			if (p7 > 2 && pkol7 > 3)
			{
				sum7 = sum7 - sum7 * 0.15;
				cout << "\tСкидка на позицию Тархун, составляет 15% к оплате" << sum7 << "\n";
			}

			sum = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7;
			cout << "\n\nВсего к оплате по счёту: \t\t" << sum << "\n\n";

			if (sum > 50)
			{
				sum = sum - sum * 0.2;
				cout << " СУММА превышает 50 долл, ВАША СКИДКА 20 %, к оплате  " << sum << "\n\n";
			}
			break;

		default:
			cout << "Такого пункта нет в меню";
		}
	} while (pID < 8);

	return 0;
}

