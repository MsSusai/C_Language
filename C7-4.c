//
// Created on 2020/7/25.
//ϰ��7-2 ��һ�������г������ĸ�λ����
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count[9];
    int number, shuzi, max,digit;

    for (int i = 0; i < n; ++i) {       //��������
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 10; ++j) {      //��������ʼ��
        count[j] = 0;
    }


    for (int k = 0; k < n; ++k) {       //ȡ��
        number = a[k];
        while (number != 0) {           //ȡÿһλ����
            shuzi = number % 10;
            for (int i = 0; i < 10; ++i) {   //�ж������Ǽ�
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

    for (int l = 0; l < 10; ++l) {         //�жϳ���������
        for (int i = l; i < 10; ++i) {
            if (count[l] < count[i]) {
                max = i;
            }
        }
    }

    printf("%d:", count[max]);

    for (int m = 0; m < 10; ++m) {          //�������������
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
//    int max;//max��¼���ĳ��ִ���
//    int num[10]={0};//num�����һ��������0~9���ֵĴ����������±��Ӧ����
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
//    }//ѭ�����룬����¼ÿ�����ֳ��ֵĴ���
//    max=num[0];//��ʼ�����ֵ��������0���ֵĴ�����Ϊ��ֵ
//    for(int i=0;i<10;i++){
//        if(num[i]>max){
//            max=num[i];
//        }
//    }//�������飬��¼���������г��ֵ�������
//    printf("%d:",max);
//    for(int i=0;i<10;i++){
//        if(num[i]==max){
//            printf(" %d",i);
//        }
//    }//������ĸ������ֳ��ֵĴ������������Ƚϣ���ͬ�����
//    return 0;
//}