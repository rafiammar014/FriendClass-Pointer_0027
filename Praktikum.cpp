#include <iostream>
using namespace std;
class LayangLayang;
class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void input() {
        cout << "\n--- Input Data Belah Ketupat ---" << endl;
        cout << "Masukkan Diagonal 1 : "; cin >> d1;
        cout << "Masukkan Diagonal 2 : "; cin >> d2;
        cout << "Masukkan Sisi       : "; cin >> sisi;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "--- Hasil Belah Ketupat ---" << endl;
        cout << "Luas Belah Ketupat     : " << luas() << endl;
        cout << "Keliling Belah Ketupat : " << keliling() << endl;
    }

    void aksesKelilingLayang(LayangLayang *l);
};

class LayangLayang {
private:
    double d1, d2, sisiPendek, sisiPanjang;

    friend class BelahKetupat;

public:
    void input() {
        cout << "\n--- Input Data Layang-Layang ---" << endl;
        cout << "Masukkan Diagonal 1   : "; cin >> d1;
        cout << "Masukkan Diagonal 2   : "; cin >> d2;
        cout << "Masukkan Sisi Pendek  : "; cin >> sisiPendek;
        cout << "Masukkan Sisi Panjang : "; cin >> sisiPanjang;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 2 * (sisiPendek + sisiPanjang);
    }

    void output() {
        cout << "--- Hasil Layang-Layang ---" << endl;
        cout << "Luas Layang-Layang     : " << luas() << endl;
        cout << "Keliling Layang-Layang : " << keliling() << endl;
    }
};

void BelahKetupat::aksesKelilingLayang(LayangLayang *l) {
    cout << "\n--- Friend Method: Akses Data Layang-Layang ---" << endl;
    double kel = 2 * (l->sisiPendek + l->sisiPanjang);
    cout << "Keliling Layang-Layang yang diakses: " << kel << endl;
}

int main() {
    LayangLayang *objLayang = new LayangLayang();
    BelahKetupat *objKetupat = new BelahKetupat();

    objLayang->input();
    objLayang->output();

    objKetupat->input();
    objKetupat->output();

    objKetupat->aksesKelilingLayang(objLayang);

    delete objLayang;
    delete objKetupat;

    return 0;
}