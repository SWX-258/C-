#include<stdio.h>

main()
{ 
	printf("Hello World\n");/*��ӡ�������*/
	int faher,celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	faher = lower;
	while (faher <= upper)
	{
		celsius = 5 * (faher - 32) / 9;
		printf("%d\t%d\n", faher, celsius);
		faher = faher + step;
		
	}
}