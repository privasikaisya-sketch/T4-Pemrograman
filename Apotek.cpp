#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan variabel untuk menyimpan jumlah jenis obat yang akan diperiksa
    int jumlah_obat;
    
    // Menetapkan ambang batas stok minimum (jika stok di bawah ini, dianggap tidak mencukupi)
    int ambang_batas = 10;

    // Menampilkan judul sistem pemantauan stok apotek
    cout << "=== Sistem Pemantauan Stok Apotek ===" << endl;

    // Meminta pengguna memasukkan jumlah jenis obat yang ingin diperiksa
    cout << "Masukkan jumlah jenis obat yang ingin dicek: ";
    cin >> jumlah_obat;

    // Mendeklarasikan variabel untuk menyimpan nama obat dan jumlah stoknya
    string nama_obat;
    int stok;

    // Melakukan perulangan sebanyak 'jumlah_obat' kali untuk memasukkan data tiap obat
    for (int i = 1; i <= jumlah_obat; i++) {
        // Meminta pengguna memasukkan nama obat ke-i
        cout << "\nMasukkan nama obat ke-" << i << ": ";
        cin >> nama_obat;
        
        // Meminta pengguna memasukkan jumlah stok untuk obat tersebut
        cout << "Masukkan stok " << nama_obat << ": ";
        cin >> stok;

        // Memeriksa apakah stok mencukupi (>= ambang_batas)
        if (stok >= ambang_batas) {
            // Jika stok mencukupi, tampilkan pesan sukses
            cout << "✅ Stok " << nama_obat << " mencukupi." << endl;
        } else {
            // Jika stok di
