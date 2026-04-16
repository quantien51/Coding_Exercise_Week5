#include <iostream>

using namespace std;

struct PHANSO {
    int tuSo;
    int mauSo;
};

typedef struct PHANSO PHANSO;

PHANSO simplify(PHANSO& p) {
    int a = p.tuSo;
    int b = p.mauSo;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    p.tuSo /= gcd;
    p.mauSo /= gcd;
    return p;
}

PHANSO operator+(PHANSO p, PHANSO q) {
	//Tu code
}

PHANSO operator-(PHANSO p, PHANSO q) {
    //Tu code
}

PHANSO operator*(PHANSO p, PHANSO q) {
    //Tu code
}

PHANSO operator/(PHANSO p, PHANSO q) {
    //Tu code
}

bool operator==(PHANSO p, PHANSO q) {
    //Tu code
}

bool operator!=(PHANSO p, PHANSO q) {
    //Tu code
}
bool operator>(PHANSO p, PHANSO q) {
    //Tu code
}
bool operator<(PHANSO p, PHANSO q) {
    //Tu code
}
bool operator>=(PHANSO p, PHANSO q) {
	//Tu code
}

bool operator<=(PHANSO p, PHANSO q) {
    //Tu code
}
PHANSO operator+=(PHANSO& p, PHANSO q) {
    p.tuSo = p.tuSo * q.mauSo + q.tuSo * p.mauSo;
    p.mauSo = p.mauSo * q.mauSo;
    return p;
}
PHANSO operator-=(PHANSO& p, PHANSO q) {
    p.tuSo = p.tuSo * q.mauSo - q.tuSo * p.mauSo;
    p.mauSo = p.mauSo * q.mauSo;
    return p;
}

PHANSO findMax(PHANSO a[], int n) {
    PHANSO max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i].tuSo * max.mauSo > max.tuSo * a[i].mauSo) {
            max = a[i];
        }
    }
    return max;
}
PHANSO sumFrac(PHANSO a[], int n) {
    //Tu code
}
void fractionSort(PHANSO a[], int n) {
    //Tu code
}

void displayFraction(PHANSO frac) {
    if (frac.mauSo < 0) {
        frac.mauSo = -frac.mauSo;
        frac.tuSo = -frac.tuSo;
    }
    cout << frac.tuSo << "/" << frac.mauSo;
}

int main() {
    PHANSO a[] = { {1, 2}, {1, 3}, {1, 5}, {1, 7},
        {1, 11}, {1, 13}, {1, 17}, {1, 19},
        {1, 23}, {1, 29} };
    int n = sizeof(a) / sizeof(a[0]);
    //Tim phan so lon nhat
    cout << "Phan so lon nhat trong mang la: ";
    displayFraction(findMax(a, n));
    cout << "\n";
    //Tim tong cac phan so
    cout << "Tong cac phan so la: ";
    displayFraction(sumFrac(a, n));
    cout << "\n";
    //Sap xep cac phan so theo thu tu tang dan
    fractionSort(a, n);
    cout << "Sap xep cac phan so theo thu tu tang dan la: ";
    for (int i = 0; i < n; i++) {
        displayFraction(a[i]);
        cout << " ";
    }
    cout << "\n";
}