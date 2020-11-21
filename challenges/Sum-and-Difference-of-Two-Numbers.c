#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//Variables
    
    int a,b,sum,sub;   
    float c,d,sumf,subf;
    
    
    //Input
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    
    //Operations
    
    sum = a+b;
    sub = a-b;
    
    sumf = c+d;
    subf = c-d;
    
    //Output
    
    printf("%d ",sum);
    printf("%d \n",sub);
    
    printf("%.1f ",sumf);
    printf("%.1f",subf);
        
    return 0;
}
