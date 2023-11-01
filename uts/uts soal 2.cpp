#include <iostream>
using namespace std;

double hitungTabunganIDR(double tabunganUSD, double tabunganEuro, double kursUSD, double kursEuro) {
    double tabunganIDR = (tabunganUSD * kursUSD) + (tabunganEuro * kursUSD * kursEuro);
    return tabunganIDR;
}

double hitungSisaUang(double tabunganIDR, double hargaMobil) {
    double sisaUang = tabunganIDR - hargaMobil;
    return sisaUang;
}

int main() {
    double tabunganUSD = 12000.0;
    double tabunganEuro = 20000.0;
    double kursUSD = 15000.0;
    double kursEuro = 0.997;
    double hargaMobil = 425000000.0;

    double tabunganIDR = hitungTabunganIDR(tabunganUSD, tabunganEuro, kursUSD, kursEuro);
    double sisaUang = hitungSisaUang(tabunganIDR, hargaMobil);

    cout << "Tabungan Pak Anto dalam Rupiah setelah konversi: " << tabunganIDR << " IDR" << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: " << sisaUang << " IDR" << endl;

    return 0;
}
