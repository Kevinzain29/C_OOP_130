
#include <iostream>
using namespace std;

class Mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "\nnama = " << nama;
	}
};
class Matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namaM;
		cout << "jumlah sks : ";
		cin >> sks;
	}

	void tampil() {
		cout << "kode matakuliah : " << kode;
		cout << "nama matakuliah : " << namaM;
		cout << "sks : " << sks;
	}

};

int main() {
	Mahasiswa mhs1;
	Matakuliah mk;

	cout << "masukan NIM : ";
	cin >> mhs1.nim;

}










