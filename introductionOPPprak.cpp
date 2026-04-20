#include <iostream>
using namespace std;

class Barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "TanggalProduksi : " << tanggalProduksi << endl;
        cout << endl;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "kipas";
    elektronik.jumlah = 55;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "2007-02-02";

    elektronik.printData();

    Barang nonElektronik;
    nonElektronik.nama = "kasur";
    nonElektronik.jumlah = 30;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = "2009-03-03";

    nonElektronik.printData();
}
 
    