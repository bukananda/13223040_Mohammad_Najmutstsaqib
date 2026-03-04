#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

class Partikel {
private:
    double x, y;
    double jarak_pusat;

public:
    Partikel(double pos_x, double pos_y) : x(pos_x), y(pos_y), jarak_pusat(0.0) {}

    void hitungJarak() {
        double acuan_x, acuan_y;
        acuan_x = 5.0;
        acuan_y = 5.0;
        jarak_pusat = std::sqrt(((x-acuan_x) * (x-acuan_x)) + ((y-acuan_y) * (y-acuan_y)));
    }

    // Fungsi Getter agar main() bisa membaca data
    double getX() const { return x; }
    double getY() const { return y; }
    double getJarak() const { return jarak_pusat; }
};

int main() {
    std::vector<Partikel> kumpulan_partikel;
    std::ifstream fileBaca("koordinat_mentah.txt");
    
    std::string h1, h2;
    double tx, ty;

    if (fileBaca >> h1 >> h2) { // Baca header sekaligus cek file
        while (fileBaca >> tx >> ty) {
            kumpulan_partikel.push_back(Partikel(tx, ty));
        }
        fileBaca.close();
    } else {
        std::cerr << "Gagal membuka file atau format salah!" << std::endl;
        return 1;
    }

    // FASE KOMPUTASI: Menggunakan referensi (&) agar data asli berubah
    for (auto &p : kumpulan_partikel) {
        p.hitungJarak();
    }

    // FASE I/O TULIS
    std::ofstream fileHasil("hasil_jarak.txt");
    if (fileHasil.is_open()) {
        int counter = 1;
        for (const auto &p : kumpulan_partikel) {
            fileHasil << "Partikel " << counter++ 
                      << " | Posisi: (" << p.getX() << ", " << p.getY() << ") " 
                      << "| Jarak: " << p.getJarak() << "\n";
        }
        fileHasil.close();
        std::cout << "=> Selesai! Cek 'hasil_jarak.txt'" << std::endl;
    }

    return 0;
}
