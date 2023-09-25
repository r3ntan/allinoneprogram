5#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

// loading screen
void display_loadingScreen() {
    int delay = 100;
    int animationLength = 20;

    cout << "Now Loading";

    for(int i = 0; i < animationLength; i++) {
        cout << ".";
        Sleep(delay);
        cout << "\b \b";
        Sleep(delay);
    }

    cout << endl;

}

// Program data nilai
void data_nilai() {
    boolean pilihan;
    int n;
    string nama[10], status[10];
    int nilai[10];
    
    cout << "##         Program C++ Data Nilai         ##" << endl;
	cout << "============================================" << endl;
	cout << endl;

    cout << "Masukkan jumlah data yang ingin diinput=  ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << endl;

        cout << "Data ke- "<<i+1<<endl;
        cout << "Masukkan nama: ";
        cin >> nama[i];
        cout << "Masukkan nilai: ";
        cin >> nilai[i];

        if(nilai[i] <= 50 ) {
            status[i]="Tidak lulus";
        } else {
            status[i]="Lulus";
        }
    }

    cout<<endl;
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"No    Nama           Nilai           Status         "<<endl;
	cout<<"-------------------------------------------"<<endl;

	for (int i=0; i<n;i++) {
	cout<<i+1<<"   "<<nama[i]<<"            "<<nilai[i]<<"          "<<status[i]<<endl;
	cout<<"-------------------------------------------"<<endl;
	}


}

// Program pyramid dengan array 2D
void pyramid_array() {
	
	int tinggi,i,j,a,b;
	int piramida[a][b];
	char urut;
	
	cout << "##    Program C++ Pyramid dengan Array    ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	printf("Masukkan tinggi piramid : ");scanf("%i",&tinggi);
	printf("Ascending(A) atau Descending(D) (A/D): "); fflush stdin; scanf("%c",&urut);
	
    switch(urut){
	    	case 'A' :
				for (int i = 0; i <= tinggi; i++) {
			        for (int j = 1; j < i+1; j++) {
			            piramida[a][b]=j;
						printf("%i",piramida[a][b]);
			        }
			        printf("\n");
			    }
			break;
			case 'D' :
				for (int i = tinggi; i >= 1; i--) {
			        for (int j = i; j >= 1; j--) {
			            piramida[a][b]=j;
						printf("%i",piramida[a][b]);
			        }
			        printf("\n");
			    }
}
}

// Program fibonaci
void fibonaci() {
	
	//variabel
	int n, t1 = 0, t2 = 1, angka_berikutnya = 0;
	
	cout << "##      Program C++ Bilangan Fibonaci     ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	cout << "Jumlah deret fibonacci yang diinginkan: ";
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		//tampilan 2 angka pertama
		if(i == 1){
			cout << t1 << " ";
			continue;
		}
		if( i == 2 ) {
			cout << t2 << " ";
			continue;
		}
		// Hitung untuk angka ke 3 dan seterusnya
		angka_berikutnya = t1 + t2;
		t1 = t2;
		t2 = angka_berikutnya;
		
		cout << angka_berikutnya << " ";
		cout << endl;
	}
}

// Program tarif parkir
void tarif_parkir() {
	
	cout << "##          Program C++ Tarif Parkir      ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	int jenis, lama, harga, tambahan, jam_berikutnya;
	cout << "1. Mobil" << endl;
	cout << "2. Motor" << endl;
	cout << endl;
	cout << "Masukkan jenis kendaraan			: ";
	cin >> jenis;
	// pemilihan dengan switch case
	switch(jenis){
		case 1	: 
			harga=3000;
			tambahan=1000;
			break;
			
		case 2	:
			harga=2000;
			tambahan=500;
			break;
			
		default	: 
			harga = 0;
	}
	
	cout << "Masukkan Lama Parkir (Per Jam)		: ";
	cin >> lama;
	
	// kondisi percabangan
	// kalau lama durasi diatas 2 jam
	if(lama > 2) {
		jam_berikutnya=((lama-2)*tambahan);
	} else {
		jam_berikutnya=0;
	}
	
	// menampilkan hasil
	cout << endl;
	cout << "====================================" << endl;
	cout << "2 Jam Pertama	Rp:"<< harga << endl;
	cout << "Jam Berikutnya	Rp:"<< jam_berikutnya << endl;
	cout << "Total Bayar	Rp:"<< harga+jam_berikutnya << endl;
}

// program penghitung persegi
void penghitung_persegi() {
	int p, l, hasil;
	
	cout << "##     Program C++ Penghitung Persegi     ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	cout << "Masukkan panjang persegi: ";
	cin >> p;
	cout << "Masukkan lebar persegi: ";
	cin >> l;
	
	hasil = p * l;
	cout << endl;
	cout << "Hasilnya adalah " << hasil;
	
}

// program penghitung segitiga
void penghitung_segitiga() {
	
	// variabel
	float a, t, luas;
	
	cout << "##  Program C++ Menghitung Luas Segitiga  ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	cout << "Input alas segitiga: ";
	cin >> a;
	cout << "Input tinggi segitiga: ";
	cin >> t;
	cout << endl;
	
	luas = 0.5 * a * t;
	
	cout << "Luas segitiga = " << luas << endl;
  	
}

// program kalkulator
void kalkulator() {
	
	int bil1, bil2, pil;
	float hasil;
	string operasi;
	
	cout << "##         Program C++ Kalkulator         ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
	switch(pil) {
		case 1: hasil=bil1+bil2;
				operasi="+";
				break;
				
		case 2: hasil=bil1-bil2;
				operasi="-";
				break;
				
		case 3: hasil=bil1*bil2;
				operasi="*";
				break;
				
		case 4: hasil=bil1/bil2;
				operasi="/";
				break;
				
		case 5: hasil=bil1%bil2;
				operasi="%";
				break;
				
		default: cout << "Salah Masukan Operator" << endl;
	}
	
	cout<<"-----------------------------"<<endl;
	cout<<"HASIL DARI "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	
	
}

// program matriks dengan array 2d
void matriks() {
// program matriks array 2 dimensi
	
	// variabel
	int matriks[100][100];
	int jum_baris, jum_kolom, i, j;
	
	cout << "##         Program C++ Matriks            ##" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	cout << "Input jumlah baris matriks: ";
	cin >> jum_baris;
	
	cout << "Input jumlah kolom matriks: ";
	cin >> jum_kolom;
	cout << endl;
	
	// proses input array
	for(i = 0; i < jum_baris; i++) {
		for(j = 0; j < jum_kolom; j++) {
			cout << "Baris " <<i+1<<", Kolom "<<j+1<< " = ";
			cin >> matriks[i][j];
		}
		cout << endl;
	}
	
	cout << "Hasil matriks: " << endl;
	
	// menampilkan array
	for(i = 0; i < jum_baris; i++) {
		for(j = 0; j < jum_kolom; j++) {
			cout << setw(3) << matriks[i][j] << " ";
		}
		cout << endl;
	}
}

// program faktorial
void faktorial() {
	
	cout << "##  Program C++ Hitung Faktorial ##" << endl;
	cout << "===================================" << endl;
	cout << endl;
	
	int angka, hasil, i;
	
	cout << "Input angka: ";
	cin >> angka;
	
	cout << angka <<"! = ";
	
	hasil = 1;
	for(i=1; i<=angka; i++) {
		hasil = hasil * i;
		
		// untuk menampilkan angka
		cout << i;
		if(i != angka) {
			cout << " * ";
		}
		
	}
	cout << " = " << hasil;
	cout << endl;
		
}

// program kasir restoran
void kasir_restoran(){
	
	cout << "##   Program C++ Kasir Restoran  ##" << endl;
	cout << "===================================" << endl;
	cout << endl;
	
	int pilih[100], jumlah[100], sub_total[100], harga[100];
	string menu[100];
	int total_bayar, uang, kembalian;
	int i=0;
	bool selesai=false;
	
	cout<<"##		  DAFTAR MENU MAKANAN & MINUMAN RM BERKAH			##"<<endl;
    cout<<"1. Bakso Biasa				Rp. 12000"<<endl;
    cout<<"2. Bakso Jumbo				Rp. 15000"<<endl;
    cout<<"3. Tea (Es/panas)			Rp. 2000"<<endl;
    cout<<"4. Jeruk (Es/panas)			Rp. 3000"<<endl;
    cout<<"==============================================================="<<endl;
    
    cout << "Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false) {
    	
    	cout << "Pilih Menu		: ";
    	cin >> pilih[i];
    	
    	if(pilih[i]<=4) {
    		if(pilih[i]==0) {
    			selesai = true;
			} else {
				switch(pilih[i]) {
					case 1 : menu[i]="Bakso Biasa		"; harga[i]=12000; break;
					case 2 : menu[i]="Bakso Jumbo		"; harga[i]=15000; break;
					case 3 : menu[i]="Tea (es/panas)	"; harga[i]=2000; break;
					case 4 : menu[i]="Jeruk (es/panas)	"; harga[i]=3000; break;
					default : menu[i]="";harga[i]=0;
				}
				
				cout << "Jumlah Porsi " << menu[i]<<" : ";
				cin >> jumlah[i];
				cout << endl;
				
				sub_total[i]=jumlah[i]*harga[i];
				
				total_bayar+=sub_total[i];
				i++;
			}
			
		} else {
			cout << "Menu yang dipilih tidak sesuai" << endl;
			cout << endl;
		}
		
	}
	
	cout << endl;
	cout << "			              INVOICE PEMBELIAN RM BERKAH		   	 " << endl;
	cout << "================================================================================================================" << endl;
	cout << "No		Nama Menu			Harga			Jumlah		Sub Total" << endl;
	cout << "================================================================================================================" << endl;
		for (int a = 0; a<i; a++){
			cout << a+1 <<"		"<<menu[a]<<"	"<<harga[a]<<"			"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
		}
	cout << "================================================================================================================" << endl;
	cout << "Total Bayar = Rp."<< total_bayar <<endl;
	
	// fungsi bayar
	cout << endl;
	cout << "Bayar = ";
	cin >> uang;
	if(uang <= total_bayar) {
		cout << "Uang anda tidak mencukupi untuk melakukan pembayaran";
		cout << endl;
	} else {
		cout << "Uang anda = Rp." << uang << endl;
		kembalian = uang - total_bayar;
		cout << "Kembalian = Rp." << kembalian << endl;
	}
	
}

// main program
int main() {
    
    // variabel
    int pemilihan_program;
    char kembali;
    int delay = 100;
    int animationLength = 20;

    //function
    string asciiArt =         
"   _   _ _   _                                                                      \n"                                                                     
"  /_\\ | | | (_)_ __     ___  _ __   ___   _ __  _ __ ___   __ _ _ __ __ _ _ __ ___ \n"
" //_ \\| | | | | '_ \\   / _ \\| '_ \\ / _ \\ | '_ \\| '__/ _ \\ / _` | '__/ _` | '_ ` _ \\ \n"
"/  _  \\| | | | | | | | (_) | | | |  __/ | |_) | | | (_) | (_| | | | (_| | | | | | | \n"
"\\_/ \\_/_|_| |_|_| |_|  \\___/|_| |_|\\___| | .__/|_|  \\___/ \\__, |_|  \\__,_|_| |_| |_| \n"
"                                         |_|              |___/                     \n";

    cout << asciiArt;

    Sleep(3000);
    cout << "Credits goes to -Rey | Github: r3ntan | Instagram: 7ipaa_" << endl;
    cout << endl;
    display_loadingScreen();
    system("cls");

    while(true) {
    cout << "##   Berikut beberapa program yang tersedia    ##" << endl;
    cout << "=================================================" <<endl;
    cout << "1. Program Input Data Nilai" << endl;
    cout << "2. Pyramid(array)" << endl;
    cout << "3. Program Tarif Parkir" << endl;
    cout << "4. Program Bilangan Faktorial" << endl;
    cout << "5. Program Bilangan Fibonaci" << endl;
    cout << "6. Program Penghitung Persegi Panjang" << endl;
    cout << "7. Program Penghitung Segitiga" << endl;
    cout << "8. Program Kalkulator" << endl;
    cout << "9. Program Kasir Restoran" << endl;
    cout << "10. Program Matriks Array 2 Dimensi" << endl;
    cout <<	"11. Exit" << endl;
    cout << "=================================================" << endl;

    cout << "Masukkan pilihanmu: ";
    cin >> pemilihan_program;

    switch(pemilihan_program) {
        
        // program data nilai
        case 1: cout << endl << "Kami akan mengerahkanmu ke program Data Nilai";
        Sleep(2000);

        // clear screen
        system("cls");
        data_nilai();
        break;

        // program pyramid
        case 2: cout << endl << "Kami akan mengerahkanmu ke program Pyramid";
        Sleep(2000);

        // clear screen
        system("cls");
        pyramid_array();
        break;
        
        // program tarif parkir
        case 3: cout << endl << "Kami akan mengerahkanmu ke program Tarif Parkir";
        Sleep(2000);
        
        // clear screen
        system("cls");
        tarif_parkir();
        break;
        
        // program bilangan faktorial
        case 4: cout << endl << "Kami akan mengerahkanmu ke program Bilangan Faktorial";
        Sleep(2000);
        
        // clear screen
        system("cls");
        faktorial();
        break;
        
        // program bilangan fabonaci
        case 5: cout << endl << "Kami akan mengerahkanmu ke program Bilangan Fabonaci";
        Sleep(2000);
        
        // clear screen
        system("cls");
        fibonaci();
        break;
        
        // program penghitung persegi panjang
        case 6: cout << endl << "Kami akan mengerahkanmu ke program Persegi Panjang";
        Sleep(2000);
        
        // clear screen
        system("cls");
        penghitung_persegi();
        break;
        
        // program penghitung segitiga
        case 7: cout << endl << "Kami akan mengerahkanmu ke program Penghitung Segitiga";
        Sleep(2000);
        
        // clear screen
        system("cls");
        penghitung_segitiga();
        break;
        
        // program kalkulator
        case 8: cout << endl << "Kami akan mengerahkanmu ke program Kalkulator";
        Sleep(2000);
        
        // clear screen
        system("cls");
        kalkulator();
        break;
        
        // program penghitung kasir restoran
        case 9: cout << endl << "Kami akan mengerahkanmu ke program Kasir Restoran";
        Sleep(2000);
        
        // clear screen
        system("cls");
        kasir_restoran();
        break;
        
        // Array 2 dimensi matriks
        case 10: cout << endl << "Kami akan mengerahkanmu ke program Array 2 Dimensi";
        Sleep(2000);
        
        // clear screen
        system("cls");
        matriks();
        break;
        
        // exit function
        case 11: cout << endl << "Exiting";
        Sleep(3000);
        exit(0);
        
        // else break
        default: cout << "Anda memasukkan input yang salah";
        cout << endl;
        cout << "Exiting";
        return 0;
    }

    cout << endl;
    cout << "Kembali ke menu utama(y/n)? ";
    cin >> kembali;
    system("cls");

    if(kembali != 'y') {
        cout << "Program akan ditutup dalam waktu 3 detik";
        Sleep(3000);
        system("cls");
        cout << "Program ditutup";
        exit(0);
    }

    }

}







