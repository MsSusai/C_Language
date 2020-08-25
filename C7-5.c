//
// Created on 2020/7/25.
//习题7-3 判断上三角矩阵
#include <stdio.h>

int main() {
    int geshu;
    scanf("%d", &geshu);
    int shu = geshu;
    int n;
    int b[20] = {0};
    int i = 0;
    while (geshu != 0) {
        scanf("%d", &n);
        int a[n][n];
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                scanf("%d", &a[j][k]);
            }
        }
        if (n == 1) {
            if (a[0][0] == 0) {
                b[i] = 1;
            } else {
                b[i] = 0;
            }
        } else {
            for (int l = 0; l < n; ++l) {
                for (int j = 0; j < n; ++j) {
                    if (l > j) {
                        if (a[l][j] == 0) {
                            b[i] = 1;
                        } else {
                            b[i] = 0;
                            goto out;
                        }
                    }
                }
            }
        }
        out:
        geshu--;
        i++;
    }

    for (int m = 0; m < shu; ++m) {
        if (b[m] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

//#include <stdio.h>
//int main (void){
//    int n;//矩阵个数
//    scanf("%d",&n);
//    int i, j, k;
//    int a[10][10];
//    int b[100] = {0};//定义一个数组，专门存放判断结果
//    for(k = 0; k <n; k++){//输入数组和判断都要在一个循环中完成
//        int m;
//        scanf("%d", &m);
//
//        for(i = 0; i < m; i++)
//            for(j = 0; j < m; j++)
//                scanf("%d", &a[i][j]);
//        //输入结束,开始判断
//        for(i = 0; i < m; i++){
//            for(j = 0; j < m; j++){
//                if(i > j && a[i][j] != 0) b[k] = -1;
//            }
//        }
//    }
//    //利用b[k]数组作为判断标准
//    for(k = 0; k < n; k++){
//        if(b[k] == -1) printf("NO\n");
//        else printf("YES\n");
//    }
//    return 0;
//}
