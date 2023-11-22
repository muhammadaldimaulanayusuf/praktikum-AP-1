#include <iostream>
#include <cmath>

// Mendefinisikan tipe data record/struct untuk merepresentasikan titik
struct Point {
    double x;
    double y;
};

// Fungsi untuk menghitung jarak antara dua titik
double calculateDistance(Point p1, Point p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    // Input koordinat titik pertama
    Point point1;
    std::cout << "Masukkan koordinat titik pertama (x y): ";
    std::cin >> point1.x >> point1.y;

    // Input koordinat titik kedua
    Point point2;
    std::cout << "Masukkan koordinat titik kedua (x y): ";
    std::cin >> point2.x >> point2.y;

    // Menghitung jarak antara dua titik
    double distance = calculateDistance(point1, point2);

    // Menampilkan hasil
    std::cout << "\nJarak antara dua titik: " << distance << std::endl;

    return 0;
}