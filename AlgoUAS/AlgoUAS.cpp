#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
int nim;
string nm;
int th;

void tambahMahasiswa()
{	while (true)
	{
		cout << "NIM			: ";
		cin >> NIM[MAX_MAHASISWA];
		cout << "\nNama			: ";
		cin >> nama[MAX_MAHASISWA];
		cout << "\nTahun Masuk	: ";
		cin >> tahunMasuk[MAX_MAHASISWA];

		if (NIM[MAX_MAHASISWA] == 100)
			break;
		else
			cout << "\n===== MAHASISWA TELAH LENGKAP =======.\n\n";
	}
}


void tampilkanSemuaMahasiswa()
//isi disini
{
	cout << "==== DAFTAR SEMUA MAHASISWA =====" << endl;
	cout << "\nNama			:" << nama << endl;
	cout << "\nNIM			:" << NIM << endl;
	cout << "\nTahun Masuk	:" << tahunMasuk << endl;
}

void algorithmacariMahasiswaByNIM();
//isi disini


void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			tambahMahasiswa();
			break;
		case 2:
			//isi disini
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			//isi disini
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			//isi disini
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}