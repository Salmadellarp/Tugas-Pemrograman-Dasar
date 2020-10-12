/* Membuat Program Billing Warnet */
#include <iostream>
using namespace std;
int main ()
{
	int J1,J2;
	int M1,M2;
	int D1,D2;
	int selisih_jam,selisih_menit,selisih_detik;
	int selisih_jd,selisih_md,selisih_dd;
	int total_detik;
	int waktumulai;
	int waktuselesai;
	int tarif = 5000;
	int detik = 3600;
	int jumlah_tarif;
	
	
	cout << "---------------Program Billing Warnet---------------\n";
	cout << endl;
	cout << "----------------------------------------------------\n";
	
	cout << endl;
	cout << "---------------Waktu Mulai Penggunaan---------------\n";
	cout << endl;
	cout << "Masukkan Jam Mulai: ";
	cin >> J1;
	cout << "Masukkan Menit Mulai: ";
	cin >> M1;
	cout << "Masukkan Detik Mulai: ";
	cin >> D1;
	cout << endl;
	cout << endl;
	
	cout << "---------------Waktu Selesai Penggunaan-------------\n";
	cout << endl;
	cout << "Masukkan Jam Selesai: ";
	cin >> J2;
	cout << "Masukkan Menit Selesai: ";
	cin >> M2;
	cout << "Masukkan Detik Selesai: ";
	cin >> D2;
	cout << endl;
	cout << endl;
	cout << "Tarif 1 jam = 5000";
	cout << endl;
	
	cout << "---------------Lama Penggunaan---------------\n";
	cout << endl;
	cout << "waktuselesai-waktumulai\n";
	cout << endl;
	
	selisih_jam = J2-J1;
	selisih_menit = M2-M1;
	selisih_detik = D2-D1;
	cout << selisih_jam << ":" << selisih_menit << ":" << selisih_detik << "\n";
	cout << endl;
	selisih_jd = selisih_jam*3600;
	selisih_md = selisih_menit*60;
	selisih_dd = selisih_detik;
	total_detik = selisih_jd + selisih_md + selisih_dd;
	cout << endl;
	
	cout << "---------------Tarif yang Dibayar---------------\n";
	cout << endl;
	cout << "Rp."<<(total_detik*tarif/3600);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "---------------Terima Kasih Atas Kunjungannya---------------";
	cout << "------------------------------------------------------------";
	cout << endl;
	
	return 0;	
}
