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
};
