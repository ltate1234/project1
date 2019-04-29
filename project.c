/*
The flow control mainly uses if statements to select which option is required the goes on from there using while statements, for statements and if and else if statements.
The program has 4 options: rotation cipher encryption, rotation cypher decryption, substitution cipher encryption and substitution cipher decryption.
The first part is the selection menu which asks what cipher option you want and will repeat if you do not enter a valid option, once a valid option it uses if statments to execute code.
The rotation encryption cipher will ask for your word then ask what rotaion key you want to use it then subtracts or adds if the key is not between 0 and 25,
then it uses if and else if to encrypt the word plus the key and will rotate back to A if it passes Z.
The rotation decryption is the same as the rotation encryption except it subtracts the key and will rotate from A to Z if it passes A.
The substitution cipher encryption asks for the word that is going to be used then uses a switch statement and a case for each statement to equal another letter,
it then breaks out of the loop once a letter has a case and is swapped with another letter. e.g. A = Q
The substitution decryption is exactly the same as the encryption except the letters in the case are swapped. e.g. Q = A
The program once compiled and run will give you 4 options each stating what they do and how to select them, 
if any number that isn't listed but selected will ask you to try again. 
After the selected number press the enter key. You will then be asked using only captial letters to enter a single word and then press enter for next step, 
then depending on which cipher selected will require an encryption or decryption key and then press enter for the final result.
*/

#include <stdio.h>      //Includes the headers so the code works.
#include <stdlib.h>

//This function holds all the requred code to make the ciphers and has option menu for the cipher selection. Only numbers can be entered here. The return value for main is 0.

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
    //This is the if statement to select the rotation encryption cipher. It will only accept capital letters in a single word from the user and any integer for they rotaion key.
	if(option == 1)     //If statement that continues if option from the user input is equal to 1.
	{
	    char letters[1024];     //Initialising the array 'letters' with size of 1024.
	    int i, key;     //Initialising the integers 'i' and 'key'.
	
	        printf("Enter Word (Using only capital letters!): ");       //Prints the text for the user to read.
	        scanf("%s", letters);       //Scans for the users input and then copies it to the 'letters' array.
	
	        printf("Enter a rotation key. (Will shift to the right): ");        //Prints the text for the user to read.
	        scanf("%d", &key);      //Scans for the users input and addresses it to 'key'.
	    
	    while(key > 25)     //The while loop checks if the key is larger than 25 and will repeat until statement is false.
	        {
	            key = key - 25;     //Assigns 'key' - 25 to 'key' and will repeat until while loop is false, this allows the key to be any integer and still work in the cipher.
	        }

        while(key < 0)      //The while loop checks if the key is smaller than 0 and will repeat until statement is false.
	        {
	            key = key + 25;     //Assigns 'key' + 25 to 'key' and will repeat until while loop is false, this allows the key to be any integer and still work in the cipher.
	        }
	
	    for(i = 0; i < letters[i]; i++)     //This for loop initialises and assigns 'i' to 0, its condition is true if 'i' is less than 'letters[i]', then increments 'i' each loop until the condition is false.
                                            //The for loop is so that 'i' is a new byte for every letter and will stop once 'i' reaches the arrays size.
        if(letters[i] + key < 91)       //The if statement will continue if 'letters[i]' + 'key' is less than 91. 
        {
            letters[i] = letters[i] + key;      //'letters[i]' is assigned 'letters[i] + key', this is the code that encrypts the word.
        }

        else if(letters[i] + key > 90)      //This else if statement will continue if it does not match the if statment and will continue if 'letters[i] + key' is larger than 90.
        {
            letters[i] = (letters[i] - 26) + key;       //letters[i] is assigned to 'letters[i] - 26' then adding the key after that equation. This is for when the encryption goes beyond 'Z' and will rotate back to 'A'.
        }
        
	    printf("Your encrypted word is: %s", letters);      //The encrypted word is printed through a %s for the string.
	}
	//This is the if statement to select the rotation decryption cipher. It will only accept capital letters in a single word from the user and any integer for they rotaion key.
	if(option == 2)     //If statement that continues if option from the user input is equal to 2.
	{
	    char letters[1024];     //Initialising the array 'letters' with size of 1024.
	    int i, key;     //Initialising the integers 'i' and 'key'.
	
	        printf("Enter Word (Using only capital letters!): ");     //Prints the text for the user to read.
	        scanf("%s", letters);       //Scans for the users input and then copies it to the 'letters' array.
	
	        printf("Enter a decryption key. (Will shift to the left): ");       //Prints the text for the user to read.
	        scanf("%d", &key);      //Scans for the users input and addresses it to 'key'.
	
        while(key > 25)     //The while loop checks if the key is larger than 25 and will repeat until statement is false.
	        {
	            key = key - 25;     //Assigns 'key' - 25 to 'key' and will repeat until while loop is false, this allows the key to be any integer and still work in the cipher.
	        }
	        
        while(key < 0)      //The while loop checks if the key is smaller than 0 and will repeat until statement is false.
	        {
	            key = key + 25;     //Assigns 'key' + 25 to 'key' and will repeat until while loop is false, this allows the key to be any integer and still work in the cipher.
	        }
	
	    for(i = 0; i < letters[i]; i++)     //This for loop initialises and assigns 'i' to 0, its condition is true if 'i' is less than 'letters[i]', then increments 'i' each loop until the condition is false.
                                            //The for loop is so that 'i' is a new byte for every letter and will stop once 'i' reaches the arrays size.
	    if(letters[i] - key > 64)       //The if statement will continue if 'letters[i]' - 'key' is more than 64.
        {
            letters[i] = letters[i] - key;      //letters[i]' is assigned 'letters[i] - key', this is the code that decrypts the word.
        }

        else if(letters[i] - key < 65)      //This else if statement will continue if it does not match the if statment and will continue if 'letters[i] - key' is less than 65.
        {
            letters[i] = (letters[i] + 26) - key;       //letters[i] is assigned to 'letters[i] + 26' then subtracting the key after that equation. This is for when the decryption goes beyond 'A' and will rotate back to 'Z'.
        }

	     printf("Your decrypted word is: %s", letters);      //The decrypted word is printed through a %s for the string.
	}
	//This is the if statement to select the substitution encryption cipher. It will only accept capital letters in a single word from the user and only substitute with set letters.
	if(option == 3)     //If statement that continues if option from the user input is equal to 3.
	{
	    char letters[1024];     //Initialising the array 'letters' with size of 1024.
	    int i;      //Initialising the integer 'i'.
	    
	        printf("Enter Word (Using only capital letters!): ");       //Prints the text for the user to read.
	        scanf("%s", letters);       //Scans for the users input and then copies it to the 'letters' array.
	        
        for(i = 0; i < letters[i]; i++)     //This for loop initialises and assigns 'i' to 0, its condition is true if 'i' is less than 'letters[i]', then increments 'i' each loop until the condition is false.
                                            //The for loop is so that 'i' is a new byte for every letter and will stop once 'i' reaches the arrays size.
	        
        switch(letters[i])      //Uses a switch statement for 'letters[i]' and uses the case for what 'letters[i]' is equal to.
        {
            case 'A': letters[i] = 'Q';break;       //Each case is used to make a letter equal to another in 'letters[i]' then breaks once the case is met.
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
	        
	
        printf("Your encrypted word is: %s", letters);      //The encrypted word is printed through a %s for the string.
	
	}
	//This is the if statement to select the substitution decryption cipher. It will only accept capital letters in a single word from the user and only substitute with set letters.
    if(option == 4)     //If statement that continues if option from the user input is equal to 4.
	{
	    char letters[1024];     //Initialising the array 'letters' with size of 1024.
	    int i;      //Initialising the integer 'i'.
	    
	        printf("Enter Word (Using only capital letters!): ");       //Prints the text for the user to read.
	        scanf("%s", letters);       //Scans for the users input and then copies it to the 'letters' array.
	        
        for(i = 0; i < letters[i]; i++)     //This for loop initialises and assigns 'i' to 0, its condition is true if 'i' is less than 'letters[i]', then increments 'i' each loop until the condition is false.
                                            //The for loop is so that 'i' is a new byte for every letter and will stop once 'i' reaches the arrays size.
        switch(letters[i])      //Uses a switch statement for 'letters[i]' and uses the case for what 'letters[i]' is equal to.
        {
            case 'Q': letters[i] = 'A';break;       //Each case is used to make a letter equal to another in 'letters[i]' then breaks once the case is met.
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
	        
	
        printf("Your decrypted word is: %s", letters);      //The decrypted word is printed through a %s for the string.
	
	}
	
	return 0;       //Returns 0 to main to say the programme is finished.
}
