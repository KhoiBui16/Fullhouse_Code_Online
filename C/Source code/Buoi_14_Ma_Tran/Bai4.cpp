//14.4
#include <stdio.h>

int main() {
    int n, m, i, j, min, max;
    scanf("%d%d", &n, &m);

    int mat[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // t�m s? nh? nh?t v� luu tr? c�c v? tr� c?a n�
    min = mat[0][0];
    int min_row[n*m], min_col[n*m];
    int min_count = -1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
                min_count = 0;
                min_row[min_count] = i;
                min_col[min_count] = j;
            } else if (mat[i][j] == min) {
                min_count++;
                min_row[min_count] = i;
                min_col[min_count] = j;
            }
        }
    }
	
    // in ra s? nh? nh?t v� c�c v? tr� c?a n�
    printf("%d\n", min);
    for (i = 0; i <= min_count; i++) {
        printf("%d %d\n", min_row[i] + 1, min_col[i] + 1);
    }

    // t�m s? l?n nh?t v� luu tr? c�c v? tr� c?a n�
    max = mat[0][0];
    int max_row[n*m], max_col[n*m];
    int max_count = -1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
                max_count = 0;
                max_row[max_count] = i;
                max_col[max_count] = j;
            } else if (mat[i][j] == max) {
                max_count++;
                max_row[max_count] = i;
                max_col[max_count] = j;
            }
        }
    }

    // in ra s? l?n nh?t v� c�c v? tr� c?a n�
    printf("%d\n", max);
    for (i = 0; i <= max_count; i++) {
        printf("%d %d\n", max_row[i] + 1, max_col[i] + 1);
    }

    return 0;
}

