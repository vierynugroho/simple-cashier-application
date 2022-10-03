/**

    KELOMPOK 2 UAS PEMDAS
Anggota Kelompok:
- Nurul Musthofa Thohir  	(21104410095)
- Batara Mahardika Aryoko 	(21104410063)
- Hafid Nur Firmansyah 		(21104410062)
- Viery Nugroho 			(21104410049)

Observasi: Febri Sablon
Alamat: Semanding, Desa Banggle, Kec. Kanigoro, Kab. Blitar
**/
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

// function
void jam(){			
		system("CLS");
		
	cout << " ";
	// perulangan
	for (int garis=0; garis <=50; garis++){
		cout << "-";
	}
	
 	cout << endl << "               ";
   	time_t now = time(0);
   	char* dt = ctime(&now);
	  
   	cout << dt;
   	cout << " ";
   for (int garis=0; garis <=50; garis++){
		cout << "-";
	}
}


void febriSablon(){
	char nama[50], menu[50], size[20], ulangTransaksi, ulangPesan, ulangSize;
	int jumlah,ukuran, pesanan, jumlahOrder, harga, diskon;


	cout << endl;
	cout << " |           (Jangan Menggunakan SPASI!)           | " << endl; 
	cout << " --------------------------------------------------- " << endl;
		cout << " Masukkan Nama Anda : " ; cin>>nama; 
	cout << " =================================================== " << endl; 
	cout << " |                 FEBRI SABLON                    | " << endl;
	cout << " =================================================== " << endl;
	cout << " |                    SEDIA:                       | " << endl;
	cout << " |                                                 | " << endl;
	cout << " | 1. Kaos Polos Pendek           Rp 40.000        | " << endl; 
	cout << " | 2. Kaos Polos Panjang          Rp 45.000        | " << endl; 
	cout << " | 3. Kaos Polos Sablon Pendek    Rp 65.000        | " << endl; 
	cout << " | 4. Kaos Polos Sablon Panjang   Rp 70.000        | " << endl; 
	cout << " | ----------------------------------------------- | " << endl;
	cout << " |                     SIZE:                       | " << endl;
	cout << " | 1. S                                            | " << endl;
	cout << " | 2. M                                            | " << endl;
	cout << " | 3. L                                            | " << endl;
	cout << " | 4. XL                                           | " << endl;
	cout << " | 5. XXL (Khusus Size Ini Harga + Rp 10.000)      | " << endl;
	cout << " =================================================== " << endl;
	cout << endl;
		
	cout << " --------------------------------------------------- " << endl;
	cout << " |         (Masukkan Pesanan Sesuai Nomor)         | " << endl; 
	cout << " ---------------------------------------------------" << endl;
	
	ulangPesan:
	cout<<" Silahkan Pilih Pesanan anda : "; cin >> pesanan;
		
		//Percabangan / Kondisi
		switch(pesanan){
			case 1:
				strcpy(menu,"Kaos Polos Pendek");
				harga = 40000;
				break;
			case 2:
				strcpy(menu,"Kaos Polos Panjang");
				harga = 45000;
				break;
			case 3:
				strcpy(menu,"Kaos Polos Sablon Pendek");
				harga = 65000;
				break;
			case 4:
				strcpy(menu,"Kaos Polos Sablon Panjang");
				harga = 70000;
				break;
			default:
				cout << "Pilihan Pesanan yang anda pilih tidak tersedia..." << endl;
				goto ulangPesan;
		}
		
		cout<< "\t Anda memilih: " << menu << endl << endl;
	
	cout << " --------------------------------------------------- " << endl;
	cout << " |         (Masukkan Ukuran Sesuai Nomor)          | " << endl; 
	cout << " --------------------------------------------------- " << endl;
	
	ulangSize:
	cout<<" Silahkan Pilih Ukuran anda : "; cin >> ukuran;
	
		switch(ukuran){
			case 1:
				strcpy(size,"S");
				break;
			case 2:
				strcpy(size,"M");
				break;
			case 3:
				strcpy(size,"L");
				break;
			case 4:
				strcpy(size,"XL");
				break;
			case 5:
				strcpy(size,"XXL");
						if (ukuran==5){
						harga+=10000;
						}
				break;
				
			default:
				cout << " Pilihan Ukuran yang anda pilih tidak tersedia..." << endl;
				goto ulangSize;
			}
		
		if (ukuran==5){
			cout << " (Khusus Size Ini Harga + Rp 10.000) " << endl;
		}
			
	cout<< " \t Anda memilih: " << size << endl << endl;

	cout << " --------------------------------------------------- " << endl;
	cout << " |    (Masukkan Jumlah Pesanan Dengan Angka)       | " << endl; 
	cout << " |(Pembelian >= 50 pcs Mendapatkan Diskon Rp 5000) | " << endl; 
	cout << " --------------------------------------------------- " << endl;
	cout << " Masukkan Jumlah Pesanan Anda: "; cin >> jumlahOrder;
	cout << endl;
	cout << " ----------------------------------------------- " << endl;

	
		if (jumlahOrder>=50){
			diskon=5000;
		}
			
	jumlah = harga*jumlahOrder;
	
		if (jumlahOrder >=50){
			jumlah=harga*jumlahOrder-diskon;	
		}

			system("CLS");
			
		cout << "-------------------------------------------------------" << endl;
		cout << "|  	             FEBRI SABLON                      |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "\t Nama Pemesan         : "	<< nama <<endl;
		cout << "\t Jenis Pesanan        : "	<< menu <<endl;
		cout << "\t Ukuran Pesanan       : "    << size << endl;
		cout << "\t Jumlah Pesanan       : "	<< jumlahOrder << " pcs" << endl;
		
		if (jumlahOrder>=50){
			cout << "\t Rincian Belanja      : "    << "Rp " << harga << " * " << jumlahOrder << " - Rp " << diskon << endl;
		}
		else {
			cout << "\t Rincian Belanja      : "    << "Rp " << harga << " * " << jumlahOrder << endl; 
		}
		
		cout << "\t Total Pembayaran     : "	<< "Rp " << jumlah << endl;
		cout << "-------------------------------------------------------" << endl;
	}
	
	
	int main(){
	char ulangTransaksi;
		
		do{
	jam();
	febriSablon();
	
	cout << " Ingin Melakukan Transaksi Lain? (y/n): "; cin >> ulangTransaksi;	
		}
		
			while (ulangTransaksi=='y'||ulangTransaksi=='Y');
			
			system("CLS");
			cout << " ----- PESANAN ANDA AKAN SEGERA DIPROSES ----- " <<endl;
			cout << " ---------------- TERIMAKASIH ---------------- " << endl;
		
		return 0;}
