#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char addchoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf("%d", &n,1);
	scanf("%c", &addchoice,1);
	fflush(stdin);
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:");
	scanf("%c", &addchoice);

	switch (addchoice)
	{
	case 'O':
		Sum = Odd(n);
		break;
	case 'E':
		Sum = Even(n);
		break;
	case 'I':
		Sum = TotalSum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;

	}
	printf("�`�M��%d\n", Sum);
	system("pause");
	return 0;

}
int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}