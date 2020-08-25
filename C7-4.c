//
// Created on 2020/7/25.
//习题7-2 求一批整数中出现最多的个位数字
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count[9];
    int number, shuzi, max,digit;

    for (int i = 0; i < n; ++i) {       //输入数据
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 10; ++j) {      //计数器初始化
        count[j] = 0;
    }


    for (int k = 0; k < n; ++k) {       //取数
        number = a[k];
        while (number != 0) {           //取每一位数字
            shuzi = number % 10;
            for (int i = 0; i < 10; ++i) {   //判断数字是几
                if (i == shuzi) {
                    count[i] = count[i] + 1;
                }
            }
            number /= 10;
        }
    }

//    for (int m = 0; m < 10; ++m) {
//        printf("%d ", count[m]);
//    }

    for (int l = 0; l < 10; ++l) {         //判断出现最多的数
        for (int i = l; i < 10; ++i) {
            if (count[l] < count[i]) {
                max = i;
            }
        }
    }

    printf("%d:", count[max]);

    for (int m = 0; m < 10; ++m) {          //输出出现最多的数
        if (count[m] == count[max]) {
            printf(" %d", m);
        }
    }
    printf("\n");
    return 0;
}

//#include <stdio.h>
//int main(){
//    int n,digit;
//    int max;//max记录最多的出现次数
//    int num[10]={0};//num存放这一串数字中0~9出现的次数，数组下标对应数字
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%d",&digit);
//        while(digit>0){
//            switch(digit%10){
//                case 0: num[0]++; break;
//                case 1: num[1]++; break;
//                case 2: num[2]++; break;
//                case 3: num[3]++; break;
//                case 4: num[4]++; break;
//                case 5: num[5]++; break;
//                case 6: num[6]++; break;
//                case 7: num[7]++; break;
//                case 8: num[8]++; break;
//                case 9: num[9]++; break;
//            }
//            digit=digit/10;
//        }
//    }//循环输入，并记录每个数字出现的次数
//    max=num[0];//初始化最大值，以数字0出现的次数作为初值
//    for(int i=0;i<10;i++){
//        if(num[i]>max){
//            max=num[i];
//        }
//    }//遍历数组，记录整个数组中出现的最大次数
//    printf("%d:",max);
//    for(int i=0;i<10;i++){
//        if(num[i]==max){
//            printf(" %d",i);
//        }
//    }//将数组的各个数字出现的次数与最大次数比较，相同就输出
//    return 0;
//}