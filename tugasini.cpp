#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang{
private:
    double d1, d2, sisi1, sisi2;

public:
    void setD1(double pD1) { d1 = pD1; }
    void setD2(double pD2) { d2 = pD2; }
    void setSisi1(double pSisi1) { sisi1 = pSisi1; }
    void setSisi2(double pSisi2) { sisi2 = pSisi2; }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (sisi1 + sisi2);
    }

    void outputData() {
        cout << "Luas Layang-Layang: " << hitungLuas() << endl;
        cout << "Keliling Layang-Layang: " << hitungKeliling() << endl;
    }

    friend double kelilingLayang(LayangLayang &l, BelahKetupat &b);
};

class BelahKetupat {
private:
    double sisi, d1, d2;

public:
    void setSisi(double pSisi) { sisi = pSisi; }
    void setD1(double pD1) { d1 = pD1; }
    void setD2(double pD2) { d2 = pD2; }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }

    void outputData() {
        cout << "Luas Belah Ketupat: " << hitungLuas() << endl;
        cout << "Keliling Belah Ketupat: " << hitungKeliling() << endl;
    }

    friend double kelilingLayang(LayangLayang &l, BelahKetupat &b);
};

double kelilingLayang(LayangLayang &l, BelahKetupat &b) {
    return 2 * (l.sisi1 + l.sisi2);
}

int main() {
    LayangLayang layang;
    layang.setD1(10);
    layang.setD2(8);
    layang.setSisi1(6);
    layang.setSisi2(4);
    layang.outputData();

    BelahKetupat ketupat;
    ketupat.setSisi(5);
    ketupat.setD1(8);
    ketupat.setD2(6);
    ketupat.outputData();

    cout << "Keliling Layang-Layang: " << kelilingLayang(layang, ketupat) << endl;
}
