#include <iostream>
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
#include <vector>
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
#include "include/person.hpp"
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
#include "include/mahasiswa.hpp"
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
#include "include/dosen.hpp"
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
#include "include/tendik.hpp"
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
using namespace std;
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
int main()
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
{
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	vector<mahasiswa> recMhs;
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	vector<dosen> recDosen;
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	vector<tendik> recTendik;
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	int menu_terpilih;
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	while(1) {
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "Selamat datang di Universitas X" << endl << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "Data statistik:" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "Menu: " << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  1. Tambah Mahasiswa" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  2. Tambah Dosen" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  5. Tampilkan semua Dosen" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cout << "-> Silahkan memilih salah satu: ";
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		cin >> menu_terpilih;
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		switch (menu_terpilih) {
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
			case 1:
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				{
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					string id, nama, nrp, departemen;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					int dd, mm, yy, tahunmasuk;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan id: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> id;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan nama: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> nama;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan tgl lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> dd;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan bln lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> mm;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan thn lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> yy;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan nrp: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> nrp;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan departemen: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> departemen;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan tahun masuk: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> tahunmasuk;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					recMhs.push_back(mhs);
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				}
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				break;
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
			case 2:
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				{
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					string id, nama, npp, departemen;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					int dd, mm, yy, pendidikan;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan id: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> id;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan nama: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> nama;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan tgl lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> dd;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan bln lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> mm;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan thn lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> yy;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan npp: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> npp;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan departemen: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> departemen;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan pendidikan: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> pendidikan;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					recDosen.push_back(dsn);
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				}
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				break;
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
			case 3:
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				{
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					string id, nama, npp, unit;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					int dd, mm, yy;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan id: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> id;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan nama: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> nama;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan tgl lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> dd;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan bln lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> mm;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan thn lahir: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> yy;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan npp: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> npp;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cout << "Masukkan unit: ";
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					cin >> unit;
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					recTendik.push_back(tdk);
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				}
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				break;
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
			case 4:
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				{
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					for (int i = 0; i < recMhs.size(); i++)
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					{
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Nama: " << recMhs[i].getNama() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Tgl lahir: " << recMhs[i].getTglLahir();
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "/" << recMhs[i].getBulanLahir();
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "/" << recMhs[i].getTahunLahir() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "NRP: " << recMhs[i].getNRP() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Departemen: " << recMhs[i].getDepartemen() << endl << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					}
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				}
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				break;
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
			case 5:
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				{
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					for (int i = 0; i < recDosen.size(); i++)
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					{
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Nama: " << recDosen[i].getNama() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Tgl lahir: " << recDosen[i].getTglLahir();
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "/" << recDosen[i].getBulanLahir();
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "/" << recDosen[i].getTahunLahir() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "NRP: " << recDosen[i].getNPP() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Pendidikan: S" << recDosen[i].getPendidikan() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Departemen: " << recDosen[i].getDepartemen() << endl << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					}
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				}
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				break;
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
			case 6:
			// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				{
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					for (int i = 0; i < recTendik.size(); i++)
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					{
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Nama: " << recTendik[i].getNama() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Tgl lahir: " << recTendik[i].getTglLahir();
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "/" << recTendik[i].getBulanLahir();
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "/" << recTendik[i].getTahunLahir() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "NRP: " << recTendik[i].getNPP() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
						cout << "Unit: " << recTendik[i].getUnit() << endl;
						// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
					}
					// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				}
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
				break;
				// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
		}
		// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	}
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE

// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
	return 0;
	// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE
}
// JANGAN DI COPAS PLEASE :""") PELAJARI LAGI YA EHEHEHE