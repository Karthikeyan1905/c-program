"practice ARITHMETIC program question:"
1.Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.

code:

#include <stdio.h>
int main() {
float bs,da,hra,gs;
printf("\n Enter basic salary:");
scanf("%f",&bs);
da=bs*0.4;
hra=bs*0.2;
gs=bs+da+hra;
printf("\n print basic salary %f",bs);
printf("\n DA %f",da);
printf("\n HRA %f",hra);
printf("\n GS %f",gs);
  return 0;
}

output:
Enter basic salary:8000
print basic salary 8000.000000
 DA 3200.000000
 HRA 1600.000000
 GS 12800.000000

2. The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters


code:

#include <stdio.h>
int main() {
float km,m,cm,ft,inch;
printf("\n enter the km:");
scanf("%f",&km);
m=km*1000;
cm=m*100;
inch=cm/2.54;
ft=inch/12;
printf("\n m:%f",m);
printf("\n cm:%f",cm);
printf("\n inch:%f",inch);
printf("\n ft:%f",ft);
return 0;
}

output:

enter the km:45
m:45000.000000
 cm:4500000.000000
 inch:1771653.500000
 ft:147637.796875


3. If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100

code:


#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5,total,avg;
    printf("\n enter 5 marks:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5.0;
    printf("\n enter the total mark: %f",total);
    printf("\n enter the avg percentage: %f",avg);
return 0;
}

output:
enter 5 marks:78
89
98
87
88
enter the total mark: 440.000000
 enter the avg percentage: 88.000000

4.Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.

CODE:


#include <stdio.h>
int main() {
    int c,d,b;
    printf("\n enter c &d value:");
    scanf("%d%d",&c,&d);
    printf("\n C:%d  D: %d",c,d);
    b=c;
    c=d;
    d=b;
      printf("\n C:%d  D:  %d",c,d);
return 0;
}

OUTPUT:
enter c &d value:5
6
C:5  D: 6
 C:6  D:  5     

5.if a four-digit number is input through the keyboard, write a program obtain the sum of the first and last digit of this number in c program

code:

#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g,h;
    printf("\n enter the 4 digit number:");
    scanf("%d",&a);//1234
    b=a/10;//123
    c=a%10;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    g=d%10;//2
    h=c+f;
    printf("\n result:%d",h);
    return 0;
}

output:
enter the 4 digit number:2937
result:9

6.In a town, the percentage of men is 52. The percentage of total literacy is 48If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.

CODE:

#include <stdio.h>
int main() {
   int pop=80000;
   int popmen,popwomen,totlit,totilit,menlit,womenlit,menilit,womenilit;
   popmen=(52*pop)/100;
   popwomen=pop-popmen;
   totlit=(48*pop)/100;
   totilit=pop-totlit;
   menlit=(35*pop)/100;
   womenlit=(13*pop)/100;
   menilit=popmen-menlit;
   womenilit=popwomen-womenlit;
   printf("\n men pop:%d",popmen);
   printf("\n women pop:%d",popwomen);
    printf("\n total lit:%d",totlit);
    printf("\n total ilit:%d",totilit);
    printf("\n total menlit:%d",menlit);
    printf("\n total womenlit:%d",womenlit);
    printf("\n total menilit:%d",menilit);
    printf("\n total womenilit:%d",womenilit);
    return 0;
}

OUTPUT:

men pop:41600
 women pop:38400
 total lit:38400
 total ilit:41600
 total menlit:28000
 total womenlit:10400
 total menilit:13600
 total womenilit:28000


7.School Result Management
1. Five Marks input through the keyboard
2. Find total and average of the given marks
3. Find the result whether the given marks must be >=35
4. Grade as per the following condition.
90-100 A Grade
80-89 - B Grade
70-79 - C Grade
<70 - D Grade
Fail No Grade

code:
#include <stdio.h>

int main() {
  int m1,m2,m3,m4,m5,total;
  float avg;
  printf("\n enter the five marks:");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
  avg=total/5.0;
  printf("\n total mark:%d",total);
  printf("\n average:%0.2f",avg);
  if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
  {
      printf("\n result: pass");
   if(avg>=90&&avg<=100)
  {
      printf("\n grade: A grade");
  }
    else if(avg>=80&&avg<=89)
  {
      printf("\n grade: B grade");
  }
  else if(avg>=70&&avg<=79)
  {
      printf("\n grade: C grade");
  }
  else
  {
      printf("\n grade :d grade");
  }
  }
  else
  {
      printf("\n result: fail");
      printf("\n grade: no grade");
  }
    return 0;
}

OUTPUT:
ALL PASS OUTPUT:


enter the five marks:83
83
83
73
51
total mark:373
 average:74.60
 result: pass
 grade: C grade

FAIL OUTPUT:

enter the five marks:23
45
45
56
67
total mark:236
 average:47.20
 result: fail
 grade: no grade

8.A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be canceled.
Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.

code:

#include <stdio.h>

int main() {
    int days;
    printf("\n enter the days:");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    {
        printf("\n your fine amount is 0.5 paise");
    }
    else if(days>=6 && days<=10)
    {
        printf("\n your fine amount is 1 paise");
    }
     else if(days>=11 && days<=30)
    {
        printf("\n your fine amount is 5 paise");
    }
      else
    {
        printf("\n your membership will be cancelled");
    }
    return 0;
}

OUTPUT:

enter the days:1
your fine amount is 0.5 paise

enter the days:6
your fine amount is 1 paise

enter the days:11
your fine amount is 5 paise

enter the days:31
your membership will be cancelled

9. Any integer is input through the keyboard. write a program to find out whether it is an odd number or even number.



CODE:

#include <stdio.h>

int main() {
int num;
printf("\n enter any value:");
scanf("%d",&num);
if(num%2==0)
{
    printf("\n the number is even");
}
else 
{
    printf("\n the number is odd");
}
    return 0;
}

OUTPUT:

enter any value:5255
the number is odd

10.Write a program to find the given character is vowel or not using switch statement.

CODE:

#include <stdio.h>

int main() {
char c;
printf("\n enter the character:");
scanf("%c",&c);
switch(c)
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("\n %c is a vowel",c);
default:
break;
printf("\n %c is not a vowel",c);
break;
}
    return 0;
}

OUTPUT:

enter the character:f
f is not a vowel

enter the character:i
i is a vowel


11. Thre digit number input through the keyboard write a program to find the given number is Armstrong or not.

EXAMPLE:

#include <stdio.h>

int main() {
int n,a,d1,d2,d3;
printf("\n enter three digit number:");
scanf("%d",&n);//153
d3=n%10;//3
a=n/10;//15
d2=a%10;//5
d1=a/10;//1
a=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
if(a==n)
{
    printf("\n %d is armstrong number",n);
}
else
{
    printf("\n %d is  not armstrong number",n);
}

    return 0;
}


OUTPUT:

enter three digit number:153
153  is armstrong number

enter three digit number:125
125 is  not armstrong number

enter three digit number:125
125 is  not armstrong number

12.Write a program for the following output using switch case
MENU CARD
1. COFFEE
2.TEA
3.COLD COFFEE
4.MILK SHAKE

Enter Your choice2
You have selected Tea
Enter the quantity 15
Total amount :50

CODE:

#include <stdio.h>

int main() {
    int ch,qty;
    printf("\n menu card:");
    printf("\n\t\t 1.coffee        rs.15");
    printf("\n\t\t 2.tea           rs.10");
    printf("\n\t\t 3.cold coffee   rs.25");
    printf("\n\t\t 4.milk shake    rs.50");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("\n you have selected coffee");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
    printf("\n total amount:%d",(qty)*15);
    break;
      case 2:
    printf("\n you have selected tea");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
    printf("\n total amount:%d",(qty)*10);
    break;
      case 3:
    printf("\n you have selected cold coffee ");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
    printf("\n total amount:%d",(qty)*25);
    break;
      case 4:
    printf("\n you have selected milk shake ");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
    printf("\n total amount:%d",(qty)*50);
    break;
    defaut:
    printf("\n invalid enter the above number(1,2,3,4):");
    break;
    return 0;
    }
}

OUTPUT:

menu card:
		 1.coffee        rs.15
		 2.tea           rs.10
		 3.cold coffee   rs.25
		 4.milk shake    rs.50
enter your choice:1
you have selected coffee
 Enter the quantity:5
 total amount:75

