#include <iostream>
#include <cmath> //library untuk menghitung perpangkatan (pow)
#include <string> //library untuk tipe data string dan to_string
using namespace std;

int main() {
    int x;
    cout << "INPUT  : ";
    cin >> x;

    string s = to_string(x); //ubah angka x menjadi string untuk memudahkan pengolahan digit
    int num = s.length(); //hitung jumlah digit dengan panjang string s, ini akan digunakan sebagai pangkat dalam perhitungan armstrong
    int sum = 0; //variabel untuk menyimpan total hasil pangkat

    for (int i = 0; i < num; i++) { //loop untuk menghitung jumlah perpangkatan tiap digit
        int d = s[i] - '0'; //ambil digit satu per satu, ubah char ke int
        sum += pow(d, num); //pangkatkan digit dengan jumlah digit (num) dan tambahkan ke sum
    }

    if (sum == x) { //ngecek apakah sum sama dengan angka asli x, jika sama maka x adalah armstrong
        cout << "OUTPUT : YES, " << x << " is an Armstrong Number" << endl;
    } else {
        cout << "OUTPUT : NO, " << x << " is not an Armstrong Number" << endl;
    }

    cout << "         ";
    for (int i = 0; i < num; i++) { //loop untuk menampilkan proses perhitungan armstrong
        int d = s[i] - '0'; //ambil digit satu per satu, ubah char ke int
        for (int j = 0; j < num; j++) { //loop untuk menampilkan perpangkatan digit, sebanyak num kali
            cout << d; //tampilkan digit
            if (j < num - 1) cout << "*"; //tampilkan tanda perkalian jika belum mencapai pangkat terakhir
        }
        if (i < num - 1) cout << " + "; //tampilkan tanda tambah jika belum mencapai digit terakhir
    }
    cout << " = " << sum << endl; //tampilkan hasil akhir dari perhitungan armstrong

}