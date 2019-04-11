#include <stdio.h>

//protoype? maybe?

void main()
{
    int key, z;
    char alphabet[100];
    
        printf("Enter Word: \n");
        scanf("%d", &z);
        printf("Enter a shift key: \n");
        scanf("%d", &key);
    for(z = 0; z < 25; ++z);
    {
        if(alphabet[z] == '\0'){
        else if()
        {
            alphabet[z] = alphabet[z] + key;
            
            if(alphabet[z] >= 'y')
            {
                alphabet[z] = alphabet[z] - 26;
            }
        }
        }
    }
    
  printf("Your encryption: %c", alphabet);
} 

//function? maybe?
