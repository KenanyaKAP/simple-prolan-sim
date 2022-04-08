#include <iostream>
// COPAS ITU HARAM
#include <vector>
// COPAS ITU HARAM

// COPAS ITU HARAM
#include "include/person.hpp"
// COPAS ITU HARAM
#include "include/mahasiswa.hpp"
// COPAS ITU HARAM
#include "include/dosen.hpp"
// COPAS ITU HARAM
#include "include/tendik.hpp"
// COPAS ITU HARAM

// COPAS ITU HARAM
using namespace std;
// COPAS ITU HARAM

// COPAS ITU HARAM
int main()
// COPAS ITU HARAM
{
	// COPAS ITU HARAM
	vector<mahasiswa> recMhs;
	// COPAS ITU HARAM
	vector<dosen> recDosen;
	// COPAS ITU HARAM
	vector<tendik> recTendik;
	// COPAS ITU HARAM

// COPAS ITU HARAM
	int menu_terpilih;
	// COPAS ITU HARAM

// COPAS ITU HARAM
	while(1) {
		// COPAS ITU HARAM
		cout << "Selamat datang di Universitas X" << endl << endl;
		// COPAS ITU HARAM
		cout << "Data statistik:" << endl;
		// COPAS ITU HARAM
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		// COPAS ITU HARAM
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		// COPAS ITU HARAM
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		// COPAS ITU HARAM
		cout << endl;
		// COPAS ITU HARAM
		cout << "Menu: " << endl;
		// COPAS ITU HARAM
		cout << "  1. Tambah Mahasiswa" << endl;
		// COPAS ITU HARAM
		cout << "  2. Tambah Dosen" << endl;
		// COPAS ITU HARAM
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		// COPAS ITU HARAM
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		// COPAS ITU HARAM
		cout << "  5. Tampilkan semua Dosen" << endl;
		// COPAS ITU HARAM
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		// COPAS ITU HARAM
		cout << "-> Silahkan memilih salah satu: ";
		// COPAS ITU HARAM
		cin >> menu_terpilih;
		// COPAS ITU HARAM

// COPAS ITU HARAM
		switch (menu_terpilih) {
			// COPAS ITU HARAM
			case 1:
			// COPAS ITU HARAM
				{
					// COPAS ITU HARAM
					string id, nama, nrp, departemen;
					// COPAS ITU HARAM
					int dd, mm, yy, tahunmasuk;
					// COPAS ITU HARAM
					cout << "Masukkan id: ";
					// COPAS ITU HARAM
					cin >> id;
					// COPAS ITU HARAM
					cout << "Masukkan nama: ";
					// COPAS ITU HARAM
					cin >> nama;
					// COPAS ITU HARAM
					cout << "Masukkan tgl lahir: ";
					// COPAS ITU HARAM
					cin >> dd;
					// COPAS ITU HARAM
					cout << "Masukkan bln lahir: ";
					// COPAS ITU HARAM
					cin >> mm;
					// COPAS ITU HARAM
					cout << "Masukkan thn lahir: ";
					// COPAS ITU HARAM
					cin >> yy;
					// COPAS ITU HARAM
					cout << "Masukkan nrp: ";
					// COPAS ITU HARAM
					cin >> nrp;
					// COPAS ITU HARAM
					cout << "Masukkan departemen: ";
					// COPAS ITU HARAM
					cin >> departemen;
					// COPAS ITU HARAM
					cout << "Masukkan tahun masuk: ";
					// COPAS ITU HARAM
					cin >> tahunmasuk;
					// COPAS ITU HARAM

// COPAS ITU HARAM
					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					// COPAS ITU HARAM
					recMhs.push_back(mhs);
					// COPAS ITU HARAM
				}
				// COPAS ITU HARAM
				break;
				// COPAS ITU HARAM
			case 2:
			// COPAS ITU HARAM
				{
					// COPAS ITU HARAM
					string id, nama, npp, departemen;
					// COPAS ITU HARAM
					int dd, mm, yy, pendidikan;
					// COPAS ITU HARAM
					cout << "Masukkan id: ";
					// COPAS ITU HARAM
					cin >> id;
					// COPAS ITU HARAM
					cout << "Masukkan nama: ";
					// COPAS ITU HARAM
					cin >> nama;
					// COPAS ITU HARAM
					cout << "Masukkan tgl lahir: ";
					// COPAS ITU HARAM
					cin >> dd;
					// COPAS ITU HARAM
					cout << "Masukkan bln lahir: ";
					// COPAS ITU HARAM
					cin >> mm;
					// COPAS ITU HARAM
					cout << "Masukkan thn lahir: ";
					// COPAS ITU HARAM
					cin >> yy;
					// COPAS ITU HARAM
					cout << "Masukkan npp: ";
					// COPAS ITU HARAM
					cin >> npp;
					// COPAS ITU HARAM
					cout << "Masukkan departemen: ";
					// COPAS ITU HARAM
					cin >> departemen;
					// COPAS ITU HARAM
					cout << "Masukkan pendidikan: ";
					// COPAS ITU HARAM
					cin >> pendidikan;
					// COPAS ITU HARAM

// COPAS ITU HARAM
					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					// COPAS ITU HARAM
					recDosen.push_back(dsn);
					// COPAS ITU HARAM
				}
				// COPAS ITU HARAM
				break;
				// COPAS ITU HARAM
			case 3:
			// COPAS ITU HARAM
				{
					// COPAS ITU HARAM
					string id, nama, npp, unit;
					// COPAS ITU HARAM
					int dd, mm, yy;
					// COPAS ITU HARAM
					cout << "Masukkan id: ";
					// COPAS ITU HARAM
					cin >> id;
					// COPAS ITU HARAM
					cout << "Masukkan nama: ";
					// COPAS ITU HARAM
					cin >> nama;
					// COPAS ITU HARAM
					cout << "Masukkan tgl lahir: ";
					// COPAS ITU HARAM
					cin >> dd;
					// COPAS ITU HARAM
					cout << "Masukkan bln lahir: ";
					// COPAS ITU HARAM
					cin >> mm;
					// COPAS ITU HARAM
					cout << "Masukkan thn lahir: ";
					// COPAS ITU HARAM
					cin >> yy;
					// COPAS ITU HARAM
					cout << "Masukkan npp: ";
					// COPAS ITU HARAM
					cin >> npp;
					// COPAS ITU HARAM
					cout << "Masukkan unit: ";
					// COPAS ITU HARAM
					cin >> unit;
					// COPAS ITU HARAM

// COPAS ITU HARAM
					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					// COPAS ITU HARAM
					recTendik.push_back(tdk);
					// COPAS ITU HARAM
				}
				// COPAS ITU HARAM
				break;
				// COPAS ITU HARAM
			case 4:
			// COPAS ITU HARAM
				{
					// COPAS ITU HARAM
					for (int i = 0; i < recMhs.size(); i++)
					// COPAS ITU HARAM
					{
						// COPAS ITU HARAM
						cout << "Nama: " << recMhs[i].getNama() << endl;
						// COPAS ITU HARAM
						cout << "Tgl lahir: " << recMhs[i].getTglLahir();
						// COPAS ITU HARAM
						cout << "/" << recMhs[i].getBulanLahir();
						// COPAS ITU HARAM
						cout << "/" << recMhs[i].getTahunLahir() << endl;
						// COPAS ITU HARAM
						cout << "NRP: " << recMhs[i].getNRP() << endl;
						// COPAS ITU HARAM
						cout << "Departemen: " << recMhs[i].getDepartemen() << endl << endl;
						// COPAS ITU HARAM
					}
					// COPAS ITU HARAM
				}
				// COPAS ITU HARAM
				break;
				// COPAS ITU HARAM
			case 5:
			// COPAS ITU HARAM
				{
					// COPAS ITU HARAM
					for (int i = 0; i < recDosen.size(); i++)
					// COPAS ITU HARAM
					{
						// COPAS ITU HARAM
						cout << "Nama: " << recDosen[i].getNama() << endl;
						// COPAS ITU HARAM
						cout << "Tgl lahir: " << recDosen[i].getTglLahir();
						// COPAS ITU HARAM
						cout << "/" << recDosen[i].getBulanLahir();
						// COPAS ITU HARAM
						cout << "/" << recDosen[i].getTahunLahir() << endl;
						// COPAS ITU HARAM
						cout << "NRP: " << recDosen[i].getNPP() << endl;
						// COPAS ITU HARAM
						cout << "Pendidikan: S" << recDosen[i].getPendidikan() << endl;
						// COPAS ITU HARAM
						cout << "Departemen: " << recDosen[i].getDepartemen() << endl << endl;
						// COPAS ITU HARAM
					}
					// COPAS ITU HARAM
				}
				// COPAS ITU HARAM
				break;
				// COPAS ITU HARAM
			case 6:
			// COPAS ITU HARAM
				{
					// COPAS ITU HARAM
					for (int i = 0; i < recTendik.size(); i++)
					// COPAS ITU HARAM
					{
						// COPAS ITU HARAM
						cout << "Nama: " << recTendik[i].getNama() << endl;
						// COPAS ITU HARAM
						cout << "Tgl lahir: " << recTendik[i].getTglLahir();
						// COPAS ITU HARAM
						cout << "/" << recTendik[i].getBulanLahir();
						// COPAS ITU HARAM
						cout << "/" << recTendik[i].getTahunLahir() << endl;
						// COPAS ITU HARAM
						cout << "NRP: " << recTendik[i].getNPP() << endl;
						// COPAS ITU HARAM
						cout << "Unit: " << recTendik[i].getUnit() << endl;
						// COPAS ITU HARAM
					}
					// COPAS ITU HARAM
				}
				// COPAS ITU HARAM
				break;
				// COPAS ITU HARAM
		}
		// COPAS ITU HARAM
	}
	// COPAS ITU HARAM

// COPAS ITU HARAM
	return 0;
	// COPAS ITU HARAM
}
// COPAS ITU HARAM