#include <stdio.h>
#include <stdbool.h>
int num;
bool R0;
bool isPrime(int num);


int main() {
    printf("Enter any number( should be positive, between 0 and 99  ) :  \n ");
    scanf("%d", &num);
    if (num == 0){ printf("The number is 0 ");}
    else{
        if ( num >= 100) {
            printf("The number is incorrect, try again  :\n  ");
            scanf("%d", &num ,"\n");}
        if (num <=100 ){
            R0 = isPrime(num);
            if (R0 == true)

                printf("\n the number is a prime and it is: " "%d", num);

            else
                printf("\n the number is NOT a prime and it is: " "%d", num);}

    }}



bool isPrime(int num) {
    bool R0 = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            R0 = false;
            break;
        }
    }
    return R0;
}
