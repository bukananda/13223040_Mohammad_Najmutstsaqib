#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main(){
    std::vector<double> sensor;

    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);
    for (int i=0; i < sensor.size(); i++){
        sensor[i] *= 1.1;
    };

    std::ofstream fileHasil("hasil_kalibrasi.txt");
    if (fileHasil.is_open()) {
        for (int i=0; i < sensor.size(); i++){
            fileHasil << "Nilai sensor: " << sensor[i] << "\n";
        };
        fileHasil.close();
        std::cout << "Buka file hasil_kalkulasi.txt untuk melihat hasil dari sensornya yang telah dikalikan 1.1" << std::endl;
    };
    return 0;
}
