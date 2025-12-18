#include <iostream>
using namespace std;

void pyramid(int tinggi, int variasi) {
    for (int i = 1; i <= tinggi; i++) {
        // Hitung jumlah spasi dan bintang per baris
        int bintang = i;
        int spasi_total = tinggi - i;
        int spasi_kiri, spasi_kanan;

        switch(variasi) {
            case 1: // Rata kanan
                spasi_kiri = spasi_total;
                spasi_kanan = 0;
                break;
            case 2: // Center
                spasi_kiri = spasi_total / 2;
                spasi_kanan = spasi_total - spasi_kiri;
                break;
            default: // 0 atau lainnya = Rata kiri
                spasi_kiri = 0;
                spasi_kanan = spasi_total;
                break;
        }

        // Cetak spasi kiri
        for (int j = 0; j < spasi_kiri; j++) cout << " ";
        // Cetak bintang
        for (int j = 0; j < bintang; j++) cout << "*";
        // Cetak spasi kanan (untuk visual konsistensi)
        for (int j = 0; j < spasi_kanan; j++) cout << " ";
        cout << endl;
    }
}

int main() {
    cout << "pyramid(5, 0):" << endl;
    pyramid(5, 0);
    cout << "\npyramid(5, 1):" << endl;
    pyramid(5, 1);
    cout << "\npyramid(5, 2):" << endl;
    pyramid(5, 2);
    return 0;
}
