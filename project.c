#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int opt1;
    
        printf("Press 1 for Rotation Cipher Encryption. \nPress 2 for Rotation Cipher Decryption. \nPress 3 for Substitution Cipher Encryption. \nPress 4 for Substitution Cipher Decryption. \n");   //Prints the options to the console
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
	
	        printf("Enter a rotation key. (Will shift to the right): ");
	        scanf("%d", &key);
	    
	    while(key > 25)
	        {
	            key = key - 25;
	        }

        while(key < 0)
	        {
	            key = key + 25;
	        }
	
	    for(i = 0; i < letters[i]; i++)
	
	    letters[i] = letters[i] + key;

	    printf("%s", letters);
	}
	
	if(opt1 == 2)
	{
	    char letters[100];
	    int i, key;
	
	        printf("Enter Characters: ");
	        scanf("%s", letters);
	
	        printf("Enter a decryption key. (Will shift to the left): ");
	        scanf("%d", &key);
	
        while(key > 25)
	        {
	            key = key - 25;
	        }
	        
        while(key < 0)
	        {
	            key = key + 25;
	        }
	
	    for(i = 0; i < letters[i]; i++)
	
	    letters[i] = letters[i] - key;

	    printf("%s", letters);
	}
	
	return 0;
}
