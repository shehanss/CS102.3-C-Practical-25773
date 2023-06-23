 #include<stdio.h>

int main(){

 // question 1
 int n1,n2,max;
      printf("enter the two number : ");
      scanf("%d%d",&n1,&n2);
      if(n1>n2)
      max=n1;
      else
      max=n2;
      printf("the highest number is %d\n",max);
 
 // question 2

  int a,b,c,max,min;
   printf("enter the first number:");
   scanf("%d",&a);
   printf("enter the second number:");
   scanf("%d",&b);
   printf("enter the third number:");
   scanf("%d",&c);
       max=a;
    if(b>max)
        max=b;
    if (c>max)
        max=c;

         printf("%d is the highest value\n",max);
             min=a;
    if(b<min)
        min=b;
    if (c<min)
        min=c;
 printf("%d is the smallest value\n",min);
  
  // question 3

    float bsalary, nsalary;
   char name[20];
   printf("Enter name ");
   scanf("%s", &name);
   printf("Enter salary ");
   scanf("%f", &bsalary);

   if(bsalary<5000)
    nsalary=bsalary*105/100;
   else if (5000<=bsalary<10000)
    nsalary=bsalary*110/100;
   else
    nsalary=bsalary*115/100;

   printf("%s your new salary is %.1f\n",name, nsalary);

   // question 4

      double radius, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Diameter: %f\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area: %f\n", area);


   // question 5

 int n1,n2;
 printf("enter the first number:");
 scanf("%d",&n1);
 printf("enter the first number:");
 scanf("%d",&n2);
 if(n1%n2==0){
    printf("the first number is a multyple of second\n");
 }
 else{
    printf("the first number is not the mulpyle of second\n")

}

 // question 6
 

char value;
printf("Enter a Value = ");
scanf("%c", &value);
printf("integer value of %c = %d\n", value, value);
return 0;
}
return 0;