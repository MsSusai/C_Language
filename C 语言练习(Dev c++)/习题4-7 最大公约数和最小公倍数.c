//���Լ��=����֮��/��С������������ֻҪ���һ����
//��һ����Ȼͨ���򵥵ļ���������ˡ�
//շת�����									
//��������a��b��
// a%b������c
// ��c=0����b��Ϊ���������Լ��
// ��c��0����a=b��b=c���ٻ�ȥִ��
//������35��15�����Լ������Ϊ��
//35��15 ��5��,15��5��0��5��Ϊ���Լ��
 
#include <stdio.h>  
#include <math.h>
 
int main(){       //�������������ֵ������ ����0֮����
	int m,n;
	scanf("%d %d",&m,&n);
	int yushu;
	yushu=m%n;
	int  x;
	x=m*n;//��¼m*nΪ�����󹫱��� 
	
	if(yushu==0){
		printf("%d %d",n,x/n);
	}else{
		
		while(yushu!=0){
			m=n;
			n=yushu;
			yushu=m%n;		 
		}
		printf("%d %d",n,x/n);
	}					         
    return 0;  
 } 
 
 
