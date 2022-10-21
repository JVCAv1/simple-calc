include <stdio.h>

// this is a simple calculator with function pointers, and was inspired by one of the code examples in the C course. 
//v1.1

//submit format: <operator> <num1> <num2>

int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);

int main(void){
    
    int opt,n1,n2;
    int (*opf[4])(int,int);
    
    opf[0] = add;
    opf[1] = sub;
    opf[2] = mul;
    opf[3] = div;
    
    printf("Enter <operator> <n1> <n2>:\n\n");
    printf(" 0 - Add\n");
    printf(" 1 - Subtract\n");
    printf(" 2 - Multiply\n");
    printf(" 3 - Divide\n");
    printf(">> ");
    
    scanf("%d %d %d",&opt,&n1,&n2);
    
    printf("\nResult: %d",opf[opt](n1,n2));
    
    return 0;
}

int add(int n1, int n2){
    return (n1) + (n2);
}
int sub(int n1, int n2){
    return (n1) - (n2);
}
int mul(int n1, int n2){
    return (n1) * (n2);
}
int div(int n1, int n2){
    return (n1) / (n2);
}
