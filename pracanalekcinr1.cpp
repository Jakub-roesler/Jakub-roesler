#include<iostream>
#include<string>
using namespace std;


void cezar(string tekst)
{
	int x;
	cout << "podaj wspolczynnik przesuniecia" << endl;
	cin >> x;
	for (int i = 0;i <= tekst.length();i++)
	{
		if (tekst[i] >= 97 && tekst[i] <= 122 - x) tekst[i] = int(tekst[i]) + x;
		else if (tekst[i] >= 123 - x && tekst[i] <= 122) tekst[i] = int(tekst[i]) - 26 + x;
	}
}

void przestawianie(char* tekst)
{
	int dlugosc = strlen(tekst); 

	for (int i = 0; i < dlugosc - 1; i += 2) 
	{
		char pom = tekst[i];
		tekst[i] = tekst[i + 1]; 
		tekst[i + 1] = pom;
	}
}

int main()
{
	int y;

	cout << "Podaj metode 1. Szyfr podstawieniowy(szyfr cezara) 2. Szyfr przestawieniowy 3. Szyfr podstawieniowy i szyfr przestawieniowy. 4. Odszyfruj teskt" << endl;
	cin >> y;


	if (y == 1)
	{
		cout << "podaj tekst do zaszyfrowania" << endl;
		string tekst;
		getline(cin, tekst);
		cezar(tekst);
		cout << tekst << endl;
	}
	else
	{
		if (y == 2) 
		{
			cout << "podaj tekst do zaszyfrowania" << endl;
			char tekst[100];
			cin.getline(tekst, 100);
			przestawianie(tekst);
			cout << tekst << endl;
		}
	}
	else 
	{
		if (y == 3) 
		{
			cout << "podaj tekst do zaszyfrowania" << endl;
			char tekst[100];
			cin.getline(tekst, 100);
			cezar(tekst);
			przestawianie(tekst);
			cout << tekst << endl;
		}
	}
	else
	{
	if (y == 4)
	{
		string tekst;
		cout << "podaj tekst do zaszyfrowania" << endl;
		getline(cin, tekst);
		cout << tekst << endl;
	}
	}

	return 0;
}