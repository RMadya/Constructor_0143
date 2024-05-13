#include <iostream>
using namespace std;

class mahasiswa {
private:
	static long long int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama) 
	{
		nama = pnama;
		setID(); 
	}
};

long long int mahasiswa::nim = 20230140143;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "NAMA = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Mhd Bagas P. Rinaldi");
	mahasiswa mhs2("Jibril");
	mahasiswa::setNim(11);
	mahasiswa mhs3("Ridwan");
	mahasiswa mhs4("Mikail");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
	return 0;
}