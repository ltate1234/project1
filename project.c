#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char letters[100];
	int i, key;
	
	printf("Enter Key: ");
	scanf("%d", &key);
	
	printf("Enter Characters: ");
	scanf("%s", letters);
	
	if(key >= 26){
	    key = key - 26;
	}
	
	for(i = 0; i < 100 && letters[i] != '\0'; i++)
	letters[i] = letters[i] + key;

	printf("%s", letters);
	
	return 0;
}
