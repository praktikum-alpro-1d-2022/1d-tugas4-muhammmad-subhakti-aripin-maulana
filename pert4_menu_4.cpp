#include <iostream>

using namespace std;

int main(){
    int pilihan;
    float harga;
    cout << "==================================================" << endl;
    cout << " M.Subhakti A Maulana " << endl;
    cout << " 2210631170028 " << endl;
    cout << " 1D Informatika " << endl;
    cout << "==================================================" << endl;
    cout << endl;

    cout << "+------------------------------------------------+" << endl;
    cout << "|                DAFTAR MAKANAN                  |" << endl;
    cout << "+------------------------------------------------+" << endl;
    cout << "| 1. Nasi goreng Informatika   |    Rp.5.000,-   |" << endl;
    cout << "| 2. Nasi Soto Ayam Intrnet    |    Rp.7.000,-   |" << endl;
    cout << "| 3. Gado-Gado Disket          |    Rp.4.500,-   |" << endl;
    cout << "| 4. Bubur Ayam LAN            |    Rp.4.000,-   |" << endl;
    cout << "+------------------------------------------------+" << endl;

    cout << endl;
    cout << "Masukan Pesanan Anda = ";
    cin >> pilihan;

    switch (pilihan){
    case 1:
        cout << "\n==================================================" << endl;
        cout << " Nasi Goreng Informatika" << endl;
        harga = 5000;
        cout << " Anda Membayar Sebesar = " << harga;
        cout << "\n==================================================" << endl;
        break;

    case 2:
        cout << "\n==================================================" << endl;
        cout << " Nasi Soto Ayam Internet" << endl;
        harga = 7000;
        cout << " Anda Membayar Sebesar = " << harga;
        cout << "\n==================================================" << endl;
        break;

    case 3:
        cout << "\n==================================================" << endl;
        cout << " Gado-gado Disket" << endl;
        harga = 4500;
        cout << " Anda Membayar Sebesar = " << harga;
        cout << "\n==================================================" << endl;
        break;

    case 4:
        cout << "\n==================================================" << endl;
        cout << " Bubur Ayam Lan" << endl;
        harga = 4000;
        cout << " Anda Membayar Sebesar = " << harga;
        cout << "\n==================================================" << endl;
        break;
    }

    return 0;
}
