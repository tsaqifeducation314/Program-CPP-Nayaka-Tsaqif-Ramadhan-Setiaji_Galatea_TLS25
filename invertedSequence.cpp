#include <iostream>
#include <vector>
using namespace std;

// fungsi untuk membalik digit dari suatu bilangan
int revNum(int x) {
    int rev = 0;
    while (x != 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Masukkan banyak elemen array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = 0;
    cout << "\nArray setelah transformasi:\n";
    for (int i = 0; i < n; i++) {
        // jika indeks genap, maka dibalik
        if (i % 2 == 0) { 
            arr[i] = revNum(arr[i]); 
        }
        cout << arr[i] << " ";
        // menjumlahkan seluruh elemen array
        total += arr[i];
    }
    // menampilkan angka 0 jika array kosong
    if (n == 0) {
        cout << 0; 
    }

    cout << "\n\nJumlah seluruh elemen hasil transformasi = " << total << endl;

    return 0;
}
