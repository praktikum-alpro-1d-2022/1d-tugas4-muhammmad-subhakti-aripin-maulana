#include <iostream>

using namespace std;

int main(){

    cout << "========================" << endl;
    cout << " M.Subhakti A MAulana " << endl;
    cout << " 2210631170028 " << endl;
    cout << " 1D informatika " << endl;
    cout << "========================" << endl;

    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun%400 == 0){
        cout << tahun << " Adalah Tahun Kabisat\n";
    }

    else if(tahun%100 == 0){
        cout << tahun << " Bukan Tahun Kabisat\n";
    }

    else if(tahun%4 == 0){
        cout << tahun << " Adalah Tahun Kabisat\n";
    }

    else {
        cout << tahun << " Bukan Tahun kabisat\n";
    }

    return 0;
}
