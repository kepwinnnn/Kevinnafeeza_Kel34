#include <iostream>
#include <string>
using namespace std;

void sapaan() {
    cout << "Selamat Datang Di Sirkus Kel34 Shift5" << endl;
}

string sakit(int pilihan) {
    if (pilihan == 1) {
        return "Ohok ohok ohok ohok (jangan ngerokok yah) .";
    } else if (pilihan == 2) {
        return "Tubuhmu overheating, Pasangin HSF AMD gih .";
    } else if (pilihan == 3) {
        return "Kebanyakan mikirin tugas, ayo healing .";
    } else if (pilihan == 4) {
        return "Yah remaja jompo .";
    } else {
        return "diagnosisku modaar dilit neh, urip ra suwi";
    }
}

void motivasi(string nama) {
    cout << "Tetap semangat ya, " << nama << ". Jangan lupa bernafas!" << endl;
}

void penutup() {
    cout << "Terima kasih sudah curhat ke kodingan, coba cek ke RSND, setauku penyakit jiwa ditanggung BPJS kok!" << endl;
}

int hitungSial(int lama) {
    int totalJam = lama;
    for (int j = 1; j <= 10; j++) {
        totalJam++;
    }
    return totalJam;
}

int main() {
    sapaan();

    string nama;
    cout << "Masukkan namamu : ";
    cin >> nama;

    cout << "\nHai " << nama << "! Pilih gejala yang kamu rasakan dari daftar ini:\n";
    cout << "1. Batuk\n2. Demam\n3. Pusing\n4. Pilek\n";

    int jumlah;
    cout << "\nBerapa banyak gejala di atas yang kamu rasakan? ";
    cin >> jumlah;


    if (jumlah == 0) {
        cout << "\nWah sehat banget yah kamu " << endl;
        cout << "Prediksi 100% Akurat Ala Kel34: Ngapain curhat ke kodingan , diagnosis kami : sakit jiwa" << endl;
        return 0;
    }

    if (jumlah >= 5) {
        cout << "Penyakiten jirr....." << endl;
        cout << "Prediksi 100% Akurat Ala Kel34: Ga lama km mati yh , cpt mnta kuburan" << endl;
        return 0;
    }

    int totalJamTerakhir = 0;

    for (int i = 1; i <= jumlah; i++) {
        int pilih;
        cout << "\nGejala nomor berapa yang kamu rasakan? ";
        cin >> pilih;

        string hasil = sakit(pilih);
        cout << "Diagnosis : " << hasil << endl;

        int lama;
        cout << "Sudah berapa jam kamu merasakan gejala ini? ";
        cin >> lama;

        totalJamTerakhir = hitungSial(lama);

        if (jumlah == 1) {
            cout << "Prediksi 100% Akurat Ala Kel34: "
                 << totalJamTerakhir << " jam lagi kamu bakal mati " << endl;
        }
    }

    if (jumlah > 1) {
        cout << "\nSetelah mendeliki semua gejala kamu..." << endl;
        cout << "Prediksi 99.9% Akurat Ala Kel34 : "
             << totalJamTerakhir << " jam lagi kamu bakal meninggal " << endl;
    }

    motivasi(nama);
    penutup();

    return 0;
}
