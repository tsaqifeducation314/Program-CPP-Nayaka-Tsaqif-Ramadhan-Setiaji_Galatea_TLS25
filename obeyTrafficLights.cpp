#include <iostream>
using namespace std;

int main() {
    // durasi setiap warna pada lampu (dalam detik)
    int hijau = 20, kuning = 3, merah = 80;
    int total = hijau + kuning + merah;
    int awal = 25;

    // waktu yang ingin dicek
    int t;
    cout << "Waktu : ";
    cin >> t;

    // menentukkan warna lampu
    int t_mod = (t - awal) % total;

        string warna;

        if (t_mod < hijau) {
            warna = "HIJAU";
        } else if (t_mod < hijau + kuning) {
            warna = "KUNING";
        } else {
            warna = "MERAH";
        } 

        // menampilkan warna lampu
        cout << "Warna pada detik ke-" << t << " adalah " << warna << endl;

    return 0;
}
