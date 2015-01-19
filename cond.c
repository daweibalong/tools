#include <stdio.h>
#include <stdlib.h>

#define cond_begin 				do{
#define cond_end   				}while(0);
#define cond_case(co, action) 	if(co) {action;break;}
#define cond_else(action) 		action;

int main()
{
	int a = 1;

	for (;;)
	{
		scanf("%d", &a);
		cond_begin
			cond_case(a == 0, printf("%d\n", a);
							  printf("a==0\n");)
			cond_case(a == 1, printf("%d\n", a);
							  printf("a==1\n");)
			cond_case(a == 2, printf("a==2\n");
					  		  printf("default2\n"))
			cond_else(break;)
		cond_end
	}	

	return 0;
}
