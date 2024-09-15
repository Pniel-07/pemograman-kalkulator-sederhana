#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int pilihan;
    double num1, num2;

    do {
        cout << "===== Kalkulator Sederhana =====" << endl;
        cout << "Pilih operasi:" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Faktorial" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan (1-6): ";
        
        // Validasi input pilihan
        while (!(cin >> pilihan) || pilihan < 1 || pilihan > 6) {
            cout << "Error: Masukkan pilihan antara 1-6." << endl;
            cin.clear();
            cin.ignore(123, '\n');
        }

        switch (pilihan) {
            case 1:
                cout << "Masukkan dua angka: ";
                while (!(cin >> num1 >> num2)) {
                    cout << "Error: Masukkan angka yang valid!" << endl;
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                cout << "Hasil: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Masukkan dua angka: ";
                while (!(cin >> num1 >> num2)) {
                    cout << "Error: Masukkan angka yang valid!" << endl;
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                cout << "Hasil: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Masukkan dua angka: ";
                while (!(cin >> num1 >> num2)) {
                    cout << "Error: Masukkan angka yang valid!" << endl;
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                cout << "Hasil: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Masukkan dua angka: ";
                while (!(cin >> num1 >> num2)) {
                    cout << "Error: Masukkan angka yang valid!" << endl;
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                if (num2 != 0)
                    cout << "Hasil: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error: Pembagian dengan nol!" << endl;
                break;
            case 5: {
                int n;
                cout << "Masukkan angka untuk faktorial (bilangan bulat non-negatif): ";
                while (!(cin >> n) || n < 0) {
                    cout << "Error: Masukkan bilangan bulat non-negatif!" << endl;
                    cin.clear();
                    cin.ignore(123, '\n');
                }
                cout << "Hasil: " << n << "! = " << faktorial(n) << endl;
                break;
            }
            case 6:
                cout << "Keluar dari program..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi." << endl;
        }

        cout << endl;
    } while (pilihan != 6);

    return 0;
}
