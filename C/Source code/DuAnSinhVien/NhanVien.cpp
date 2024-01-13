#include <stdio.h>

struct NhanVien {
    char maNhanVien[10];
    char hoTen[50];
    float heSoLuong;
    int soNgayLamViec;
};

int main() {
    struct NhanVien nv;

    // Nh?p th�ng tin c?a nh�n vi�n
    scanf("%s", nv.maNhanVien);

    scanf("%[^\n]", nv.hoTen);

    scanf("%f", &nv.heSoLuong);

    scanf("%d", &nv.soNgayLamViec);

    // T�nh luong c?a nh�n vi�n
    float luong = nv.heSoLuong * 400000 + nv.soNgayLamViec * 50000;

    // In ra th�ng tin v� luong c?a nh�n vi�n
    printf("%s ", nv.maNhanVien);
    printf("%s ", nv.hoTen);
    printf("%.1f ", luong);

    return 0;
}

