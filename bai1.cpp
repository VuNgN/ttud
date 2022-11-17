#include <iostream>
#include <algorithm>

using namespace std;

struct sinhvien
{
    string ma;
    string ten;
    double diem;
};

bool compare(sinhvien sv1, sinhvien sv2) {
    return sv1.diem < sv2.diem;
}

int main()
{
    long long n;
    sinhvien* bestSv;
    cout << "Nhap so sinh vien n = ";
    cin >> n;
    sinhvien sv[n];
    int e = sizeof(sv) / sizeof(sv[0]);
    for (long long i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap Ma SV: ";
        getline(cin, sv[i].ma);
        cout << "Nhap Ten SV: ";
        getline(cin, sv[i].ten);
        cout << "Nhap Diem: ";
        cin >> sv[i].diem;
    }
    cout << "Danh sach SV:" << endl;
    for (long long i = 0; i < n; i++)
    {
        cout << sv[i].ma << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
    }
    bestSv = max_element(sv, sv + n, compare);
    cout << "Cac Sinh vien co diem cao nhat:" << endl;
    for (long long i=0; i<n; i++)
    {
        if (sv[i].diem == bestSv->diem)
        cout << sv[i].ma << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
    }
}