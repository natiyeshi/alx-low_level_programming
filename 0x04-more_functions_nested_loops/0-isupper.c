#include <stdio.h>
#include <ctype.h>
int file(int x){

	if (isupper(x))
		return 1;
	
	return 0;
}

int main(void)
{
	char x = 'z';
	char y ='Z';
	int file1 = file(x);
	printf("%c is %c",x,file1);
	int file2 =file(y);
	printf("%c is %c",y, file2);
	return 0;
}
