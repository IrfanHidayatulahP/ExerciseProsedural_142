#include <iostream>
using namespace std;

int arr[20];
int n;
string nama;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double rerata) {
	if (rerata >= 70)
		return "Diterima";
	else
		return "Tidak Diterima";
}

string status2(double rerata, double nilM) {
	if (rerata >= 70 || nilM >= 80)
		return "Diterima";
	else
		return "Tidak Diterima";
}
 
void input() {
	int temp;
	int n;
	double nilM, nilB;
	while (true) {
		cout << "Masukkan Jumlah Mahasiswa : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "\nJumlah Mahasiswa yang anda masukkan maksimal 20 element. \n";
		}
	}
		cout << "Masukkan Nama Mahasiswa : ";
		cin >> nama;
		cout << "Masukkan nilai Matematika : ";
		cin >> nilM;
		cout << "Masukkan nilai Bahasa Inggris : ";
		cin >> nilB;
		cout << "Status Kelulusan : " << status(rerata(nilM, nilB));
		cout << "\nStatus Kelulusan : " << status2(rerata(nilM, nilB), nilM) << "\n";

		for (int i = n; i < n; i++) {
			cout << arr[n];
		}
}

void Mahasiswa() {
	cout << "\nMahasiswa yang diterima : " << arr[n] << endl;
}

int main() {
	input();
	Mahasiswa();
}


