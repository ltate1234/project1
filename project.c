#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int opt1;
    
    printf("Enter 1 for Rotation Cipher encryption. \nEnter 2 for Rotation Cipher decryption. \n");   //Prints the options
    scanf("%d", &opt1);     //Scans for the user input and assigns it to opt1
    
    if(opt1 > 2 || opt1 < 1)
    {
        printf("Please enter valid option.\n");
        while(opt1 > 2 || opt1 < 1)
        {
            scanf("%d", &opt1);
        }
    }
    
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
	    printf("Please enter a number between 0 and 25.\n");
	    while(key >= 26)
	    {
	        scanf("%d", &key);
	    }
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
	    printf("Please enter a number between 0 and 25.\n");
	    while(key >= 26)
	    {
	        scanf("%d", &key);
	    }
	}
	
	for(i = 0; i < 100 && letters[i] != '\0'; i++)
	letters[i] = letters[i] - key;

	printf("%s", letters);
	}
	
	
	return 0;
}
