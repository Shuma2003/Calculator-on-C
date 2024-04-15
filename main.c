#include <stdio.h>  
int main()  
{ 
    int numbera, numberb;   
    float answer;
    char op;
    
    printf (" Enter the operation to perform(+, -, *, /) \n ");  
    scanf ("%c", &op);
    printf (" Enter the first number: ");  
    scanf(" %d", &numbera); 
    printf (" Enter the second number: ");  
    scanf (" %d", &numberb); 
    
    switch(op){
        //addition  
        case '+':
            answer = numbera + numberb; 
            printf (" %d + %d = %f", numbera, numberb, answer);
            break;
        
        //substraction  
        case '-':  
            answer = numbera - numberb; 
            printf (" %d - %d = %f", numbera, numberb, answer);  
            break;  
        
        //multiplication  
        case '*':   
            answer = numbera * numberb;  
            printf (" %d * %d = %f", numbera, numberb, answer);  
            break;  
        
        //division  
        case '/':
            if (numbera == 0) 
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &numberb);        
            }  
            answer = numbera / numberb; 
            printf (" %d / %d = %.2f", numbera, numberb, answer);  
            break;
            
        default:  
            printf(" \n Enter valid operator ");  
    }
    return 0;  
}
