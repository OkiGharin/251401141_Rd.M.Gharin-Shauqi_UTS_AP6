#include<iostream>
using namespace std;

int fibonanci(int z) { //fungsi untk mencari fibonanci
    if(z == 0) { //basecase 1 jika z = 0 berhenti
        return 0; //fibonanci ke 0 adalah 0
    } else if(z == 1) { //basecase 2 jika z = 1 berhenti
        return 1; //fibonanci ke 1 adalah 1
    } else { //jika z lebih dari 1 maka lanjutkan rekursif
        return fibonanci(z - 1) + fibonanci(z - 2); //menjumlahkan 2 suku sebelumnya
    }         //cari nilai satu langkah sebelum dan cari nilai dua langkag sebelumnya
}
int main() {
    int x;
    cout << "INPUT : ";
    cin >> x;
    cout << "OUTPUT : " << fibonanci(x); // panggil fungsi fibonanci dan menampilkan hasilnya
}