#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int count; cin >> count; // количество данных
	string* name = new string[count];
	string* dna = new string[count];
	for (int i = 0; i < count; i++) {
		cin >> name[i];
		cin >> dna[i];
	}
	int bc = 0;
	long double* gc = new long double[count];
	char check;
	double g = 0, c = 0;
	int l;
	for (int i = 0; i < count; i++) {
		l = dna[i].length();
		g = 0; c = 0;
		for (int j = 0; j < l; j++)
		{
			check = dna[i].at(j);
			if (check == 'G') g++;
			if (check == 'C') c++;
		}
		gc[i] = ((g + c) / l) * 100;
		cout << i << "\n" << name[i] << endl << setprecision(20) << gc[i] << endl << endl;
	}

}

