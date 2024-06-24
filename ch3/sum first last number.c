#include <stdio.h>
#include<conio.h>

int sumFirstAndLastDigits(int number) {
    int lastDigit, firstDigit;
    
    
    lastDigit = number % 10;
    
    
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;
    

    int sum = firstDigit + lastDigit;
    
    return sum;
}


int main() {
    int num;
    
   
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    int result = sumFirstAndLastDigits(num);
    
    printf("Sum of first and last digits of %d is: %d\n", num, result);
    
    return 0;
}

