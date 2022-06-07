#include <stdio.h>

int main(void)
{
	char i;
	label1:
	scanf("%d",&i);
	if( i >= 'a' && i <= 'z')
	    printf("1");
	else
	    printf("0");
	goto label1;
	return 0;
}
