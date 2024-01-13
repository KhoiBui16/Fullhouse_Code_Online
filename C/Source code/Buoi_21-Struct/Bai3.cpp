//21.3
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[10];
    char name[50];
    int area;
    float math;
    float physics;
    float chemistry;
    float priority;
} Student;

int main() {
    Student st;
    scanf("%s\n", st.id);
    fgets(st.name, 50, stdin);
    st.name[strcspn(st.name, "\n")] = 0;
    scanf("%f %f %f", &st.math, &st.physics, &st.chemistry);

    // Tính di?m uu tiên khu v?c
    if (strncmp(st.id, "KV1", 3) == 0) {
        st.priority = 0.5;
        st.area = 1;
    } else if (strncmp(st.id, "KV2", 3) == 0) {
        st.priority = 1;
        st.area = 2;
    } else if (strncmp(st.id, "KV3", 3) == 0) {
        st.priority = 2;
        st.area = 3;
    } else {
        st.priority = 0;
    }

    // Tính t?ng di?m
    float total = st.math + st.physics + st.chemistry + st.priority;

    // In ra thông tin
    printf("%s %s %d", st.id, st.name, st.area);
    if ((int)total == total) {
        printf(" %.0f", total);
    } else {
        printf(" %.1f", total);
    }
    if (total >= 26) {
        printf(" TRUNG TUYEN");
    } else {
        printf(" TRUOT");
    }

    return 0;
}

