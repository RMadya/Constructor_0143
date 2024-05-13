#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;

public:
	Mahasiswa() {
		nim = 0;
		nama = "Mhd Rinaldi";
	};
	Mahasiswa(int iNim) {
		nim = iNim;
	}
	Mahasiswa(string iNama) {
		nama = iNama;
	}
	Mahasiswa(int iNim, string iNama) {
		nim = iNim;
		nama = iNama;
	}

	void cetak() {
		cout << endl << "Nim = " << nim << endl;
		cout << "Nama = " << nama << endl;
	}
};

int main() {
	Mahasiswa mhs1;
	Mahasiswa mhs2(20);
	Mahasiswa mhs3("MhdRinaldi");
	Mahasiswa mhs4(20, "Jibril");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}