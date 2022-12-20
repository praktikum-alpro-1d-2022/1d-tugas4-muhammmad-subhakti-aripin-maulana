#include <iostream>

using namespace std;

int main(){
   cout << "=========================================" << endl;
    cout << " M Subhakti A Maulana " << endl;
    cout << " 2210631170028 " << endl;
    cout << " 1D Informatika " << endl;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "## program c++ menentukan ganjil genap ##" << endl;
    cout << "=========================================" << endl;
    cout << endl;

    int a;

    cout << "Input Bilangan Yang anda mau = ";
    cin >> a;

    if (a % 2 == 0){
        cout << a << " Adalah Sebuah bilangan Genap";
    }
    else {
        cout << a << " Adalah Sebuah bilangan Ganjil";
    }

    cout << endl;
    return 0;
}
