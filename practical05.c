 // question 1
 //do while loop

#include<stdio.h>
int main(){
int a=1;
 do{
    printf("%d\n",a);
    a++;
 }
 while(a<=100);

 //for loop

int b;
for(b=1;b<=100;b++);
printf("%d\n",b);

//while loop

int a=1;
while(a<=100){
    printf("%d\n",a);
    a++;
}

 // question 2


    int marks[10];
    int total = 0;
    float average;
    
    printf("Enter the marks for 10 subjects:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    
    average = (float)total / 10;
    
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    
    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }
    // question 3

     int number;
    int factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for (int i = number; i >= 1; i--) {
        factorial *= i;
    }
    
    printf("Factorial of %d is %d\n", number, factorial);

       // question 4

        int number;
    int sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;
    
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    
    printf("Sum of digits of %d is %d\n", number, sum);
    
     // question 5

     t main() {
    int number;
    int reversedNumber = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;

    do {
        int digit = temp % 10;
        reversedNumber = reversedNumber * 10 + digit;
        temp /= 10;
    } while (temp != 0);
    
    printf("Reversed number: %d\n", reversedNumber);
    
    
     // question 6

      int base, exponent;
    long long result = 1;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power using a loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

   // question 7

    int n = 10; 
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    // question 8

    int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
        return 1;
    else
        return 0;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);


    // question 9

      char letter;

    printf("ASCII values for letters A to Z:\n");

    for (letter = 'A'; letter <= 'Z'; ++letter) {
        printf("%c: %d\n", letter, letter);
    }

      // question 10

        int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }


      // question 11

      void checkPrime(int N)
{
    // initially, flag is set to true or 1
    int flag = 1;
 
    // loop to iterate through 2 to N/2
    for (int i = 2; i <= N / 2; i++) {
 
        // if N is perfectly divisible by i
        // flag is set to 0 i.e false
        if (N % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (flag) {
        printf("The number %d is a Prime Number\n", N);
    }
    else {
        printf("The number %d is not a Prime Number\n", N);
    }
 
    return 0;
}