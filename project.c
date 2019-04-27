#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int option;
    
        printf("Press 1 for Rotation Cipher Encryption. \nPress 2 for Rotation Cipher Decryption. \nPress 3 for Substitution Cipher Encryption. \nPress 4 for Substitution Cipher Decryption. \n");   //Prints the options to the console
        scanf("%d", &option);     //Scans for the user input and assigns it to opt1
    
    while(option > 4 || option < 1)
    {
        if(option > 4 || option < 1)
        {
            printf("Please enter valid option.\n");
                while(option == 1 || option == 2 || option == 3 || option == 4)
                {
                    scanf("%d", &option);
                }
        }
        scanf("%d", &option);
    }
    
	if(option == 1)
	{
	    char letters[1024];
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

        if(letters[i] + key < 91)
        {
            letters[i] = letters[i] + key;
        }

        else if(letters[i] + key > 90)
        {
            letters[i] = (letters[i] - 26) + key;
        }
        
	    printf("%s", letters);
	}
	
	if(option == 2)
	{
	    char letters[1024];
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
	
	    if(letters[i] - key > 64)
        {
            letters[i] = letters[i] - key;
        }

        else if(letters[i] - key < 65)
        {
            letters[i] = (letters[i] + 26) - key;
        }

	    printf("%s", letters);
	}
	
	
	
	
	
	
	
	return 0;
}
