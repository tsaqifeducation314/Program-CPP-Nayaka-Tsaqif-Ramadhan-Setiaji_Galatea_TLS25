#include <iostream>
#include <string>
using namespace std;

// cek huruf vokal 
bool isVowel(char c) {
    c = tolower((unsigned char)c);
    return (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
}

// fungsi reverse string 
string reverseStr(const string &s) {
    string r;
    r.reserve(s.size());
    for (int i = (int)s.size() - 1; i >= 0; --i) r.push_back(s[i]);
    return r;
}

int main() {
    string word;
    // input kata 
    cout << "Masukkan kata : ";
    cin >> word;

    // simpan ascii dari huruf pertama
    int asciiFirst = (int)word[0];

    // hapus semua huruf vokal
    string consonants = "";
    for (char c : word) {
        if (!isVowel(c)) consonants.push_back(c);
    }

    // membalikkan konsonan
    string rev = reverseStr(consonants);

    // menyisipkan kode ascii di tengah sandi
    string asciiStr = to_string(asciiFirst);
    int insertPos = (int)((rev.size() + 1) / 2);
    string password = rev.substr(0, insertPos) + asciiStr + rev.substr(insertPos);

    // output sandi
    cout << password << endl;
    return 0;
}
