

#include <iostream>
#include <Windows.h>
using namespace std; 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\t\tЛАБОРАТОРАНА РОБОТА НОМЕР 2" << endl << endl;
					cout << "\t\t****1 **** Программа HELLO2" << endl<<endl;
	 
	char a[20];
	cout <<"Як вас звати? :";
	cin.getline(a,20);
	cout << endl;
	cout << "Доброго дня, " << a << endl;
	cout<< endl << endl;


	cout << "\t\t****2**** Програма PARROT " << endl<<endl;
	    char c[25];
	    cout << "Введіть довільний рядок тексту з клавіатури: ";
		cin.getline(c, 25);
		cout << c << endl;
		cout << endl << endl;


		cout <<"\t\t****3**** Програма SWAP" << endl << endl;
		float A, B, C;
		cout << "Ведіть будь-які два числа:" << endl;
		cout << "1.";
		cin >> A;
		cout << "2.";
		cin >> B;
		cout << "A = " << A;
        cout<<" ";
		cout << "B = "<<B;
		cout << endl;
		C = A;
		A = B;
		B = C;
		cout << "A = " << A << " B = " << B << endl;
		cout << endl << endl;





		cout << "\t\t***4*** Програма SWAP3" << endl << endl;
		float A1, B1, C1, D1;
		cout << "Ведіть будь-яких три числа" << endl;
		cout << "1.";
		cin >> A1;
		cout << "2.";
		cin >> B1;
		cout << "3.";
		cin >> C1;
		cout << " " << endl;
		cout << "A = " << A1 << " B = " << B1 << " C = " << C1 << endl;
		D1 = C1;
		C1 = B1;
		B1 = A1;
		A1 = D1;
		cout << "A = " << A1 << " B = " << B1 << " C = " << C1<<endl;
		cout << endl << endl;

		cout << "\t\t****5**** Програма SWAP4" << endl << endl;
		float A2, B2, C2, D2, E2;
		cout << "Ведіть будь-яких 4 числа" << endl;
		cout << "1.";
		cin >> A2;
		cout << "2.";
		cin >> B2;
		cout << "3.";
		cin >> C2;
		cout << "4.";
		cin >> D2;
		cout << endl;
		cout << "A = " << A2 << " B = " << B2 << " C = " << C2 << " D = " << D2 << endl;
		E2 = D2;
		D2 = C2;
		C2 = B2;
		B2 = A2;
		A2 = E2;
		cout << "A = " << A2 << " B = " << B2 << " C = " << C2 << " D = " << D2 << endl;
		cout << endl << endl;




		cout << "\t\t****6**** Програма HELLO3"<<endl;
		
		char a1[30];
		cout << "Як тебе звати? :";
		cin.ignore (32767, '\n');
		cin.getline(a1, 30);
		int b1;
		cout << "Скільки тобі років? : ";
		cin >> b1;
		char c1[30];
		cout << "Де ти навчаєшся? : ";
		cin.ignore (32767, '\n');
		cin.getline(c1,30);
		cout << endl;
		cout << "Доброго дня, " << a1 << endl;
		cout << "Вітаємо вас, Вам усього " << b1 << ", а Ви вже ведете діалог з комп'ютером!" << endl;
		cout << c1 << " буде пишатися Вами!" << endl;
		cout << endl << endl;

		
		
		cout << "\t\t****7**** Програма ANKETA2" << endl;
        char a2[15];
		char b2[20];
		char c2[20];
		char d2[11];
		char e2[12];
		char f2[35];
		char g2[15];
		char h2[35];
		char k2[12];
		char t2[35];
		cout << "       Прізвище? : ";
		cin.getline(a2, 15);
		cout << "           Ім'я? : ";
		cin.getline(b2, 20);
		cout << "    По батькові? : ";
		cin.getline(c2, 20);
	    cout << "          Стать? : ";
		cin.getline(d2, 11);
		cout << "Дата народження? : ";
		cin.getline (e2, 12);
		cout << "         Адреса? : ";
		cin.getline(f2, 35);
		cout << " Номер телефону? : ";
		cin.getline (g2,15);
		cout << "  Місце навчаня? : ";
		cin.getline(h2, 35);
		cout << "          Група? : ";
		cin.getline(k2, 12);
		cout << "           Хобі? : ";
		cin.getline(t2, 35);
		cout << endl << endl;

		cout << "      Прізвище: " << a2 <<"                     Ім'я: " << b2;cout << "  По батькові: " << c2 << endl;
		cout << "Номер телефону: "<< g2<<"             Хобі: " << t2 << endl;
		cout << "Місце навчання:"<< h2<<" Група: " << k2 << endl;
		cout << "Дата народження: "<< e2<< "              Стать: " << d2 << endl;
		cout << "Адреса: " << f2 << endl;

		cout << endl << endl;

		cout << "\t\t****8**** Програма GUESS" << endl;

		int x, y, z;
		cout << "Задумайте якесь число: x = ";
		cin >> x;
		cout << endl;
		cout << "Виконайте такі арифметичні операції : ((x * 5) / 3 )*4 ,(х помножити на 5, потім поділити на 3, та  помножити на 4)";
		cout << endl;
		y = ((x * 5) / 3) * 4;
		cout << "Що у вас вийшло? : ";
		cin >> z;
		cout << endl;
		cout << "Правильна вілповідь: " << y << ", якщо ваша відповідь інша, то ваша відповідь неправильна."<<endl;



		system("pause");
}

