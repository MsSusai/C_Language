//
// Created on 2020/7/28.
//œ∞Ã‚7-5 ’“∞∞µ„ (20∑÷)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[6][6] = {0};
    int k = 0;
    int jishu[6][6] = {0};


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }


    int xiabiao_y = 0, xiabiao_x = 0;
    while (k < n) {
        int max_x = a[k][0];
        for (int i = 0; i < n; ++i) {
            if (max_x < a[k][i]) {
                max_x = a[k][i];
                xiabiao_x = k;
                xiabiao_y = i;
            }
        }
        jishu[xiabiao_x][xiabiao_y] = 1;
        for (int j = 0; j < n; ++j) {
            if (max_x > a[j][xiabiao_y]) {
                jishu[xiabiao_x][xiabiao_y] = 0;
                break;
            }
        }
        k++;
    }
    int x=0,y=0,flag=0;
    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < n; ++i) {
            if (jishu[l][i] == 1) {
                flag = 1;
                x=l;
                y=i;
            }
        }
    }
    if (flag==1){
        printf("%d %d\n", x, y);
    } else{
        printf("NONE\n");
    }
    return 0;
}
