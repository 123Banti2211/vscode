#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    char cap, sml;  
    int asc; 
	 
    printf (" Enter the capital letter: ");  
    scanf (" %c",&cap);  
    asc = cap + 32;  
    printf (" %c character in small letter is: %c", cap, asc);  
      
    printf (" \n Enter the small letter: ");  
    scanf (" %c",&sml);  
    asc = sml - 32;  
    printf (" %c character in the capital letter is: %c", sml, asc);  
}