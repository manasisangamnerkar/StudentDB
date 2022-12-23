#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
   int roll_no,dsa,eca,maths;
   float percent;
   char name[50];
}s[100];

void main()
{
int i,n,ch,c,j,temp,k,emp=0,roll_no,new,opt1;

printf("\nenter the number of students:");
scanf("%d",&n);

printf("\nEnter the details of the students:");

for(i=0;i<n;i++)

      {
printf("\nRoll no of student-%d:",i+1);
scanf("%d",&s[i].roll_no);


printf("\nenter the name of the student:");
scanf("%s",&s[i].name);

printf("\nenter the marks obtained in");

printf("\nDSA:");
scanf("%d", &s[i].dsa);

printf("ECA:");
scanf("%d", &s[i].eca);

printf("Maths:");
scanf("%d", &s[i].maths);

s[i].percent=(s[i].dsa + s[i].maths + s[i].eca)/3;

printf("\npercentage of marks obtained:%.2f\n",s[i].percent);
     }

do{

printf("\n _______________MENU_____________");
printf("\n 1.Change Data of the Student");
printf("\n 2.Sort Students ");
printf("\n 3.Add a Student");
printf("\n Enter your choice:");
scanf("%d", &ch);

switch(ch)
{
case 1: //data change

printf("enter the roll no of the student:");
scanf("%d",&i+1);
       
       
        do{
          printf("\nEnter the field to be changed:");
          printf("\n1.Name");
          printf("\n2.marks in Maths");
          printf("\n3.marks in DSA");
          printf("\n4.marks in ECA");
          printf("\n5.exit");
          printf("\nenter your choice:");
          scanf("%d",&c);
         
          switch(c)
          {
          case 1: //name
          printf("enter the new name:");
          scanf("%s",&s[i].name);
          break;
         
          case 2://maths
          printf("enter new maths marks:");
          scanf("%d", &s[i].maths);
          break;

          case 3://DSA
                 printf("enter new DSA marks:");
                 scanf("%d" , &s[i].dsa);
                 break;
         
          case 4://ECA
                 printf("enter new ECA marks:");
                 scanf("%d" , &s[i].eca);
                 break;

          printf("\nDo you want to Continue?(1:YES/0:NO)");
  	      scanf("%d", &opt1);
  	      }while(opt1!=0);
          
          break;

case 2: // sorting students
printf("\n Bubble Sort:");
for(i=0;i<n-1;i++)
{
for(j=0;j<i-n-1;j++)
{
if(s[i].roll_no>s[i+1].roll_no)
{
temp=s[j].roll_no;
s[j].roll_no=s[j+1].roll_no;
s[j+1].roll_no=temp;
}
}
}
printf("sorted array:\n");
for(i=0;i<n;i++)
{
printf("%d %s",i+1,s[i].name);
}
break;

case 3://add students
printf("\nenter the number of students to be added:");
scanf("%d",&k);

printf("\n enter the deatils:");
new=n+k;

for(i=n+1;i<new;i++)
{
printf("\nRoll no of student-%d:",i+1);
scanf("%d",&s[i].roll_no);

printf("\nenter the name of the student:");
scanf("%s",&*s[i].name);

printf("\nenter the marks obtained in");

printf("\nDSA:");
scanf("%d", &s[i].dsa);

printf("ECA:");
scanf("%d", &s[i].eca);

printf("Maths:");
scanf("%d", &s[i].maths);

s[i].percent=(s[i].dsa + s[i].maths + s[i].eca)/3;

printf("\npercentage of marks obtained:%.2f",s[i].percent);
}

emp=n;
n=new;

}
}while(ch!=3);
}
	
