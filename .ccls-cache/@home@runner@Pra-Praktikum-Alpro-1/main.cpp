#include <iostream>
using namespace std;

int main() {
  int bil1, bil2, pilih;
  float hasil;
  char op;
  cout << "Pilih Operator Aritmatika\n";
  cout << "1. (%) Modulus/Sisa Pembagian\n";
  cout << "2. (+) Penjumlahan\n";
  cout << "3. (-) Pengurangan\n";
  cout << "4. (*) Perkalian\n";
  cout << "5. (/) Pembagian\n";
  cout << "Opsi Pilihan : ";
  cin >> pilih;
  cout << "Masukan Bilangan 1 : ";
  cin >> bil1;
  cout << "Masukan Bilangan 2 : ";
  cin >> bil2;
  switch (pilih) {
  case 1:
    hasil = bil1 % bil2;
    op = '%';
    break;
  case 2:
    hasil = bil1 + bil2;
    op = '+';
    break;
  case 3:
    hasil = bil1 - bil2;
    op = '-';
    break;
  case 4:
    hasil = bil1 * bil2;
    op = '*';
    break;
  case 5:
    hasil = bil1 / bil2;
    op = '/';
    break;
  default:
    cout << "Pilihan Tidak Tersedia\n";
    break;
  }
  cout << "Hasil dari operasi " << bil1 << op << bil2 << " adalah " << hasil;
  cout << "\n";
}