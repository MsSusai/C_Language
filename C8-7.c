//
// Created on 2020/8/10.
//ϰ��8-6 ɾ���ַ�
#include <stdio.h>

#define MAXN 20

void delchar(char *str, char c);
//void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main() {
    char str[MAXN], c;

    scanf("%c\n", &c);
//    ReadString(str);
    gets(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void delchar(char *str, char c) {
    char newstr[MAXN];
    int i = 0, k = 0;
    while (str[i] != '\0') {
        if (str[i] != c) {
            newstr[k] = str[i];
            k++;
        }
        i++;
    }
    newstr[k] = '\0';
    i = 0;
    while (newstr[i] != '\0') {
        str[i] = newstr[i];
        i++;
    }
    str[i] = '\0';
}
