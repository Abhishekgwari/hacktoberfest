#include <stdio.h>
#include <string.h>
struct student
{
   int id;
   int marks;
   char fav_char;
   char name [34];
};




int main()
{
struct student Abhishek,aman, lokesh;
Abhishek.id = 1;
aman.id = 2;
lokesh.id = 3;

Abhishek.marks = 499;
aman.marks = 501;
lokesh.marks = 490;


Abhishek.fav_char = 'p';
aman.fav_char = 'p';
lokesh.fav_char= 'p';
strcpy(Abhishek.name, "Abhishek gwari srudent of the year");

printf("Abhishek got %d mmarks\n" , Abhishek.marks);
printf("Abhishek's name is  %s\n" , Abhishek.name);
    return 0;
}