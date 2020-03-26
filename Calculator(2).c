#include <stdio.h>
void main() {
    
    float a,b,add,mul,sub,div;
    printf("*****************************************************\n\n");
    printf("\tProgram to that perform as CALCULATOR.\n\n");
    printf("*****************************************************\n\n");
    printf("Enter value of \"a\"=");
    scanf("%f",&a);

    printf("Enter value of \"b\"=");
    scanf("%f",&b);

    add = a+b;
    mul = a*b;
    div = a/b;
    sub = a-b;
    
    printf("\n\n*******************************************\n\n");
    printf("Addition of \"a\" and \"b\" is : %f \n",add);
    printf("Multiplication of \"a\" and \"b\" is : %f \n",mul);
    printf("Divison of \"a\" and \"b\" is : %f \n",div);
    printf("Substraction of \"a\" and \"b\" is : %f \n\n",sub);
    printf("*******************************************\n");
}
