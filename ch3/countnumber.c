#include<stdio.h>
#include<conio.h>
#include <stdio.h>

int countDigits(int number) {
    int count = 0;
    
   
    while (number != 0) {
    
        number = number / 10;
      
        count++;
    }
    
    return count;
}

int main() {
    int num;
    
   
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int digits = countDigits(num);
    
    printf("Number of digits in %d is: %d\n", num, digits);
    
    return 0;
}

