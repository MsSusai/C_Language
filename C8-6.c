//
// Created on 2020/8/9.
//ϰ��8-5 ʹ�ú���ʵ���ַ������ָ��� (20��)
#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
//void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    gets(t);
//    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void strmcpy( char *t, int m, char *s ){
    int i = 0;
    while (t[m-1]!='\0'){
        s[i] = t[m-1];
        m++;
        i++;
    }
    s[i] = '\0';
}