#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int angka[5]; //deklarasi array untuk menyimpan 5 angka
    
    cout << "INPUT 5 ANGKA DENGAN SPASI : ";
    
    
    for(int i = 0; i < 5; i++) { //loop untuk mengiput array dari index 0 sampai 4
        cin >> angka[i]; //menyimpan input si user ke array index ke i
    }
    
    cout << "output : ";
    
    for(int i = 4; i >= 0; i--) { //loop untuk menampilkan array dari index 4 sampai 0
        cout << angka[i]; //menampilkan isi array index ke i
        if(i > 0) { //jika index ke i masih lebih besar dari 0 maka tampilkan spasi
            cout << " "; //menampilkan spasi
        }
    }    
}