#include<stdio.h>
#include<stdlib.h>


void Activities(int s[], int f[], int n)
{
	int i, j;
	i = 0;
	printf("%d",i );
	for (j = 1; j < n; j++)
        {
		if (s[j] >= f[i])
		 {
			printf("%d ", j);
			i = j;
		}
	}
}
int main()
{
	int s[] = {1,3,0,53,5,6,8,8,2,12};
	int f[] = {4,5,6,7,8,9,10,11,12,13,14};
	int n = sizeof(s) / sizeof(s[0]);
	Activities(s, f, n);
	return 0;
}
