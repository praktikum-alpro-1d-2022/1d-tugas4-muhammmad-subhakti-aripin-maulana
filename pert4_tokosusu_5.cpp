#include <iostream>

using namespace std;

main() {

    char ukuran;
    int kodeSusu, jmlPembelian;
    float hargaSusu, jmlHarga;

    cout << " =========================================================== " << endl;
    cout << " M.Subhakti A Maulana " << endl;
    cout << " 2210631170028 " << endl;
    cout << " 1D Informatika "<< endl;
    cout << " =========================================================== " << endl;
    cout << endl;

    cout << "+----------------------------------------------------------+" << endl;
    cout << "| Kode Susu | Nama Produk |  Ukuran        | Harga         |" << endl;
    cout << "+----------------------------------------------------------+" << endl;
    cout << "|     1     | Dancow      | B = Besar      | Rp. 10.000,00 |" << endl;
    cout << "|           |             | S = Sedang     | Rp. 4.250,00  |" << endl;
    cout << "|           |             | K = Kecil      | Rp. 2.100,00  |" << endl;
    cout << "+----------------------------------------------------------+" << endl;
    cout << "|     2     | Indomilk    | B = Besar      | Rp. 8.500,00  |" << endl;
    cout << "|           |             | S = Sedang     | Rp. 4.000,00  |" << endl;
    cout << "|           |             | K = Kecil      | Rp. 2.025,00  |" << endl;
    cout << "+----------------------------------------------------------+" << endl;
    cout << "|     3     | Sustacal    | B = Besar      | Rp. 17.000,00 |" << endl;
    cout << "|           |             | S = Sedang     | Rp. 14.500,00 |" << endl;
    cout << "|           |             | K = Kecil      | Rp. 8.300,00  |" << endl;
    cout << "+----------------------------------------------------------+\n" << endl;

    cout << "Masukan kode Susu [1-3] ?  : ";
    cin >> kodeSusu;
    cout << "Masukan Jumlah Pembelian   : ";
    cin >> jmlPembelian;
    cout << "Masukan Ukuran [B/S/K]     : ";
    cin >> ukuran;

    switch (kodeSusu){
    case 1:
        cout << "\n\n========================================" << endl;
        cout << "       Susu Dancow" << endl;
        if(ukuran == 'B' || ukuran == 'b'){
            hargaSusu = 10000;
        } else if(ukuran == 'S' || ukuran == 's') {
            hargaSusu = 4250;
        } else{
            hargaSusu = 2100;
        }
        printf("Harga Susu Rp. %4.2f\n", hargaSusu);
        jmlHarga = jmlPembelian*hargaSusu;
        printf("Jumlah Pembelian Rp. %4.2f", jmlHarga);
        cout << "\n========================================" << endl;
        break;

    case 2:
        cout << "\n\n========================================" << endl;
        cout << "       Susu Indomilk" << endl;
        if(ukuran == 'B' || ukuran == 'b'){
            hargaSusu = 8500;
        } else if(ukuran == 'S' || ukuran == 's') {
            hargaSusu = 4000;
        } else{
            hargaSusu = 2025;
        }
        printf("Harga Susu Rp. %4.2f\n", hargaSusu);
        jmlHarga = jmlPembelian*hargaSusu;
        printf("Jumlah Pembelian Rp. %4.2f", jmlHarga);
        cout << "\n========================================" << endl;
        break;

    case 3:
        cout << "\n\n========================================" << endl;
        cout << "         Susu Sustacal" << endl;
        if(ukuran == 'B' || ukuran == 'b'){
            hargaSusu = 17000;
        } else if(ukuran == 'S' || ukuran == 's') {
            hargaSusu = 14500;
        } else{
            hargaSusu = 8300;
        }
        printf("Harga Susu Rp. %4.2f\n", hargaSusu);
        jmlHarga = jmlPembelian*hargaSusu;
        printf("Jumlah Pembelian Rp. %4.2f", jmlHarga);
        cout << "\n========================================" << endl;
        break;
    }
    return 0;    
}
