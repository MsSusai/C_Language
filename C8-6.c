//
// Created on 2020/8/9.
//习题8-5 使用函数实现字符串部分复制 (20分)
#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
//void ReadString( char s[] ); /* 由裁判实现，略去不表 */

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

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s ){
    int i = 0;
    while (t[m-1]!='\0'){
        s[i] = t[m-1];
        m++;
        i++;
    }
    s[i] = '\0';
}