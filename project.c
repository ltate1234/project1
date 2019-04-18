#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int opt1;
    
	printf("Enter 1 for Cipher encryption: \nEnter 2 for Cipher decryption: \n");
	scanf("%d", &opt1);
    
	if(opt1 == 1)
	{
	char letters[100];
	int i, key;
	
	printf("Enter Characters: ");
	scanf("%s", letters);
	
	printf("Enter Shift Key: ");
	scanf("%d", &key);
	
	if(key >= 26)
	{
	    key = key - 26;
	}
	
	for(i = 0; i < 100 && letters[i] != '\0'; i++)
	letters[i] = letters[i] + key;

	printf("%s", letters);
	}
	
	if(opt1 == 2)
	{
	    char letters[100];
	int i, key;
	
	printf("Enter Characters: ");
	scanf("%s", letters);
	
	printf("Enter Decryption Key: ");
	scanf("%d", &key);
	
	if(key >= 26)
	{
	    key = key - 26;
	}
	
	for(i = 0; i < 100 && letters[i] != '\0'; i++)
	letters[i] = letters[i] - key;

	printf("%s", letters);
	}
	
	if(opt1 != 1 || 2)
	{
	    printf("Please enter a valid option.");
	}
	
	return 0;
}
