-->//basic program in c 

//print hello world program:

#include<stdio.h>
int main()
{
printf("hello world!");
result 0;
}

-->// three types of datatypes:
1.built in primitive
2.derived 
3.user define

-->// built in primitive types
1.Integral--(int,char)
2.boolean
3.floating point--(float,double)

-->//Derived datatype
1.array
2.pointers

-->//user define datatype
1.structure
2.enumeration
3.union

-->//variables and literals declaration  in c program 

#include <stdio.h>
int main() {
 int a=4;
 char b='$';
 float c=35.43f;
 printf("%d \n %c \n %0.2f",a,b,c);
  return 0;
}

output:
4 
 36 
 35.43

-->Aritmetic operation (+,-,*,/,%)

Addtion program
#include <stdio.h>
int main() {
int a,b,c;
float x;
printf("\nenter a value A:");
scanf("%d",&a);
printf("\nenter a value B:");
scanf("%d",&b);
c=a+b;
printf("\ntotal:%d",c);
c=a-b;
printf("\nSum:%d",c);
c=a*b;
printf("\nmul:%d",c);
x=(float)a/(float)b; //--->(float) is represent for accurate output value
printf("\ndiv:%0.2f",x);
c=a%b;
printf("\nMod:%d",c);
  return 0;
}

output:
enter a value A:123
enter a value B:10
total:133
Sum:113
mul:1230
div:12.30
Mod:3


-->ASSIGNMENT OPERATOR IN C(=,+=,-=,*=,/=,%=)

EXAMPLE CODE:

#include <stdio.h>
int main() {
int a=10,b=5,c=7;
//assignment operation
a+=10;
printf("\n A:%d",a);
b-=10;
printf("\n B:%d",b);
c*=2;
printf("\n C:%d",c);
    return 0;
}
OUTPUT:
A:20
 B:-5
 C:14

-->RELATION OPERATOR(==,<,>,!=,<=,>=)
Relational operators in C, such as “less than”, “greater than”, “less than or equal to”, “greater than or equal to”, “equal to”, and “not equal to”, play a pivotal role in comparing values.

EXAMPLE CODE:

#include <stdio.h>
int main() {
int a=10,b=5;
printf("\n grater than :%d", a>b);
printf("\n less than :%d", a<b);
printf("\n grater than or equal :%d", a>=b);
printf("\n less than or equal :%d", a<=b);
    return 0;
}

OUTPUT:

grater than :1
 less than :0
 grater than or equal :1
 less than or equal :0


-->LOGICAL OPERATOR--(&&,||,!)
1.&&--LOGICAL AND,
2.||--LOGICAL ORT,
3.! --LOGICAL NOT.

--EXAMPLE CODE:
#include <stdio.h>
int main() {
int a=76;
printf("\n logical AND :%d",(a>=35 && a<=100));
printf("\n logical OR :%d",(a>=35 || a<=100));
printf("\n logical NOT :%d",!(a>=35));
return 0;
}

OUTPUT:

logical AND :1
 logical OR :1
 logical NOT :0

-->increment and decrement operation 

1.a++  --> post increment
2.++a --> pre increment
3.a-- --> post decrement
4.--a  --> pre decrement

EXAMPLE CODE
#include <stdio.h>
int main() {
int a=1;
printf("\n pre increment :%d",++a);
printf("\n post increment :%d",a++);
printf("\n A :%d",a);
printf("\n pre decrement :%d",--a);
printf("\n post decrement :%d",a--);
printf("\n A :%d",a);
return 0;
}

OUTPUT:

pre increment :2
 post increment :2
 A :3
 pre decrement :2
 post decrement :2
 A :1

-->BITWISE OPERATOR(&,|,^,~,<<,>>)
1.  &  -->  AND OPERATION
2.  |  -->  OR 
3.  ^  -->  XOR
4.  ~  -->  NOT
5.  <<  --> SHIFT LEFT
6.  >>  --> SHIFT RIGHT

EXAMPLE CODE:
#include <stdio.h>
int main()
{
int a=25,b=45,c,d,e;
printf("\n bitwise AND :%d",a&b);
printf("\n bitwise OR  :%d",a|b);
printf("\n bitwise XOR :%d",a^b);
printf("\n bitwise not :%d",~a);
c=10;
d=c<<2;
e=c>>2;
printf("\n left shift: %d",d);
printf("\n right shift: %d",e);
    return 0;
}

OUTPUT:

bitwise AND :9
 bitwise OR  :61
 bitwise XOR :52
 bitwise not :-26
 left shift: 40
 right shift: 2

----------------------------------------

-->CONTROL STATEMENT 
1. IF  STATEMENT-->( if, if else, else if ladder, nested if).
2.SWITCH STATEMENT
3.CONDITIONAL OPERATOR STATEMENT
4.LOOP  STATEMENT-->( for, while, do while).
5.GOTO  STATEMENT

-------------------------

1. IF  STATEMENT

a) if condition(condition satisfy it will execute the code otherwise stop the execution).

SYNTAX:
if(condition)
{
statement;
}


EXAMPLE CODE:

#include <stdio.h>
int main()
{
char name[10];
int age;
printf("\n enter your name:");
scanf("%s",name);
printf("\n enter your age:");
scanf("%d",&age);
if(age>=18)
{
    printf("\n %s age is %d so eligible for vote",name,age);
}
    return 0;
}

OUTPUT:
enter your name:ram
enter your age:25
ram age is 25 so eligible for vote

-----------------------------------------------------------

b) if else condition

SYNTAX:

if(condition)
{
statement;
}
else
{
statement;
}


EXAMPLE CODE:

#include <stdio.h>
int main()
{
char name[10];
int age;
printf("\n enter your name:");
scanf("%s",name);
printf("\n enter your age:");
scanf("%d",&age);
if(age>=18)
{
    printf("\n %s age is %d so eligible for vote",name,age);
}
else
{
    printf("\n %s age is %d so not eligible for vote",name,age);
}
    return 0;
}

OUTPUT:
//if :
enter your name:krish
enter your age:45
krish age is 45 so eligible for vote

//else:
enter your name:krish
enter your age:12
krish age is 12 so not eligible for vote

-----------------------------------------------------------------------------------

c)else if ladder

SYNTAX:
if(condition)
{
statement;
}
elseif(condition)
{
statement;
}
else
{
statement;
}

EXAMPLE CODE:
#include <stdio.h>
int main()
{
int a;
printf("\n enter any value:");
scanf("%d",&a);
if(a<0)
{
    printf("\n %d is a negative value.", a);
}
else if (a==0)
{
    printf("\n the given value is 0");
}
else if(a>0)
{
 printf("\n %d is a positive value.", a);    
}
    return 0;
}

OUTPUT:

enter any value:12
12 is a positive value.

enter any value:0
the given value is 0

-------------------------------------------------------------------------

D) nested if condition

SYNTAX:

if(condition)
{
if(condition)
{
statement;
}
}

EXAMPLE CODE:

#include <stdio.h>

int main() {
   int year;
   printf("\n enter the year:");
   scanf("%d",&year);
   if(year%100==0)
   {
       if(year%400==0)
       {
           printf("\n %d is a leap year",year);
       }
       else
       {
            printf("\n %d is a not leap year",year);
       }
   }
       else
       {
       if(year%4==0)
       {
            printf("\n %d is a leap year",year);
       }
       else
       {
            printf("\n %d is a not leap year",year);
       }
   }
      
   

    return 0;
}

OUTPUT:
enter the year:2034
2034 is a not leap year

enter the year:2000
2000 is a leap year

-----------------------------------------------------------------------------

2.SWITCH STATEMENT

SYNTAX:

switch(choice)
{
case value:
....
break;
case value:
....
break;
default:
....
break;
}

(or)

 switch( expression ) 
{
case value-1:
Block-1; 
Break; 
case value-2: 
Block-2; 
Break; 
case value-n:
Block-n;
Break;
default:
Block-1;
Break; 
} 
Statement-x;

EXAMPLE CODE:

#include <stdio.h>

int main() {
  int ch;
  printf("\n enter the value:");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:
      printf("\n One");
      break;
       case 2:
      printf("\n two");
      break;
       case 3:
      printf("\n three");
      break;
      default:
      printf("\n invalid number");
      break;
  }

    return 0;
}

OUTPUT:

enter the value:1
One

enter the value:2
two

enter the value:5
invalid number

------------------------------------------------------------------

3.CONDITIONAL STATEMENT:

SYNTAX:
condition?true statement:false statement;

EXAMPLE CODE:

#include <stdio.h>

int main() {
  int a,b,c;
  printf("\n enter the A and B value:");
  scanf("%d%d",&a,&b);
  c=a>b?a:b;
  printf("\n the greatest number is:%d",c);
    return 0;
}

OUTPUT:

enter the A and B value:23
12

the greatest number is:23

-------------------------------------------------------------------

GOTO LABEL STATEMENT IN C

-->goto label sample program

#include <stdio.h>

int main() {
    int i=0;
    run:
    printf("\n %d",i);
    i++;
    if(i!=5)
    {
        goto run;
    }
printf("\n end ");
    return 0;
}

OUTPUT:

0
 1
 2
 3
 4
 end
--------------------------------------------------------------------

example for goto label

#include <stdio.h>

int main() {
    int ch,qty,i, net=0;
    run:
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
    net=net+(qty*15);
    break;
      case 2:
    printf("\n you have selected tea");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
   net=net+(qty*10);
    break;
      case 3:
    printf("\n you have selected cold coffee ");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
     net=net+(qty*25);
    break;
      case 4:
    printf("\n you have selected milk shake ");
    printf("\n Enter the quantity:");
    scanf("%d",&qty);
    net=net+(qty*50);
    break;
    defaut:
    printf("\n invalid enter the above number(1,2,3,4):");
    break;
    }
    printf("\n do you want to continue press 1:");
    scanf("%d",&i);
    if(i==1)
    {
        goto run;
    }
    printf("\n total amount:%d",net);
    printf("\n thank you for coming");
    return 0;
    }


 OUTPUT:

menu card:
		 1.coffee        rs.15
		 2.tea           rs.10
		 3.cold coffee   rs.25
		 4.milk shake    rs.50
enter your choice:3
you have selected cold coffee 
 Enter the quantity:2
 do you want to continue press 1:1
 menu card:
		 1.coffee        rs.15
		 2.tea           rs.10
		 3.cold coffee   rs.25
		 4.milk shake    rs.50
enter your choice:2
you have selected tea
 Enter the quantity:3
 do you want to continue press 1:0
 total amount:80
 thank you for coming


-----------------------------------------------------------------------

-->LOOPING STATEMENT
1.ENTRY CHECK LOOP
     WHILE
     FOR
2.EXIT CHECK LOOP
      DO WHILE
---------------------------------------------------

--> WHILE LOOP 
SYNTAX:
while(condition)
{
statement();
}

EXAMPLE CODE:

#include <stdio.h>

int main() {
    int i=1,n;
    printf("\n enter the limit:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}

OUTPUT:

enter the limit:3
1
2
3

------------------------------------------------------------

-->DO WHILE LOOP

SYNTAX:
do
{
statement();
}
while(condition)
{
statement();
}

EXAMPLE CODE:
#include <stdio.h>

int main() {
    int i=0,n;
    printf("\n enter the limit:");
    scanf("%d",&n);
    do{
        printf("\n%d",i);
        i+=2;
    }
    while(i<=n);
    return 0;
}

OUTPUT:

enter the limit:20
0
2
4
6
8
10
12
14
16
18
20

----------------------------------------------------------

--> FOR LOOP 

SYNTAX:

for(initialization;condition;increment)
{
statement();
}

EXAMPLE CODE:

#include <stdio.h>

int main() {
    int i,n;
    printf("\n enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("\n%d",i);
    }
    return 0;
}

OUTPUT:

enter the limit:10
1
3
5
7
9
----------------------------------------

--> NESTED FOR LOOP( is used to draw pattern )


EXAMPLE CODE:

#include <stdio.h>

int main() {
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

*****
*****
*****
*****
*****

ANOTHER EXAPMLE FOR NESTED LOOP

CODE:
#include <stdio.h>

int main() {
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
OUTPUT:

*
**
***
****


-----------------------------------------
BREAK AND CONTINUE IN C PROGRAM

EXAMPLE CODE:
#include <stdio.h>

int main() {
    int i;
    for(i=1;i<=10;i++)
    {
          if(i==8)
            break;
            if(i==3)
            continue;
        printf("\n %d",i);
        
    }
    return 0;
}
OUTPUT:

1
 2
 4
 5
 6
 7

------------------------------------------


-->ARRAYS IN C PROGRAM
type 
1.one dimension 
2.two dimention 


EXAMPLE CODE FOR ONE DIMENSION ARRAY:

#include <stdio.h>

int main() {
   int i,a[100],n;
   printf("\n enter the limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("\n enter the value:");
       scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    {
   printf("\n %d",a[i]);
    }
    return 0;
}

OUTPUT:

enter the limit:3
enter the value:10
enter the value:20
enter the value:30
10
 20
 30

------------------------------------------------------------------------
 


EXAMPLE CODE FOR TWO DIMENSION ARRAY:


#include <stdio.h>

int main() {
    int a[100][100],b[100][100],c[100][100];
    int i,j,n,m;
    printf("\n enter the rows:");
    scanf("%d",&n);
    printf("\n enter the columns:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
         {
        printf("\n enter the value a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
         }
    }
       for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
         {
        printf("\n enter the value b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
         }
    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
         {
       c[i][j]=a[i][j]+b[i][j];
        printf("\t%d",c[i][j]);
         }
         printf("\n");
    }

    return 0;
}

OUTPUT:

enter the rows:2
enter the columns:2
enter the value a[0][0]:1
enter the value a[0][1]:2
enter the value a[1][0]:3
enter the value a[1][1]:3
enter the value b[0][0]:6
enter the value b[0][1]:5
enter the value b[1][0]:1
enter the value b[1][1]:6
        7	7
	4	9


-------------------------------------------------------------------


STRING FUNCTION IN C

1.strcmp
2.strlen
3.strrev
4.strupr
5.strlwr
6.strcpy
7.strcat

--> Group of character is a string
eg:
r-> is a char
ram--> is a string

eg program:

#include <stdio.h>

int main() {
  char c[10];
  printf("\n enter the char:");
  gets(c);// gets(c) is used to print the value after the space is given by the name. 
  printf("\n %s",c);
    return 0;
}

OUTPUT:
enter the char:karthi keyan // THERE IS A SPACE B/W THE KARTHI KEYAN IF YOU GIVE SCANF MEANS IT WILL NOT PRINT THE KEYAN  gets(c) IS USED TO PRINT AFTER THE SPACE  //
karthi keyan

------------------------------------------------

#include<stdio.h>
#include<string.h>
 
int main()
{
    char c[20],a[20];
    char x[10]={'R','A','M','\0'};
    char y[10]={'K','U','M','A','R','\0'};
    printf("x : %s",x);
    printf("\nEnter The String : ");
    gets(c);
 
    printf("\nCompare   : %d ",strcmp(x,c));//String Compare
    printf("\nLength    : %d ",strlen(c));//String Length
    printf("\nReverse   : %s ",strrev(c));//String Reverse
    printf("\nUppercase : %s ",strupr(c));//String Upper
    printf("\nLowercase : %s ",strlwr(c));//String Lower
    printf("\nCopy      : %s ",strcpy(a,c));//String Copy
    strcat(x,y);
    printf("\nConcatenation : %s ",x);//String Concatenation
    return 0;
}

Output
x : RAM
Enter The String : sam

Compare   : -1
Length    : 3
Reverse   : mas
Uppercase : MAS
Lowercase : mas
Copy      : mas
Concatenation : RAMKUMAR
----------------------------------------------------------------------------------


MATH FUNCTION IN C PROGRAM

#include<stdio.h>
#include<math.h>
 
int main()
{
 
    printf("\nSQRT  : %0.2f",sqrt(4));
    printf("\nPOW   : %0.2f",pow(2,3));
    printf("\nabs   : %d",abs(-25));
    printf("\nCEIL  : %f",ceil(3.8));
    printf("\nCEIL  : %f",ceil(3.2));
    printf("\nFLOOR : %f",floor(3.8));
    printf("\nFLOOR : %f",floor(3.2));
    printf("\nROUND : %f",round(3.8));
    printf("\nROUND : %f",round(3.2));
    return 0;
}
 

Output:

SQRT  : 2.00
POW   : 8.00
abs   : 25
CEIL  : 4.000000
CEIL  : 4.000000
FLOOR : 3.000000
FLOOR : 3.000000
ROUND : 4.000000
ROUND : 3.000000
-------------------------------------------------------------------------------

FUNCTION IN C PROGRAM:

TWO TYPES :
1.BUILTIN FUNCTION 

2.USER DEFINE FUNCTION
  A)call by value(return type (data type))
  B)call by reference(not return(void))

Different aspects of function calling:

function without arguments and without return value

function without arguments and with return value

function with arguments and without return value

function with arguments and with return value

three function in program
1.function declaration 
2,function definition
3.function calling
-----------------------------------------------------------
//example code for no return without argument function

//No Return Without Argument Function in C

#include<stdio.h>
 
//Function Declaration
void add();
 
int main()
{
    //Function Calling
    add();
    return 0;
}
//Function Definition
void add()
{
    int a,b,c;
    printf("\nEnter The Value of A & B :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);
}

OUTPUT:
enter two value a&b:10
20
c value is :30

--------------------------------------------------------------

//No Return With Argument Function in C
#include<stdio.h>

void add(int,int);
int main()
{
 add(25,35);//actual parameter
 
 return 0;
}
void add(int a,int b) //formal parameter
{
  int c;
    c=a+b;
    printf("\n c value is :%d",c);
}

OUTPUT
c value is :60
--------------------------------------------------------------------------------
// Return Without Argument Function in C
#include<stdio.h>

int add();
int main()
{
 int a;
 a=add();//actual parameter
 printf("\n total:%d",a);
 return 0;
}
int add() //formal parameter
{
  int a,b;
  printf("\n enter the a and b value:");
  scanf("%d%d",&a,&b);
  return a+b;
    
}

OUTPUT:
enter the a and b value:10
20
total:10
--------------------------------------------------------

// Return With Argument Function in C
#include<stdio.h>

int add(int,int);
int main()
{
    int a,b;
    printf("\n enter the a and b value:");
    scanf("%d%d",&a,&b);
    a=add(a,b);
    printf("\n total:%d",a);
    return 0;
    }
 int add(int a,int b)
    {
    return a+b;
}

OUTPUT:
enter the a and b value:10
20
total:30
---------------------------------------------------------------------

 Recursive Function in C :
In C programming, a recursion function is a function that calls itself. A function that calls itself is known as a recursive function.
Recursion is a technique in which a function calls itself, either directly or indirectly, in order to solve a problem.

code:
#include<stdio.h>
/*
    5!
    1*2*3*4*5
*/
 
int factorial(int i) //5
{
    if(i<=1){
        return 1;
    }
    return i*factorial(i-1);  //5*4*3*2*1
}
 
int main()
{
    printf("Factorial : %d",factorial(5));
    return 0;
}
 

Output
Factorial : 120
-------------------------------------------------------------------------
Call by Reference Function in C:

In C programming, call by reference is a method of passing arguments to a function where the function receives the memory address of the variables passed as arguments, rather than their values. 


code:
#include<stdio.h>
 
void swap(int *x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
 
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap  A : %d   | B : %d",a,b);
    swap(&a,&b);
    printf("\nAfter  Swap  A : %d   | B : %d",a,b);
    return 0;
}
 

Output
Enter The Value of A & B : 10
20

Before Swap  A : 10   | B : 20
After  Swap  A : 20   | B : 10

--------------------------------------------------------------
Local Variables in C :
In C programming, a local variable is a variable that is declared within a function or a block of code. 
Local variables are only accessible within the scope of the function or block in which they are declared, and they are not visible to other parts of the program.

code:
#include<stdio.h>
 
int add()
{
    int a,b;
}
 
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("\n%d",i);
    }
     //printf("\n%d",i);
    return 0;
}
 

Output
0
1
2
3
4

---------------------------------------------------------------
Global Variables in C :
In C programming, a global variable is a variable that is declared outside of any function or block of code. 

code:
#include<stdio.h>
 
void display();
 
int a=10;
 
int main()
{
    printf("\n Value of A : %d",a);
    display();
    return 0;
}
 
void display()
{
    a++;
    printf("\n Value of A : %d",a);
}
 

Output
 Value of A : 10
 Value of A : 11
-----------------------------------------------------------------------------------

Static Variables in C 

 
#include<stdio.h>
 
void display();
 
 
int main()
{
    display();
    display();
    display();
}
 
void display()
{
    static int x=1;//static is uses to incremented the value x if static will no use x value does not increment.
    x++;
    printf("\nx : %d",x);
}
 

Output
x : 2
x : 3
x : 4
---------------------------------------------------------------------------------------

Enumeration or enum in C:
In C programming, an enumeration or enum is a user-defined data type that consists of a set of named values


code:

#include<stdio.h>
enum Bool{No=10,Yes=20};
int main()
{
    enum point {x=25,y};
    enum Bool a;
    enum point b;
    a=Yes;
    b=y;
    printf("\na : %d",a);
    printf("\nb : %d",b);
 
   return 0;
}
 

Output
a : 20
b : 26
-------------------------------------------------
pointers in c:

two type of variable;
1.data type
2.pointer variable
-------------------------------------

Single Pointers in C:

A pointer in C is a variable that holds the memory address of another variable.
A single pointer, also known as a "regular" pointer, can hold the memory address of a single variable.
                     -----------------
The basic syntax for declaring a pointer in C is as follows:

           data_type *pointer_name;

code:

#include<stdio.h>
int main()
{
    int a=10,*p;
    p=&a; //Address of a
 
    printf("\n Value of  A           : %d",a);
    printf("\n Address of  A         : %d",&a);
    printf("\n Value of  P           : %d",p);
    printf("\n Address of  P         : %d",&p);
    printf("\n P Dereferencing       : %d",*p);
 
    return 0;
}
 
To download raw file Click Here
Output
 Value of  A           : 10
 Address of  A         : 6356732
 Value of  P           : 6356732
 Address of  P         : 6356728
 P Dereferencing       : 10
---------------------------------------------------------

Double pointer in c:

code:

#include <stdio.h>

int main() {
   int a=10,*p;
   p=&a;
   int **q;
   printf( "\n value of A :%d",a);
   printf( "\n Address of A :%d",&a);
   printf( "\n value of p :%d",p);
   printf( "\n Address of p :%d",&p);
   printf( "\n P dereference of p :%d",*p);
   printf("\n -----------------------------------");
      q=&p;
   printf( "\n value of p :%d",p);
   printf( "\n Address of p :%d",&p);
   printf( "\n value of q :%d",q);
   printf( "\n Address of q :%d",&q);
   printf( "\n q dereference of q :%d",**q);
    return 0;
}

output:

 value of A :10
 Address of A :128194924
 value of p :128194924
 Address of p :128194912
 P dereference of p :10
 ----------------------
 value of p :128194924
 Address of p :128194912
 value of q :128194912
 Address of q :128194904
 q dereference of q :10

------------------------------------------------------------------------------

pointer aritmentic in c :

code:
#include <stdio.h>

int main() {
   int a=10,*p,*r;
   p=&a;
   r=p+1;
   printf("\n size of integer:%d",sizeof(a));
  printf("\n value of p:%d",p);
   printf("\n value of r:%d",r);
    return 0;
}
output:

size of integer:4
value of p:915289132
value of r:915289136

---------------------------------------------------------------------------------
ARRAY VALUES WITH POINTERIN C:
HOW TO HANDLE ARRAY VALUE IN C PROGRAM:

#include <stdio.h>

int main() {
   int a[]={10,20,30,40,50};
   int *p;
   p=&a;
   printf("\n size of integer:%d",sizeof(int));
   printf("\n size of a:%d",sizeof(a));
   printf("\n length of a:%d",sizeof(a)/sizeof(int));
   printf("\n address of a :%d",&a);
   printf("\n value of p:%d",p);
   printf("\n dereference of p:%d",*p);
    printf("\n-----------------------------------");
   p++;
    printf("\n value of p :%d",&p);
   printf("\n value of *p:%d",*p);
   printf("\n-----------------------------------");
  printf("\n value of *++p :%d",*++p);
   printf("\n value of ++*p:%d",++*p);
    return 0;
}

OUTPUT:

size of integer:4
 size of a:20
 length of a:5
 address of a :-104187280
 value of p:-104187280
 dereference of p:10
-----------------------------------
 value of p :-104187288
 value of *p:20
-----------------------------------
 value of *++p :30
 value of ++*p:31

------------------------------------------------------------------------

GENERIC POINTER (OR) VOID POINTER IN C:
In C programming, a void pointer, also known as a generic pointer, is a pointer that can point to any type of data. It is declared using the void * data type.

code:

#include <stdio.h>

int main() {
    int a[]={10,20,30};
    void *p;
    p=a;
    printf("\n *p:%d",*(int *)p);

    return 0;
}
OUTPUT:

*p:10
---------------------------------------------------------------------------

MALLOC FUNCTION IN C:
In C programming, the malloc() function is used to dynamically allocate memory during runtime. 
It is defined in the stdlib.h library and is used to allocate a block of memory of a specified size. The size of the memory block is specified in bytes.
#include <stdio.h>
#include<stdlib.h>
int main() {
    int i,n;
    printf("\n enter the limit: ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    
    if (ptr==NULL)
    {
        printf("\n memory not available");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("\n enter the value:");
        scanf("%d",ptr+i);
    }
     for(i=0;i<n;i++)
     {
         printf("\n %d",*(ptr+i));
     }
    return 0;
}

OUTPUT:
enter the limit: 3
enter the value:10
enter the value:20
enter the value:30
10
 20
 30
-------------------------------------------------------------------------------------------
calloc() Function in c:

In C programming, the calloc() function is used to dynamically allocate memory for an array during runtime, similar to the malloc() function.

code:

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //void* calloc(size_t n,size_t size)
 
    int i,n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
 
    if(ptr==NULL)
    {
        printf("Memory Not Available ...");
        exit(1);
    }
 
    for(i=0; i<n; i++)
    {
        printf("Enter a integer : ");
        scanf("%d",ptr+i);
    }
 
    for(i=0; i<n; i++)
    {
        printf("\n%d :  %d  ",&ptr+i,*(ptr+i));
    }
 
    return 0;
}

OUTPUT:
Enter The Limit : 5
Enter a integer : 1
Enter a integer : 2
Enter a integer : 3
Enter a integer : 4
Enter a integer : 5

6356724 :  1
6356728 :  2
6356732 :  3
6356736 :  4
6356740 :  5
------------------------------------------------------
Realloc Function in C:
he realloc function in C is used to dynamically change the size of a previously allocated memory block. 
The function takes two arguments: a pointer to the previously allocated memory block and the new size of the memory block. 

CODE:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //void * realloc(void *ptr,size_t new_size)
    int i;
    int *ptr=(int *) malloc(3*sizeof(int));
 
    if(ptr==NULL)
    {
        printf("Memory Not Available ...");
        exit(1);
    }
 
    printf("\nEnter 3 Nos : \n");
    for(i=0; i<3; i++)
    {
        scanf("%d",ptr+i);
    }
 
    ptr=(int *) realloc(ptr,5*sizeof(int));
    for(i=3; i<5; i++)
    {
        scanf("%d",ptr+i);
    }
 
    for(i=0; i<5; i++)
    {
        printf("%d  ",*(ptr+i));
    }
    return 0;
}
 
 
Output:
Enter 3 Nos :
1
2
3
4
5
1  2  3  4  5
-----------------------------------------------------------------------------------
NULL POINTER IN C:

*) A NULL pointer is a pointer that does not point to any memory address
*) NULL when we assign to a pointer its become NULL pointer.

eg:
int main()
{
int*p=NULL;
return 0;
}

USES:
*) It uses to initialize a pointer has no valid address.
*)it useful for handling errors using malloc,calloc,realloc funcitons.
------------------------------------------------------------------------------------------

FREE FUNCTION IN C:
The free function in C is used to deallocate memory that was previously allocated by malloc, calloc, or realloc. 
It takes as an argument a pointer to the memory that needs to be freed.
Once the memory has been freed, the pointer should not be used again as it may cause undefined behavior

#include <stdio.h>
#include<stdlib.h>
int *getting_values()
{
    int i;
    int *ptr=(int*)malloc(3*sizeof(int));
    for(i=0;i<3;i++)
    {
        printf("\n enter the value:");
        scanf("%d",ptr+i);
        
    }
    return ptr;
    
}
int main() {
   int i,n=0;
   int *ptr=getting_values();
   for (i=0;i<3;i++)
   
{
    n+=*(ptr+i);
}
printf("total:%d",n);
free(ptr);
ptr=NULL;
    return 0;
}

output:
enter the value:10
enter the value:20
enter the value:30
total:60
-----------------------------------------------------------------------
