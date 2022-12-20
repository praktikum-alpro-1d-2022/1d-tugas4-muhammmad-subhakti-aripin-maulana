#include <iostream>

using namespace std;

int main(){

    cout << "=========================================" << endl;
    cout << " M.Subhakti A Maulana" << endl;
    cout << " 2210631170028" << endl;
    cout << " 1D Informatika" << endl;
    cout << "=========================================" << endl;
    cout << endl;

    string uname1, uname2;
    string pass1, pass2;

    cout << "Silahkan Daftarkan Username Anda = ";
    cin  >> uname1;

    cout << "Silahkan Masukan Password Anda = ";
    cin  >> pass1;
    cout << endl;

    cout << "Berhasil Mendaftar, Login Dengan Username Anda = ";
    cin  >> uname2;

    cout << "Masukan Password Anda = ";
    cin  >> pass2;
    cout << endl;

    if(uname2 == uname1){
        if(pass2 == pass1){
            cout << "Berhasil, Username dan Password Sesuai" << endl;
        } else {
            cout << "Username Sesuai, Password tidak Sesuai" << endl;
        }
    } else if (uname2 != uname1){
        if(pass2 == pass1){
            cout << "Username Tidak Sesuai, Password Sesuai" <<endl;
        } else {
        cout << "Username dan Password tidak sesuai" << endl;
        }
    }

    return 0;
}
