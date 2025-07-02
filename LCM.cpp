#include <stdio.h>
int main() {
int num1,num2,lcm,maximum;
printf("Enter number 1:");
scanf("%d",&num1);
printf("Enter number 2:");
scanf("%d",&num2);
maximum = (num1 > num2) ? num1 : num2;
lcm =maximum;  
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
          
            break;
        }
        lcm += maximum;  
    }
    printf("LCM of the given numbers is: %d\n", lcm);

    return 0;
}

