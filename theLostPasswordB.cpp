#include <iostream>
#include <string>
using namespace std;

// reverse string
string reverseStr(const string &s) {
    string r;
    r.reserve(s.size());
    for (int i = (int)s.size() - 1; i >= 0; --i) r.push_back(s[i]);
    return r;
}

int main() {
    string password;
    cout << "Masukkan password yang ingin direkonstruksi : ";
    cin >> password;

    // menentukan blok kode ASCII di password
    int n = (int)password.size();
    int start = -1, end = -1;
    for (int i = 0; i < n; ++i) {
        if (isdigit((unsigned char)password[i])) {
            if (start == -1) start = i;
            end = i;
        }
    }

    // menampilkan peringatan jika tidak menemukan kode ASCII
    if (start == -1) {
        cout << "Error: kode ASCII tidak ditemukan dalam sandi\n";
        return 0;
    }

    // mengekstrak kode ASCII
    string asciiDigits = password.substr(start, end - start + 1);
    int asciiCode = stoi(asciiDigits);
    char firstChar = (char)asciiCode;

    // menghapus kode ASCII
    string rem = password.substr(0, start) + password.substr(end + 1);

    // membalikkan variabel rem untuk mendapatkan konsonan sesuai urutan kata asli
    string consonantsOriginalOrder = reverseStr(rem);

    // menampilkan output
    cout << "Huruf pertama (dari ASCII) : " << firstChar << '\n';
    cout << "Konsonan : " << consonantsOriginalOrder << '\n';
    cout << "Kata asli : Tebak sendiri :D";

    return 0;
}
