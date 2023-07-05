#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x, y;

public:
    bidangDatar() {
        x = 0;
        y = 0;
    }

    virtual void input() {}
    virtual float Luas(int a) { return 0; }
    virtual float Keliling(int a) { return 0; }
    virtual void cekUkuran() { cout << "Ukuran belum ditentukan" << endl; }

    void setX(int a) {
        this->x = a;
    }

    int getX() {
        return x;
    }

    void setY(int a) {
        this->y = a;
    }

    int getY() {
        return y;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        int jejari;
        cout << "Masukkan jejari : ";
        cin >> jejari;
        setX(jejari);
    }

    float Luas(int a) {
        return 3.14 * a * a;
    }

    float Keliling(int a) {
        return 2 * 3.14 * a;
    }

    //void cekUkuran() {
    //    float keliling = Keliling(getX());
    //    if (keliling > 40)
    //        cout << "Ukuran lingkaran adalah Besar" << endl;
    //    else if (keliling < 20)
    //        cout << "Ukuran lingkaran adalah Sedang" << endl;
    //    else if (keliling < 10)
    //        cout << "Ukuran lingkaran adalah Kecil" << endl;
    //}

    void cekUkuranku() {
        float keliling = Keliling(getX());
        if (keliling < 10)
            cout << "Ukuran lingkaran adalah Kecil" << endl;
        else if (keliling >= 10 && keliling < 40)
            cout << "Ukuran lingkaran adalah Sedang" << endl;
        else if (keliling > 40)
            cout << "Ukuran lingkaran adalah Becil" << endl;
    }

};

class Persegipanjang : public bidangDatar {
public:
    void input() {
        int panjang, lebar;
        cout << "Masukkan panjang : ";
        cin >> panjang;
        setX(panjang);
        cout << "Masukkan lebar : ";
        cin >> lebar;
        setY(lebar);
    }

    float Luas(int a) {
        return a * getY();
    }

    float Keliling(int a) {
        return 2 * (a + getY());
    }
    
    //void cekUkuran() {
    //    float keliling = Keliling(getX());
    //    if (keliling > 40)
    //        cout << "Ukuran persegi panjang adalah Besar" << endl;
    //    else if (keliling < 20)
    //        cout << "Ukuran persegi panjang adalah Sedang" << endl;
    //    else if (keliling < 10)
    //        cout << "Ukuran persegi panjang adalah Kecil" << endl;
    //}

    void cekUkuranku() {
        float keliling = Keliling(getX());
        if (keliling <10)
            cout << "Ukuran persegi panjang adalah Kecil" << endl;
        else if (keliling >= 10 && keliling < 40)
            cout << "Ukuran persegi panjang adalah Sedang" << endl;
        else if (keliling >= 40)
            cout << "Ukuran persegi panjang adalah Besar" << endl;
    }
};

int main() {
    char ulang;
    do {
        cout << "Lingkaran dibuat" << endl;
        Lingkaran lingkaran;
        lingkaran.input();
        cout << "Luas Lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
        cout << "Keliling Lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;
        lingkaran.cekUkuranku();
        cout << "\n" << endl;

        cout << "Persegi panjang dibuat" << endl;
        Persegipanjang persegipanjang;
        persegipanjang.input();
        cout << "Luas Persegi Panjang = " << persegipanjang.Luas(persegipanjang.getX()) << endl;
        cout << "Keliling Persegi Panjang = " << persegipanjang.Keliling(persegipanjang.getX()) << endl;
        persegipanjang.cekUkuranku();
        cout << "\n" << endl;

        cout << "Apakah Anda ingin mengulang program? (Y/N): ";
        cin >> ulang;  
        cout << "\n" << endl;
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}