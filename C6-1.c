//����Ҫ��ʵ��һ�������������Ӻ͵ļ򵥺�������������ʵ����һ��������
// �����������m��n��0<m��n��10000��֮���������������ν�������Ǹ���ǡ�õ��ڳ������������֮�͡�
// ���磺6=1+2+3������1��2��3Ϊ6�����ӡ�
//
//�����ӿڶ��壺
//int factorsum( int number );
//void PrintPN( int m, int n );
//���к���factorsum�뷵��int number�����Ӻͣ�
// ����PrintPNҪ�������������Χ[m, n]��ÿ�������������ۼ���ʽ�ķֽ�ʽ��ÿ������ռһ�У�
// ��ʽΪ������ = ����1 + ����2 + ... + ����k�����������������Ӿ�������˳��������������������û��������
// �����һ�С�No perfect number����
#include <stdio.h>

int factorsum(int number);

void PrintPN(int m, int n);

int main() {
    int i, m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int factorsum(int number) {
    int flag = 0;
    if (number == 1) {
        flag = 1;
    }
    for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            flag += i;
        }
    }
    return flag;
}

void PrintPN(int m, int n) {
    int count = 0;
    for (int i = m; i <= n; ++i) {
        if (factorsum(i) == i) {
            printf("%d = 1", i);
            for (int j = 2; j < i; ++j) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
            count++;
        }
    }
    if (count == 0) {
        printf("No perfect number");
    }
}

//int factorsum(int number) {
//    int flag = 0;
//    if (number == 1)
//        return 1;
//    for (int i = 1; i < number; i++)
//        if (number % i == 0)
//            flag += i;
//    return flag;
//}
//
//
//void PrintPN(int m, int n) {
//    int count = 0;
//    for (int i = m; i <= n; i++) {
//        if (factorsum(i) == i) {
//            printf("%d = 1", i);
//            for (int j = 2; j < i; j++)
//                if (i % j == 0)
//                    printf(" + %d", j);
//            printf("\n");
//            count++;
//        }
//    }
//    if (count == 0)
//        printf("No perfect number");
//}

