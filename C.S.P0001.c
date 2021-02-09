#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(char a[])
{
	int i,j;
	i= strlen(a)-1;
		
		while (i>=0)
		{
			if(a[i]==' '&& i!=0)
			{
				j=i+1;
				while(a[j]!=' '&& a[j]!='\0')
				{
					printf("%c", a[j]);
    				j++;
    			}
    			printf(" ");
    		}
    		else if(i == 0)
    		{
    			j = i;
    			while(a[j] != ' ')
    			{
    				printf("%c", a[j]);
    				j++;
    			}
    		}
    		i--;
    	}
}
int main(int argc, char *argv[]) {
	int i,j;
	char a[100];
	char key;
	do
	{
		printf("Please Enter a String: ");
		gets(a);
		printf("The old String: %s\n",a);
		printf("The reversed string: ");
		reverse(a);
		fflush(stdin);
		printf("\nPress enter to continue another reverse, ESC to exit");
		key=getch();
	}while (key!=27);
	return 0;
}
