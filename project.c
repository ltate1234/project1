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
	
	        printf("Enter Word: ");
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
	
	        printf("Enter Word: ");
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
	
	if(option == 3)
	{
	    char letters[1024];
	    int i;
	    
	        printf("Enter Characters: ");
	        scanf("%s", letters);
	        
        for(i = 0; i < letters[i]; i++)
	        
        switch(letters[i])
        {
            case 'A': letters[i] = 'Q';break;
            case 'B': letters[i] = 'W';break;
            case 'C': letters[i] = 'E';break;
            case 'D': letters[i] = 'R';break;
            case 'E': letters[i] = 'T';break;
            case 'F': letters[i] = 'Y';break;
            case 'G': letters[i] = 'U';break;
            case 'H': letters[i] = 'I';break;
            case 'I': letters[i] = 'O';break;
            case 'J': letters[i] = 'P';break;
            case 'K': letters[i] = 'A';break;
            case 'L': letters[i] = 'S';break;
            case 'M': letters[i] = 'D';break;
            case 'N': letters[i] = 'F';break;
            case 'O': letters[i] = 'G';break;
            case 'P': letters[i] = 'H';break;
            case 'Q': letters[i] = 'J';break;
            case 'R': letters[i] = 'K';break;
            case 'S': letters[i] = 'L';break;
            case 'T': letters[i] = 'Z';break;
            case 'U': letters[i] = 'X';break;
            case 'V': letters[i] = 'C';break;
            case 'W': letters[i] = 'V';break;
            case 'X': letters[i] = 'B';break;
            case 'Y': letters[i] = 'N';break;
            case 'z': letters[i] = 'M';break;
        }
	        
	
        printf("%s", letters);
	
	}
	
    if(option == 4)
	{
	    char letters[1024];
	    int i;
	    
	        printf("Enter Characters: ");
	        scanf("%s", letters);
	        
        for(i = 0; i < letters[i]; i++)
	        
        switch(letters[i])
        {
            case 'Q': letters[i] = 'A';break;
            case 'W': letters[i] = 'B';break;
            case 'E': letters[i] = 'C';break;
            case 'R': letters[i] = 'D';break;
            case 'T': letters[i] = 'E';break;
            case 'Y': letters[i] = 'F';break;
            case 'U': letters[i] = 'G';break;
            case 'I': letters[i] = 'H';break;
            case 'O': letters[i] = 'I';break;
            case 'P': letters[i] = 'J';break;
            case 'A': letters[i] = 'K';break;
            case 'S': letters[i] = 'L';break;
            case 'D': letters[i] = 'M';break;
            case 'F': letters[i] = 'N';break;
            case 'G': letters[i] = 'O';break;
            case 'H': letters[i] = 'P';break;
            case 'J': letters[i] = 'Q';break;
            case 'K': letters[i] = 'R';break;
            case 'L': letters[i] = 'S';break;
            case 'Z': letters[i] = 'T';break;
            case 'X': letters[i] = 'U';break;
            case 'C': letters[i] = 'V';break;
            case 'V': letters[i] = 'W';break;
            case 'B': letters[i] = 'X';break;
            case 'N': letters[i] = 'Y';break;
            case 'M': letters[i] = 'Z';break;
        }
	        
	
        printf("%s", letters);
	
	}
	
	return 0;
}
