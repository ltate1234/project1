#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int i;
	
	scanf("%d\n", &i);

	
	if(i > 25) {
	    i = i - 26;
	} 
	printf("%c", letters[i]);
	
	return 0;
}
