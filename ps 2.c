// write a programme to read marks of 5 subjects and print sum and percentage
#include <stdio.h>
int main() {
    int a,b,c,d,e,sum,percentage;
    printf("enter marks of a b c d e f");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    percentage = (a+b+c+d+e)/5;
    printf("sum of marks = %d \n",sum);
    printf("percentage =%d",percentage);
    return 0;
}