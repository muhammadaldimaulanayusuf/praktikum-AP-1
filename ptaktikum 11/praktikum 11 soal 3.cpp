#include <iostream>
#include <string>

// Mendefinisikan tipe data record/struct untuk merepresentasikan barang
struct Barang {
    std::string kode;
    std::string nama;
    int jumlah;
    int hargaSatuan;
};

// Fungsi untuk menghitung total harga penjualan
int calculateTotalHarga(Barang barang[], int jumlahBarang) {
    int totalHarga = 0;
    for (int i = 0; i < jumlahBarang; ++i) {
        totalHarga += barang[i].jumlah * barang[i].hargaSatuan;
    }
    return totalHarga;
}

// Fungsi untuk menghitung keuntungan
double calculateKeuntungan(int totalHarga) {
    return 0.1 * totalHarga; // Keuntungan 10% dari total harga
}

int main() {
    const int jumlahBarang = 20;
    Barang dataPenjualan[jumlahBarang];

    // Input data penjualan
    for (int i = 0; i < jumlahBarang; ++i) {
        std::cout << "Data Barang ke-" << i + 1 << ":" << std::endl;
        std::cout << "Kode Barang: ";
        std::cin >> dataPenjualan[i].kode;
        std::cout << "Nama Barang: ";
        std::cin >> dataPenjualan[i].nama;
        std::cout << "Jumlah: ";
        std::cin >> dataPenjualan[i].jumlah;
        std::cout << "Harga Satuan: Rp.";
        std::cin >> dataPenjualan[i].hargaSatuan;
        std::cout << std::endl;
    }

    // Menghitung total harga penjualan
    int totalHarga = calculateTotalHarga(dataPenjualan, jumlahBarang);

    // Menghitung keuntungan
    double keuntungan = calculateKeuntungan(totalHarga);

    // Menampilkan hasil
    std::cout << "Total Harga Penjualan: Rp." << totalHarga << std::endl;
    std::cout << "Keuntungan: Rp." << keuntungan << std::endl;

    return 0;
}