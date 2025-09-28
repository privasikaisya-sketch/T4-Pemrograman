#include <iostream>  // Menyertakan pustaka input/output standar untuk cin, cout, dll.
using namespace std; // Menggunakan namespace std agar tidak perlu menulis std:: setiap kali

int main() {
    // Mendeklarasikan variabel untuk menyimpan jumlah stok obat yang diinput pengguna
    int stock_obat;

    // Mendeklarasikan dan menginisialisasi ambang batas minimum stok obat
    // Nilai ini tetap (konstan) sebesar 10 sesuai permintaan soal
    int ambang_batas = 10;

    // Menampilkan judul program
    cout << "=== Sistem Pemantauan Stok Apotek ===" << endl;

    // Memberi tahu pengguna bahwa ambang batas minimum adalah 10
    cout << "ambang batas minimum stock obat 10" << endl;

    // Meminta pengguna memasukkan jumlah stok obat saat ini
    cout << "masukan jumlah stock obat : ";
    cin >> stock_obat;  // Membaca input dari pengguna dan menyimpannya ke variabel stock_obat

    // --- PEMANFAATAN OPERATOR RELASI ---
    // Operator relasi '>=' digunakan untuk membandingkan:
    //   apakah nilai stock_obat LEBIH BESAR ATAU SAMA DENGAN ambang_batas?
    // Hasil perbandingan ini bernilai true atau false (tipe data boolean)
    if (stock_obat >= ambang_batas) {
        // Jika kondisi di atas bernilai true (stok cukup), tampilkan pesan ini
        cout << "\n ✅   stock obat mencukupi" << endl;
    } else {
        // Jika kondisi bernilai false (stok kurang dari ambang batas),
        // tampilkan peringatan dan instruksi restock
        cout << "\n ⚠    stock obat tidak mencukupi" << endl;
        cout << "perlu segera restock obat!";
    }

    // Akhiri program dengan mengembalikan nilai 0 (sukses)
    return 0;
}
