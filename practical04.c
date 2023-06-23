 // question 1
 #include<stdio.h>
int main(){
   int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if(a%2==0){
        printf("this is a even number",a);}
        else{
         printf("this is a odd number",a);
        }

// question 2

 int a,b;
    int c;
    printf("enter number 1 :");
    scanf("%d",&a);
    printf("enter number 2 :");
    scanf("%d",&b);
    printf("\n+ operator =1\n- operator =2\n* operator =3\n/ operator =4\n");
    scanf("%d",&c);

    if (c==1)
    {
      printf("\nanswers of numbers is: %d\n",a+b);
    }
    else if (c==2)
    {
      printf("\nanswers of numbers is: %d\n",a-b);
    }
    else if (c==3)
    {
      printf("\nanswers of numbers is: %d\n",a*b);
    }
    else if (c==4)
    {
      printf("\nanswers of numbers is: %d\n",a/b);
    }

// question 3

#include <math.h>

#define PI 3.14159


    int choice;
    double radius, circumference, area, volume;

    printf("Menu:\n");
    printf("1. Calculate circumference of a circle\n");
    printf("2. Calculate area of a circle\n");
    printf("3. Calculate volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            circumference = 2 * PI * radius;
            printf("Circumference: %.2lf\n", circumference);
            break;
        case 2:
        
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = PI * pow(radius, 2);
            printf("Area: %.2lf\n", area);
            break;
        case 3:
            
            printf("Enter the radius of the sphere: ");
            scanf("%lf", &radius);
            volume = (4.0 / 3.0) * PI * pow(radius, 3);
            printf("Volume: %.2lf\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
            break;

  // question 4

   char v;
 printf("enter the character:");
 scanf("%s",&v);


 switch(v)
 {
    case 'a' :printf("vowel");break;
    case 'e' :printf("vowel");break;
    case 'i ':printf("vowel");break;
    case 'o' :printf("vowel");break;
    case 'u' :printf("vowel");break;
    default:printf("wrong character");break;

  // question 5

   int month, days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            days = 28;
            break;
        default:
            printf("Invalid month number!\n");
            return 1;
    }

    printf("Total number of days in the month: %d\n", days);

    return 0;

    
 }