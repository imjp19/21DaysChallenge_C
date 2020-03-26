#include <stdio.h>
void main() {
    int a,b,add,mul,sub;
    float div;
    printf("*****************************************************\n\n");
    printf("\tProgram to that perform as CALCULATOR.\n\n");
    printf("*****************************************************\n\n");
    printf("Enter value of \"a\"=");
    scanf("%d",&a);

    printf("Enter value of \"b\"=");
    scanf("%d",&b);

    add = a+b;
    mul = a*b;
    div = a/b;
    sub = a-b;
    
    printf("\n\n*******************************************\n\n");
    printf("Addition of \"a\" and \"b\" is : %d \n",add);
    printf("Multiplication of \"a\" and \"b\" is : %d \n",mul);
    printf("Divison of \"a\" and \"b\" is : %f \n",div);
    printf("Substraction of \"a\" and \"b\" is : %d \n\n",sub);
    printf("*******************************************\n");
}
