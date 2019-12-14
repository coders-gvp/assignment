//decimal to binary//
#include <stdio.h>
int decimalToBinary(int n);
int main()
{
    int decimal;
    printf("Enter a decimal number\n");
    scanf("%d", &decimal);
    printf("Binary number of %d is %ld", decimal, decimalToBinary(decimal));
    return 0;
}
int decimalToBinary(int n) 
{
    int remainder,binary = 0, i = 1;
    while(n!= 0) 
    {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}  