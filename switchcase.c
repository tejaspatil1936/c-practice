#include <stdio.h>

int main() {
int num;
printf("Enter a single digit number: ");
scanf("%d", &num);
switch (num) {
case 0:
printf("0\n");
break;
case 1:
printf("1\n");
printf("0\n");
break;
case 2:
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 3:
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 4:
printf("4\n");
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 5:
printf("5\n");
printf("4\n");
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 6:
printf("6\n");
printf("5\n");
printf("4\n");
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 7:
printf("7\n");
printf("6\n");
printf("5\n");
printf("4\n");
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 8:
printf("8\n");
printf("7\n");
printf("6\n");
printf("5\n");
printf("4\n");
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
case 9:
printf("9\n");
printf("8\n");
printf("7\n");
printf("6\n");
printf("5\n");
printf("4\n");
printf("3\n");
printf("2\n");
printf("1\n");
printf("0\n");
break;
default:
printf("Invalid input");
}
return 0;
}
