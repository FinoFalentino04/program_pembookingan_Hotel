#include <iostream>

using namespace std;

/*
1.Daftar Hotel(Nama Hotel,Harga Hotel)
2.Nama Pembooking
3.Jumlah orang
4.tanggal booking
5.waktu penginapan
*/

// Fungsi tanpa nilai balik, tanpa argumen untuk mencetak kalimat sambutan
void judul(){
		cout << "===================================================\n";
		cout << "=========== Selamat Datang di MY HOTEL ============\n";
		cout << "===================================================\n";
	}
	
// Fungsi tanpa nilai balik, tanpa argumen untuk menampilkan daftar hotel yang tersedia
void tampilkanHotel(string namaHotel[], float hargaHotel[], int jumlahHotel) {
	// Perulangan for untuk mengulangi daftar hotel agar supaya tercetak secara berurutan
    for (int i = 0; i < jumlahHotel; i++) {
        cout << i + 1 << ". " << namaHotel[i] << " - Rp." << hargaHotel[i] << endl;
    }
}

int main() {
	// Perintah untuk menampilkan warna sesuai dengan angka yang ditentukan
	system("color 2");
	// Array statis dengan tipe data string untuk menampung beberapa kalimat yang sudah ditentukan
	string selamatDatang[6] = {"\t Selamat"," datang"," didalam"," program"," bookingan"," hotel\n"};
	// Perulangan for untuk menentukan berapa lama kalimat array dicetak
	for(int b=0; b<=45; b++){
		cout << endl;
		// Percabangan if digunakan untuk mencetak kalimat didalam array agar tidak tercetak secara bersamaan
		if(b>=0) cout << selamatDatang[0];
		if(b>=7) cout << selamatDatang[1];
		if(b>=14) cout << selamatDatang[2];
		if(b>=21) cout << selamatDatang[3];
		if(b>=18) cout << selamatDatang[4];
		if(b>=35) cout << selamatDatang[5];
		// perintah untuk menghapus kalimat array pertama dan seterusnya yang sudah dicetak
		system("cls");
	}
    // Inisialisasi daftar hotel yang tersedia yang ditampung dalam array statis dengan tipe data string
    string namaHotel[] = {"Hotel Bali", "Hotel Mandalika", "Hotel Raja Ampat"};
    // Daftar harga hotel yang ditampung dalam array statis dengan tipe data float
    float hargaHotel[] = {100000, 75000, 120000};
    // Tipe data integer yang sudah menampung bilangan
    int jumlahHotel = 3, jumlahOrang = 0;
    // Tipe data string untuk menampung sebuah kalimat
    string namaPemesan;
    // Tipe data integer untuk sebuah bilangan
    int tanggalPesan, waktuMenginap;
    int  hotelDipilih;
    // Tipe data char untuk menampung sebuah huruf / kata
    char ulangiProgram;

    // Perulangan untuk mengulangi program
    do {
    	system("cls");
   		// Pemanggilan fungsi judul yang sudah dideklarasikan
		judul();
    	cout << endl << endl;
		cout << "========== Pilih Hotel Yang Ingin Dicari ==========\n";
		cout << endl;
		
		cout << "berikut merupakan daftar hotel yang tersedia : " << endl;
		// Pemanggilan fungsi tampilkanHotel yang sudah dideklarasikan
		tampilkanHotel(namaHotel, hargaHotel, jumlahHotel);
		
        cout << "Tentukan Pilihan nomor hotel yang ingin Anda pesan: ";
        // Perintah supaya users bisa melakukan input
		cin >> hotelDipilih;
		// Operator -= untuk mengurangi bilangan yang ditampung variabel
        hotelDipilih -= 1;
        system("cls");

        /* Percabangan nested if untuk mengecek apakah pilihan hotel valid atau tidak dari input users
         Jika nilai variabel yang diinput lebih besar dari nilai 0 maka akan melanjutkan perogram berikutnya, 
		 namun jika tidak maka akan melanjutkan ke percabangan else
		 */
        if (hotelDipilih >= 0) {
        	/* Lanjutan percabangan sebelumnya jika nilai variabel lebih kecil dari variabel ini yang mengandung nilai 3
        	 maka akan melanjutkan ke program selanjutnya jika tidak maka akan pergi ke percabangan else
        	*/
        	if (hotelDipilih < jumlahHotel) {
        		// Label yang menjadi tujuan loncatan dari perintah goto yang ditentukan
        		menu :
        			system("cls");
        			cout << "Anda telah memilih " << namaHotel[hotelDipilih] << " dengan harga Rp." << hargaHotel[hotelDipilih] << " perhari" << endl;
            		cout << "Masukkan nama pemesan: ";
					cin >> namaPemesan;
					// Tujuan perintah dari lompatan goto i
					i:
						system("cls");
            			cout << "Masukkan jumlah orang: ";
						cin >> jumlahOrang;
						/* Nested if jika nilai input variabel tidak lebih atau kurang kedua kondisi 
						 maka akan melanjutkan ke program selanjutnya namun jika sebaliknya maka akan dilanjutkan ke percabangan else
						*/
						if (jumlahOrang >= 0) {
							if (jumlahOrang < 100) {
								// Perintah untuk melakukan loncatan program menuju label a
								goto a;
								/* Jika nilai input variabel bertentangan dengan if maka akan menjalankan program ini
								 untuk menjalankan perintah atau program yang ditentukan
								*/
							} else {
								// Akan menjalankan lompatan kembali ke label menu atau kembali lagi keatas
								goto i;
							}
						} else {
							goto i;
						}
					// tujuan lompatan perintah goto a
					a:	
						system("cls");
            			cout << "Masukkan tanggal pemesanan (dd.mm.yyyy): ";
						cin >> tanggalPesan;
						// Perjelasanya sama seperti diatas
						if (tanggalPesan >= 112000) {
							if (tanggalPesan < 12122023) {
								goto b;
							} else {
								goto a;
							}
						} else {
							goto a;
						}
					// tujuan lompatan perintah goto b
					b:
						// Perjelasanya sama seperti diatas
						system("cls");
            			cout << "Masukkan waktu menginap (dd): ";
						cin >> waktuMenginap;
						if (waktuMenginap >= 0) {
							if (waktuMenginap < 30) {
								goto c;
							} else {
								cout << "input tidak valid" << endl << endl;
								goto b;
							}
						} else {
							cout << "input tidak valid" << endl << endl;
							goto b;
						}
					// tujuan lompatan perintah goto c
					c:
						system("cls");
						// Disini Akan mencetak semua nilai yang telah diinput users
						cout << "Terima kasih telah melakukan pemesanan di " << namaHotel[hotelDipilih] << "." << endl;
						cout << endl;
						cout << "Detail pemesanan: " << endl;
						cout << "Nama Pemesan\t\t: " << namaPemesan << endl;
						cout << "Jumlah Orang\t\t: " << jumlahOrang << " orang" << endl;
						cout << "Tanggal Pemesanan\t: " << tanggalPesan << endl;
						cout << "Waktu Menginap\t\t: " << waktuMenginap << " hari" << endl;
						cout << "Total harga\t\t: Rp." << waktuMenginap * hargaHotel[hotelDipilih] << endl;
			/* Jika nilai input variabel diatas bertentangan atau bernilai false
			 dengan if diatas maka akan menjalankan program ini
			 untuk menjalankan perintah atau mencetak program yang ditentukan
			*/			
			} else {
				system("cls");
				cout << "Maaf, pilihan hotel tidak valid. Silakan pilih nomor hotel yang tersedia." << endl;
			}
		// Perjelasanya sama seperti diatas
		} else {
			system("cls");
			cout << "Maaf, pilihan hotel tidak valid. Silakan pilih nomor hotel yang tersedia." << endl;
		}
		cout << endl;
		cout << "Apakah Anda ingin melakukan pemesanan lagi atau ingin mengulang pesanan? (y/t/u) ";
		cin >> ulangiProgram;
		/* Jika yang input users sama dengan huruf u maka akan menjalankan program goto 
		 untuk melakukan lompatan keatas atau kembali ke menu pilihan
		*/
		if(ulangiProgram == 'u') goto menu;
	// Program akan mengulang jika yang tadi diinput users adalah sama dengan huruf y maka kembali keatas atau ke menu awal
	} while (ulangiProgram == 'y');
	system("cls");
	cout << endl;
	// Perulangan akan berhenti jika users tidak ingin melakukan pemesanan lagi dan melakukan input selain huruf y / u
	cout << "\"terimakasih telah melakukan pesanan\"";
// Perintah ini akan menghentikan program
return 0;
}







/*	struct {
		string nama;
		unsigned int NIM;
		string MATKUL;
	}MHS;	
*/



/*	MHS.nama = "Fino Falentino";
	MHS.NIM = 2230511095;
	MHS.MATKUL = "Tugas UAS Dasprog";
	cout << MHS.nama << endl;
	cout << MHS.NIM  << endl;
	cout << MHS.MATKUL << endl;
*/
