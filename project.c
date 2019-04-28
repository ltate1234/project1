/*
The program once compiled and run will give you 4 options each stating what they do and how to select them, 
if any number that isn't listed but selected will ask you to try again. 
After the selected number press the enter key. You will then be asked using only captial letters to enter a single word and then press enter for next step, 
then depending on which cipher selected will require an encryption or decryption key and then press enter for the final result.
*/

#include <stdio.h>      //Includes the headers so the code works.
#include <stdlib.h>
 
int main()      //The function that is used for the main code.
{
    int option;     //Initialising the integer 'option'.
    
        printf("Press 1 for Rotation Cipher Encryption. \nPress 2 for Rotation Cipher Decryption. \nPress 3 for Substitution Cipher Encryption. \nPress 4 for Substitution Cipher Decryption. \n");   //Prints the options to the console while making a newline after each sentence.
        scanf("%d", &option);     //Scans for the user input and addresses it to option.
    
    while(option > 4 || option < 1)     //A while loop that will repeat if the user enters an integer larger than 4 or smaller than 1.
    {
        if(option > 4 || option < 1)        //An if statement that only continues if the user input is more than 4 or less than 1.
        {
            printf("Please enter valid option.\n");     //Prints the text followed by a newline after the user has entered a number larger than 4 or less than 1.
        }
        scanf("%d", &option);    //Scans for the users input then addresses it to integer option and will continue to do so until the while loop is false.   
    }
    
	if(option == 1)     //If statement that continues if option from the user input is equal to 1.
	{
	    char letters[1024];     //Initialising the array 'letters' with size of 1024.
	    int i, key;     //Initialising the integers 'i' and 'key'.
	
	        printf("Enter Word (Using only capital letters!): ");       //Prints the text for the user to read.
	        scanf("%s", letters);       //Scans for the users input and then copies it to the 'letters' array.
	
	        printf("Enter a rotation key. (Will shift to the right): ");
	        scanf("%d", &key);
	    
	    while(key > 25)     //The while loop checks if the key is larger than 25 and will repeat until statement is false.
	        {
	            key = key - 25;     //Assigns 'key' - 25 to 'key' and will repeat until while loop is false, this allows the key to be any integer and still work in the cipher.
	        }

        while(key < 0)
	        {
	            key = key + 25;
	        }
	
	    for(i = 0; i < letters[i]; i++)     //

        if(letters[i] + key < 91)       //
        {
            letters[i] = letters[i] + key;      //
        }

        else if(letters[i] + key > 90)      //
        {
            letters[i] = (letters[i] - 26) + key;       //
        }
        
	    printf("%s", letters);      //
	}
	
	if(option == 2)     //
	{
	    char letters[1024];     //
	    int i, key;     //
	
	        printf("Enter Word (Using only capital letters!): ");     //
	        scanf("%s", letters);       //
	
	        printf("Enter a decryption key. (Will shift to the left): ");       //
	        scanf("%d", &key);      //
	
        while(key > 25)     //
	        {
	            key = key - 25;     //
	        }
	        
        while(key < 0)      //
	        {
	            key = key + 25;     //
	        }
	
	    for(i = 0; i < letters[i]; i++)     //
	
	    if(letters[i] - key > 64)       //
        {
            letters[i] = letters[i] - key;      //
        }

        else if(letters[i] - key < 65)      //
        {
            letters[i] = (letters[i] + 26) - key;       //
        }

	    printf("%s", letters);      //
	}
	
	if(option == 3)
	{
	    char letters[1024];
	    int i;
	    
	        printf("Enter Word (Using only capital letters!): ");
	        scanf("%s", letters);
	        
        for(i = 0; i < letters[i]; i++)
	        
        switch(letters[i])      //Uses a switch statement for 'letters[i]'
        {
            case 'A': letters[i] = 'Q';break;       //Each case is used to make a letter equal to another in 'letters[i]' then breaks out /./././././
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
	        
	
        printf("%s", letters);      //
	
	}
	
    if(option == 4)     //
	{
	    char letters[1024];     //
	    int i;      //
	    
	        printf("Enter Word (Using only capital letters!): ");       //
	        scanf("%s", letters);       //
	        
        for(i = 0; i < letters[i]; i++)     //
	        
        switch(letters[i])      //
        {
            case 'Q': letters[i] = 'A';break;       //
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
	        
	
        printf("%s", letters);      //
	
	}
	
	return 0;       //Returns 0 to main to say the programme is finished.
}
