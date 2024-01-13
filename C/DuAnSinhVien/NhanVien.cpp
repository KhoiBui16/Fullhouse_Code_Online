#include <stdio.h>

struct NhanVien {
    char maNhanVien[10];
    char hoTen[50];
    float heSoLuong;
    int soNgayLamViec;
};

int main() {
    struct NhanVien nv;

    // Nh?p thông tin c?a nhân viên
    scanf("%s", nv.maNhanVien);

    scanf("%[^\n]", nv.hoTen);

    scanf("%f", &nv.heSoLuong);

    scanf("%d", &nv.soNgayLamViec);

    // Tính luong c?a nhân viên
    float luong = nv.heSoLuong * 400000 + nv.soNgayLamViec * 50000;

    // In ra thông tin và luong c?a nhân viên
    printf("%s ", nv.maNhanVien);
    printf("%s ", nv.hoTen);
    printf("%.1f ", luong);

    return 0;
}

