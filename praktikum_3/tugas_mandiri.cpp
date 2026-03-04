#include <iostream>

class RekeningBank {
    private:
        double saldo;

    public:
        RekeningBank(double saldo_bank){
            saldo = saldo_bank;
            std::cout << "Memasukkan saldo bank sebanyak " << saldo_bank << std::endl;
        }

        void setor(double jumlah){
            saldo += jumlah;
            std::cout << "Menambah saldo bank sebanyak " << jumlah << std::endl;
        }

        void tarik(double jumlah){
            if (jumlah <= saldo){
                saldo -= jumlah;
                std::cout << "Mengambil saldo bank sebanyak " << jumlah << std::endl;
            } else {
                std::cout << "Penarikan Gagal" << std::endl;
            }
        }
};

int main(){
    RekeningBank RekeningAqib(1000); // 1000 ini berarti 1 juta
    RekeningAqib.setor(2000);
    RekeningAqib.tarik(1000);
    RekeningAqib.tarik(10000);

    return 0;
}
