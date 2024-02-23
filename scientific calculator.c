#include<stdio.h>
#include<math.h>

int add(int num1,int num2)            // function for addition
{
    return num1 + num2 ; 
} 


int sub(int num1,int num2)            //function for addition
{   
    return num1 - num2 ;
}

int mul(int num1,int num2)           //function for addition
{
    return num1 * num2;
}

int div(int num1,int num2)           //function for addition
{     
    return num1 / num2;
}

square_root_of(int num)              //function for square root
{
	return sqrt(num);
	
}

int power_of(int num1 , int num2)     // function for power
{
	return pow(num1,num2);
}

int square_of(int num)               // function for square
{
	return pow(num,2);
}

int cube_of(int num)                  // function for cube
{
	return pow(num,3);
}

float reciprocal_of(int num)          // function for reciprocal
{
	return pow(num,-1);
}

int fact(int num)                      // function for factorial
{
	
    if(num==1)
    {
        return 1;
    }
    else
    {
        return (num*fact(num-1));
    }
}

float percent(int num1 , int num2)                    // function for percentage
{
	return (num1*num2)/100;
}

float log_of(int num)                              // function for log
{
	return log10(num);
}

int mod_of(int num1 , int num2)                        // function for modulus
{
	return num1%num2;
}

float sin_of(int num)                             // function for sin
{
	return (sin(num * 3.14159 /180));
}

float cos_of(int num)                             // function for cos
{
	return (cos(num * 3.14159 / 180));
}

float tan_of(int num)                               // function for tan
{
	return tan(num * 3.14159 / 180);
}

float cosec_of(int num)                               // function for cosec
{
	return  1 / (sin(num * 3.14159 / 180));
}

float sec_of(int num)                                  // function for sec
{
	return  1 / cos(num * 3.14159 / 180);
}

float cot_of(int num)                                      // function for cot
{
	return 1 / tan(num * 3.14159 / 180);
}

int main()
{
	int a,b;
	
	int addition , Subtraction,Multiplication,Division,square_root,power,square,cube, factorial,modulus ;

	float reciprocal,percentage, logx, sinx , cosx , tanx , cosecx , secx , cotx ;
	
	int choice =0;
    
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square root\n6. X ^ Y\n7. Square\n8. cube\n");
    printf("9. resiprocal\n10. factorial\n11. percentage\n");
    printf("12. log\n13. modulus\n14. sin\n15. cos\n16. tan\n");
    printf("17. cosec\n18. sec\n19. cot\n");
    
    printf(" Enter your Choice: ");
    scanf("%d",&choice);
    
    
    
    if(choice==1)
    {
        
      printf("Enter the value of a :");
      scanf("%d",&a);
      printf("Enter the value of b :");
      scanf("%d",&b);
      addition=add(a,b);
      printf("addition=%d",addition);
	}
	
    if(choice==2)
	{
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b :");
        scanf("%d",&b);
	    Subtraction=sub(a,b);
	    printf("Subtraction=%d",Subtraction);
	}
	if(choice==3)
	{   
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b :");
        scanf("%d",&b);
	    Multiplication=mul(a,b);
	    printf("Multiplication=%d",Multiplication);
	}
	if(choice==4)
	{           
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b :");
        scanf("%d",&b);
	    Division=div(a,b);
	    printf("Division=%d",Division);
	}
	if(choice==5)
	{   
	    printf("Enter the value of a :");
        scanf("%d",&a);                        
	    square_root=square_root_of(a);
	    printf("Square_root=%d",square_root);
	}
	if(choice==6)
	{
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b :");
        scanf("%d",&b);
	    power=power_of(a,b);
	    printf("power=%d",power);
	}
	if(choice==7)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    square=square_of(a);
	    printf("square=%d",square);
	}
	if(choice==8)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    cube=cube_of(a);
	    printf("cube=%d",cube);
	}
	if(choice==9)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    reciprocal=reciprocal_of(a);
	    printf("resiprocal=%f",reciprocal);
	}
	if(choice==10)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    factorial=fact(a);
	    printf("factorial=%d",factorial);
	}
	if(choice==11)
	{
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b :");
        scanf("%d",&b);
	    percentage=percent(a,b);
	    printf("percentage=%f",percentage);
	}
	if(choice==12)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    logx=log_of(a);
	    printf("log=%f",logx);
	}
	if(choice==13)
	{
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b :");
        scanf("%d",&b);
	    modulus=mod_of(a,b);
	    printf("modulus=%d",modulus);
	}
	if(choice==14)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    sinx=sin_of(a);
	    printf("sin=%f",sinx);
	}
	if(choice==15)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    cosx=cos_of(a);
	    printf("cos=%f",cosx);
	}
	if(choice==16)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    tanx=tan_of(a);
	    printf("tan=%f",tanx);
	}
	if(choice==17)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    cosecx=cosec_of(a);
	    printf("cosec=%f",cosecx);
	}
	if(choice==18)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    secx=sec_of(a);
	    printf("sec=%f",secx);
	}
	if(choice==19)
	{
	    printf("Enter the value of a :");
        scanf("%d",&a);
	    cotx=cot_of(a);
	    printf("cot=%f",cotx);
	}
	
	
    
    
}
