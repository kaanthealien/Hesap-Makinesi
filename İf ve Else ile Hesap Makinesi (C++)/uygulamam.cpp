#include <iostream>
using namespace std;

int main() {

	int islem,a,b,sonuc;
	cout << "1.Toplama: \n";
	cout << "2.Cikarma: \n";
	cout << "3.Carpma: \n";
	cout << "4.Bolme: \n";

	cout << "Islem giriniz: ";
	cin >>islem;

	if (islem == 1)
	{
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a + b;
		cout << "Isleminizin Sonucu: " << sonuc;

	}
	else if (islem == 2)
	{
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a - b;
		cout << "Isleminizin Sonucu: " << sonuc;
	}
	else if (islem == 3)
	{
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a * b;
		cout << "Isleminizin Sonucu: " << sonuc;
	}
	else if (islem == 4)
	{
		cout << "Lutfen ilk sayiyi giriniz: ";
		cin >> a;
		cout << "Lutfen ikinci sayiyi giriniz: ";
		cin >> b;
		sonuc = a / b;
		cout << "Isleminizin Sonucu: " << sonuc;
	}
	return 0;
}