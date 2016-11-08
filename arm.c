#include<stdio.h>

int main(){


int x= 1;
int y = 2;

//swap

int temp;

temp = y;
y = x;
x = temp;

printf("%d\n", x);
printf("%d\n", y);

return 0;
}
