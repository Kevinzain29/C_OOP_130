
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
	  void input() {
		  cout << "masukan NIM : ";
		  cin >> nim;
		  cout << "masukan nama : ";
		  cin >> nama;
	  }
};
class Matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "\nmasukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namaM;
		cout << "jumlah sks : ";
		cin >> sks;
	}

	void tampil() {
		cout << "\nkode matakuliah : " << kode;
		cout << "\nama matakuliah : " << namaM;
		cout << "\nsks : " << sks;
	}

};

int main() {
	Mahasiswa mhs1;
	Matakuliah mk;

	mhs1.input();
	mhs1.cetak();

	mk.input();
	mk.tampil();

}










