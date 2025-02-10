#include<stdio.h>
#include<string.h>
#include<process.h>
int ch;
int regno[10];
char pass[10];
int n, i, p, q;
char str3[10] = "code";
int m1[10], m2[10], m3[10];
int total[10];
float avg[10];
char name[20][10], usn[10];
char str4[10] = "tech000";

char address[40][40];
int phone_no[10];
char email[20][10];
char course[10][10];

void Display();
void read();
void add();
void display();
void main()
     {
printf("Enter Username :\n");
scanf("%s", usn);
printf("Enter Password :\n");
scanf("%s", pass);
if((strcmp(usn,str3)==0) && (strcmp(pass,str4)==0))
     {
display();
printf("\n\t\t\t\t\t######Login successful######\n\n");
display();
printf("\n\t\t\t**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
printf("\n\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n\t\t\t = WELCOME \t\t\t\t\t=");
printf("\n\t\t\t = TO \t\t\t\t\t=");
printf("\n\t\t\t = STUDENT \t\t\t\t\t=");
printf("\n\t\t\t = MANAGEMENT \t\t\t\t\t=");
printf("\n\t\t\t = SYSTEM \t\t\t\t\t=");
printf("\n\t\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
printf("\n\t\t\t**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
display();
printf("\n:-:-:-:Enter the number of student:-:-:-:\n");
scanf("%d", &n);
while (1)
   {
display();
printf("\n\t\t\tMENU");
printf("\n\t\t\t 1: Insert student details\n");
printf("\t\t\t 2: Display student details\n");
printf("\t\t\t 3: Insert new student details\n");
display();
printf("\n:-:-:-:Enter your choice:-:-:-:\n");
scanf("%d", &ch);
switch (ch)
{
case 1:
display();
printf("\n:-:-:-:Enter the student details:-:-:-:\n");
for (i=0;i<n;i++)
{
read();
}
break;
case 2:
printf(":-:-:-:Student details are:-:-:-:\n");
display();
for (i=0;i<n;i++)
{
Display();
}
break;
case 3:
display();
printf("\n:-:-:-:Enter the new student details:-:-:-:\n");
display();
printf("\nEnter the number of student\n");
scanf("%d", &p);
display();
q = n;
n = n + p;
for (i=q;i<n;i++)
{
add();
display();
}
break;
case 4:
display();
printf("\n\t\t\t\t\tThank you!!!\n");
display();
exit(0);
}
}
}
else
{
display();
printf("\n\t\t\t\t\t######Login unsuccessful try again######\n");
display();
}
}
void display()
{
int i;
for(i=0;i<35;i++)
{
printf("*-*");
}
}
void read()
{
printf(" Enter the regno\n");
scanf("%d", &regno[i]);
printf(" Enter the student name\n");
scanf("%s", name[i]);
printf("Enter the address\n");
scanf("%s", address[i]);
printf("Enter the phone_no\n");
scanf("%d", &phone_no[i]);
printf("Enter the email\n");
scanf("%s", email[i]);
printf("Enter the course\n");
scanf("%s", course[i]);
printf("Enter the marks of m1\n");
scanf("%d", &m1[i]);
printf("Enter the marks of m2\n");
scanf("%d", &m2[i]);
printf("Enter the marks of m3\n");
scanf("%d", &m3[i]);
total[i] = m1[i] + m2[i] + m3[i];
avg[i] = (float)total[i] / 3;
}
void Display()
{
printf("\nRegno :%d\n",regno[i]);
printf("Name :%s\n",name[i]);
printf("Address :%s\n",address[i]);
printf("Phone_no :%d\n",phone_no[i]);
printf("Email :%s\n",email[i]);
printf("Course :%s\n",course[i]);
printf("Total :%d\n",total[i]);
printf("Avg :%f\n",avg[i]);
}
void add()
{
printf("\nEnter the regno\n");
scanf("%d", &regno[i]);
printf("Enter the student name\n");
scanf("%s", name[i]);
printf("Enter the address\n");
scanf("%s", address[i]);
printf("Enter the phone_no\n");
scanf("%d", &phone_no[i]);
printf("Enter the email\n");
scanf("%s", email[i]);
printf("Enter the course\n");
scanf("%s", course[i]);
printf("Enter the marks of m1\n");
scanf("%d", &m1[i]);
printf("Enter the marks of m2\n");
scanf("%d", &m2[i]);
printf("Enter the marks of m3\n");
scanf("%d", &m3[i]);
total[i] = m1[i] + m2[i] + m3[i];
avg[i] = (float)total[i] / 3;
}