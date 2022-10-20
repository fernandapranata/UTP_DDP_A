#include <iostream>
#include <conio.h>
using namespace std;
void greet(){
	cout<<" NAMA ANGGOTA KELOMPOK 11 : " <<endl;
	cout<<" 1. Fernanda Pranata        (2217051146) " <<endl;
	cout<<" 2. Imam Ahdi Sabilla       (2217051141) " <<endl;
	cout<<" 3. Muhammad Hildan Alfaris (2217051077) " <<endl;
	cout<<endl;
}

	int main(){
		int games;
		int skor=0;
		int hasil;
		int menu;
		greet();

do {
cout<<" =============================================================================" <<endl;
cout<<" ===================== WELCOME TO GAMES PENGETAHUAN UMUM =====================" <<endl;
cout<<"   >>>>>>>>>>>>>>>>>>>>>>>>>>>> SELAMAT BERMAIN <<<<<<<<<<<<<<<<<<<<<<<<<<<<"   <<endl;
cout<<endl;
cout<<" Tata Cara Permainan Games Pengetahuan Umum :" <<endl;
cout<<" 1. Tipe soal berbentuk pilihan ganda "                                 <<endl;
cout<<" 2. Sebelum bermain pilihlah tingkat kesulitan yang ingin anda coba"    <<endl;
cout<<" 3. Pilihlah jawaban yang menurut anda paling benar"                    <<endl;
cout<<" 4. Setiap tipe soal terdiri dari 5 soal "                              <<endl;
cout<<" 5. Setiap soal memiliki skor 20, jadi jika benar semua total skor 100" <<endl;
cout<<" 6. Selamat mengerjakan"                                                <<endl;
cout<<endl;

	
	cout<<endl;
	cout<<"  ===== TINGKAT KESULITAN KUIS =====  " <<endl;
	cout<<endl;
	cout<<" [1] Easy"   <<endl;
	cout<<" [2] Medium" <<endl;
	cout<<" [3] Hard"   <<endl;
	cout<<endl;
	cout<<" Pilih Tingkat Kesulitan Kuis : ";
	cin>>games;
	system ("cls");
	

	switch (games){
		case 1 :	
		cout<<" 1. NEGARA TERLUAS KE EMPAT DI DUNIA... " <<endl;
		cout<<" [1] INDONESIA "       <<endl;
		cout<<" [2] JEPANG "          <<endl;
		cout<<" [3] AMERIKA SERIKAT " <<endl;
		cout<<" [4] KOREA SELATAN "   <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==3){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 2. APA IBUKOTA BANTEN... " <<endl;
		cout<<" [1] SERANG "     <<endl;
		cout<<" [2] BANDUNG "    <<endl;
		cout<<" [3] YOGYAKARTA " <<endl;
		cout<<" [4] MEDAN "      <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==1){
			skor=skor+20;
		}
		cout<<endl;
	
	
		cout<<" 3. SIAPA NAMA PRESIDEN KE-TIGA INDONESIA... " <<endl;
		cout<<" [1] ABDURRAHMAN WAHID "      <<endl;
		cout<<" [2] PUAN MAHARANI "          <<endl;
		cout<<" [3] MEGAWATI SOEKARNOPUTRI " <<endl;
		cout<<" [4] BJ. HABIBIE "            <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==4){
			skor=skor+20;
		}
		cout<<endl;


		cout<<" 4. LAGU AMPAR-AMPAR PISANG BERASAL DARI DAERAH... " <<endl;
		cout<<" [1] KALIMANTAN BARAT "   <<endl;
		cout<<" [2] KALIMANTAN SELATAN " <<endl;
		cout<<" [3] KALIMANTAN TIMUR "   <<endl;
		cout<<" [4] KALIMANTAN TENGAH "  <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==2){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 5. BIKA AMBON MERUPAKAN SALAH SATU KUE TRADISIONAL YANG BERASAL DARI... " <<endl;
		cout<<" [1] AMBON "    <<endl;
		cout<<" [2] BENGKULU " <<endl;
		cout<<" [3] MEDAN "    <<endl;
		cout<<" [4] MALUKU "   <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==3){
			skor=skor+20;
		}		
	
	
	system ("cls");
		cout<<" >>>>>>>>> TINGKAT EASY <<<<<<<<<< " <<endl;
		cout<<" SELAMAT ANDA MENDAPATKAN SKOR : ";
		cout<<skor;
		cout<<endl;
		
		cout<<endl;
		cout<<" APAKAH ANDA INGIN MENGULANG PERMAINAN INI ?" <<endl;
		cout<<" Klik [1] Untuk kembali ke menu games         " <<endl;
		cout<<" Klik [2] Untuk lanjut ke soal tingkat medium " <<endl;
		cout<<" Klik [3] Untuk lanjut ke soal tingkat hard   " <<endl;
		cout<<" JAWAB : ";
		cin>>games;
	system ("cls");
	}
		

	switch (games){
		case 2 :	
		cout<<" 1. SIAPA PENEMU TELEPON... " <<endl;
		cout<<" [1] THOMAS ALPHA EDISION "  <<endl;
		cout<<" [2] ALEXANDER GRAHAM BELL " <<endl;
		cout<<" [3] NIKOLA TESLA "          <<endl;
		cout<<" [4] CHARLES BABBAGE "       <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==2){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 2. SIAPA PEMEGANG KEKUASAAN EKSEKUTIF... " <<endl;
		cout<<" [1] MPR, DPR, DAN DPD "           <<endl;
		cout<<" [2] PRESIDEN DAN WAKIL PRESIDEN " <<endl;
		cout<<" [3] BPK"                          <<endl;
		cout<<" [4] MA, KY, DAN MK "              <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==2){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 3. NEGARA YANG TIDAK PERNAH DIJAJAH ADALAH... " <<endl;
		cout<<" [1] MALAYSIA "  <<endl;
		cout<<" [2] THAILAND "  <<endl;
		cout<<" [3] VIETNAM "   <<endl;
		cout<<" [4] SINGAPORE " <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==2){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 4. HARI KESAKTIAN PANCASILA DIPERINGATI SETIAP... " <<endl;
		cout<<" [1] 21 OKTOBER "   <<endl;
		cout<<" [2] 1 NOVEMBER "   <<endl;
		cout<<" [3] 30 SEPTEMBER " <<endl;
		cout<<" [4] 1 OKTOBER "    <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==4){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 5. DIMANA MARKAS KANTOR PBB... " <<endl;
		cout<<" [1] NEY YORK, AMERIKA SERIKAT" <<endl;
		cout<<" [2] PARIS, PERANCIS "          <<endl;
		cout<<" [3] JENEWA, SWISS"             <<endl;
		cout<<" [4] WASHINGTON, AMERIKA "      <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==1){
			skor=skor+20;
		}
		
		
	system ("cls");
		cout<<" >>>>>>>> TINGKAT MEDIUM <<<<<<<<< " <<endl;
		cout<<" SELAMAT ANDA MENDAPATKAN SKOR : ";
		cout<<skor;
		cout<<endl;
		
		cout<<endl;
		cout<<" APAKAH ANDA INGIN MENGULANG PERMAINAN INI ?" <<endl;
		cout<<" Klik [1/2]  Untuk kembali ke menu games       " <<endl;
		cout<<" Klik  [3]   Untuk lanjut ke soal tingkat hard " <<endl;
		cout<<" JAWAB : ";
		cin>>games;
	system ("cls");
	}
	
	
	switch(games){
		case 3:
		cout<<" 1. BERBEDA DENGAN VOLTMETER KALI INI DISEBUT APA ALAT MENGUKUR LISTRIK YANG SEDANG BERJALAN... " <<endl;
		cout<<" [1] VOLTMETER "   <<endl;
		cout<<" [2] BAROMETER "   <<endl;
		cout<<" [3] AMPEREMETER " <<endl;
		cout<<" [4] TERMOMETER "  <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==3){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 2. TAHUN BERAPA DONALD TRUMP TURUN MENJADI PRESIDEN... " <<endl;
		cout<<" [1] 2017 " <<endl;
		cout<<" [2] 2018 " <<endl;
		cout<<" [3] 2020 " <<endl;
		cout<<" [4] 2021 " <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==4){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 3. APA CABANG ILMU MATEMATIKA YANG MEMPELAJARI SUDUT, SEGITIGA, SERTA FUNGSI SIN, COSIN, DAN TANGEN... " <<endl;
		cout<<" [1] TRIGONOMETRI " <<endl;
		cout<<" [2] TOPOLOGI "     <<endl;
		cout<<" [3] GEOMETRI "     <<endl;
		cout<<" [4] TRIGONOM"      <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==1){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 4. KOTA YANG DIJULUKI DENGAN 'CROSSROADS OF THE PACIFIC' DAN 'THE BIG PINEAPPLE' ADALAH... " <<endl;
		cout<<" [1] WAIPAHU "  <<endl;
		cout<<" [2] HONOLULU " <<endl;
		cout<<" [3] NEW YORK " <<endl;
		cout<<" [4] MILAN "    <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==2){
			skor=skor+20;
		}
		cout<<endl;
		
		
		cout<<" 5. BERAPA UKURAN KELILING BOLA BASKET... " <<endl;
		cout<<" [1] 64 CM " <<endl;
		cout<<" [2] 74 CM " <<endl;
		cout<<" [3] 68 CM " <<endl;
		cout<<" [4] 78 CM " <<endl;
		cout<<" Masukkan jawaban Anda : ";
		cin>>hasil;
		
		if (hasil==4){
			skor=skor+20;
		}
	
	system ("cls");
		cout<<" >>>>>>>>> TINGKAT HARD <<<<<<<<<< " <<endl;
		cout<<" SELAMAT ANDA MENDAPATKAN SKOR : ";
		cout<<skor;
		cout<<endl;
		
		cout<<endl;
		cout<<" ================================================================================ " <<endl;
		cout<<"   | SELAMAT ANDA TELAH MENYELESAIKAN SEMUA TINGKAT GAMES DALAM PERMAINAN INI |   " <<endl;
		cout<<" ================================================================================ " <<endl;
		cout<<endl;
		
		cout<<" Klik [1/2/3] Untuk kembali ke menu games " <<endl;
		cout<<" JAWAB : ";
		cin>>games;
	system ("cls");
	}
	

} while(games);


	return 0;
}




