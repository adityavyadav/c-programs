#include <stdio.h>

int main() {
    int i=1;
	int j=1;
	int n=5;

    while(i<=n) 
	{
        while(j<=i) 
		{
            printf("%d",i);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}


