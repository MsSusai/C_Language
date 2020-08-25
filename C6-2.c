// Created on 2020/7/23.
//����Ҫ��ʵ��һ������Fibonacci���ļ򵥺�������������ʵ����һ��������
// �����������m��n��0<m��n��10000��֮�������Fibonacci����
// ��νFibonacci���о���������һ��������ǰ����ĺͣ��ʼ���������Ϊ1�������С�
//
//�����ӿڶ��壺
//int fib( int n );
//void PrintFN( int m, int n );
//���к���fib�뷵�ص�n��Fibonacci��������PrintFNҪ��һ�������������Χ[m, n]�ڵ�����Fibonacci����
// �������ּ���һ���ո���ĩ�����ж���ո��������������û��Fibonacci����
// �����һ�С�No Fibonacci number����
#include <stdio.h>

int fib(int n);

void PrintFN(int m, int n);

int main() {
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
//    scanf("%d", &t);   //����fib����
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
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
//��һ���˵Ľⷨ
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

//�ڶ����˵Ľⷨ
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
//    int i = 1, count = 0, flag = 1;  //flagΪ��һ��������ı��
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
