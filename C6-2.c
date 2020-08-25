// Created on 2020/7/23.
//本题要求实现一个计算Fibonacci数的简单函数，并利用其实现另一个函数，
// 输出两正整数m和n（0<m≤n≤10000）之间的所有Fibonacci数。
// 所谓Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。
//
//函数接口定义：
//int fib( int n );
//void PrintFN( int m, int n );
//其中函数fib须返回第n项Fibonacci数；函数PrintFN要在一行中输出给定范围[m, n]内的所有Fibonacci数，
// 相邻数字间有一个空格，行末不得有多余空格。如果给定区间内没有Fibonacci数，
// 则输出一行“No Fibonacci number”。
#include <stdio.h>

int fib(int n);

void PrintFN(int m, int n);

int main() {
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
//    scanf("%d", &t);   //调试fib函数
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n) {
    int front = 1, after = 1;
    int sum = 0;
    if (n < 3) {
        sum = 1;
        return sum;
    } else {
        for (int i = 0; i < n - 2; ++i) {
            sum = front + after;
            front = after;
            after = sum;
        }
        return sum;
    }
}

void PrintFN(int m, int n) {
    int i = 1, cnt = 0;
    while (fib(i) < m) {
        i++;
    }
    while (fib(i) <= n) {
        cnt++;
        printf("%d", fib(i));
        printf(" ");
        i++;
    }
    if (cnt == 0) {
        printf("No Fibonacci number");
    } else {
        printf("\b");
    }
    printf("\n");
}
//第一个人的解法
//int fib( int n ){
//    if(n==1||n==2)
//        return 1;
//
//    return fib(n-2)+fib(n-1);
//}
//void PrintFN( int m, int n ){
//    int i;
//    int k;
//    int first = 1;
//    if(m==1){
//        printf("1 1");
//        first = 0;
//        m = 2;
//    }
//    if(n==1){
//        printf("\n");
//        return ;
//    }
//    i=1;
//    while(fib(i)<m){
//        i++;
//    }
//    while((k = fib(i))<=n){
//        if(first==0){
//            printf(" ");
//        }else{
//            first = 0;
//        }
//        printf("%d",k);
//        i++;
//    }
//    if(first == 1){
//        printf("No Fibonacci number");
//    }
//    printf("\n");
//}

//第二个人的解法
//int fib(int n) {
//    int a = 1, b = 1, c = 0;
//    if (n == 1 || n == 2)
//        return a;
//    else {
//        for (int i = 0; i < n - 2; i++) {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//}
//
//void PrintFN(int m, int n) {
//    int i = 1, count = 0, flag = 1;  //flag为第一个输出数的标记
//    while (fib(i) < m) {
//        i++;
//    }
//    while (fib(i) <= n) {
//        count++;
//        if (flag) {
//            printf("%d", fib(i));
//            flag = 0;
//        } else {
//            printf(" %d", fib(i));
//        }
//        i++;
//    }
//    if (count == 0) {
//        printf("No Fibonacci number\n");
//    }
//}
