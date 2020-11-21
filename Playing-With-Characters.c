#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    //Variables
    
    char ch;
    char s[100];
    char sen[100];

    //Input

    scanf("%c", &ch);
    scanf("\n");
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    //Output

    printf("%c\n", ch);
    printf("%s\n", s) ;
    printf("%s", sen);
   
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
