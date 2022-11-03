#include <stdio.h>
void change(int *p)
{
    *p = *p/2;
}
int main(void) {
	int i;
	scanf("%d",&i);
	change(&i);
	printf("%d\n",i);
	return 0;
}

#int a =10;
