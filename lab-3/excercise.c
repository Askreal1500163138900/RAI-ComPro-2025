#include <stdio.h>

int calculator1(){
    int num1,num2,op,result;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    
    printf("Calculator Menu: \n");
    printf(" 1.+\n");
    printf(" 2.-\n");
    printf(" 3.*\n");
    printf(" 4./\n");
    
    printf("Choose menu :");
    scanf("%d",&op);
    
    if (op == 1)
    {
        result = num1 + num2;
        printf("Ans. : Num1 + Num2 = %d\n",result);
    }
    else if (op == 2)
    {
        result = num1 - num2;
        printf("Ans. : Num1 - Num2 = %d\n",result);
    }
    else if (op == 3)
    {
        result = num1 * num2;
        printf("Ans. : Num1 * Num2 = %d\n",result);
    }
    else if (op == 4)
    {
        result = num1 / num2;   
        printf("Ans. : Num1 / Num2 = %d\n",result);
    }
    
    return 0;
}

int calculator2(){
    int num1,num2,op,result;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    
    printf("Calculator Menu: \n");
    printf(" 1.+\n");
    printf(" 2.-\n");
    printf(" 3.*\n");
    printf(" 4./\n");
    
    printf("Choose menu :");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        result = num1 + num2;
        printf("Ans. : Num1 + Num2 = %d\n",result);
        break;
    case 2:
        result = num1 - num2;
        printf("Ans. : Num1 - Num2 = %d\n",result);
        break;
    case 3:
        result = num1 * num2;
        printf("Ans. : Num1 * Num2 = %d\n",result);
        break;
    case 4:
        result = num1 / num2;
        printf("Ans. : Num1 / Num2 = %d\n",result);
        break;
    }
    return 0;
}
int main(){
    calculator1();
    calculator2();
    return 0;

}