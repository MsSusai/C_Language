//����Ҫ��ʵ��һ��ͳ��������ָ�����ֵĸ����ļ򵥺�����
//�����ӿڶ��壺
//int CountDigit( int number, int digit );
//����number�ǲ����������͵�������digitΪ[0, 9]�����ڵ�����������CountDigitӦ����number��digit���ֵĴ�����
#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int CountDigit( int number, int digit )
{
	int i=0,j=0;
	if(number<=0){
		number = -number;
	}
	do
	{
		i = number%10;
		if(i==digit)
		{
			j++;
		}
		number/=10;
	}while(number!=0);
	return j;
}
