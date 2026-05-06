#include<iostream>
using namespace std;

int FPB (int a, int b) { //fungsi untuk mencari FPB 
    if (b == 0) { //basecase jika b = 0 maka a adalah FPB
        return a; //mengembalikan nilai a sebagai FPB
    }
    return FPB(b, a % b); //rekursif memanggil fungsi fpb dengan nilai baru
}

int main(){
    int a, b;
    cout << "INPUT 1 : ";
    cin >> a;
    cout << "INPUT 2 : ";
    cin >> b;
    cout<<"OUTPUT : " << FPB(a, b);   //memanggil fungsi FPB dan menampilkan hasilnya
}