#include <iostream>
#include <string>

// Mendefinisikan Class
class Mobil {
    public: // Sementara menggunakan public agar mudah diakses
        std::string merk;
        std::string warna;
        int tahun;

        // Perilaku (Method)
        void nyalakanMesin() {
            std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;
        }
};

int main() {
    // Membuat Object 1 dari cetak biru Mobil  
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // Membuat Object 2 dari cetak biru yang sama  
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    // Membuat mobil3 yang berisi dengan mobil impian
    Mobil mobil3;
    mobil3.merk = "Lamborgini";
    mobil3.warna = "Kuning";
    mobil3.tahun = 2026;

    // Memanggil perilaku dari masing-masing object
    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();
    mobil3.nyalakanMesin();

    return 0;
}
