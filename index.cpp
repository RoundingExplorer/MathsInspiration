#include <iostream.h>
#include <conio.h>
namespace std;
void main()
{
/* This is to clear the screen so that your previous results don't just show up */
clrscr();
/* This is to take all the variables
If you want less variables remove the marks
If you want more number it after adding marks */
float marks1, marks2, marks3, marks4 ,marks5, total, percentage;
/* Let's take the marks */
cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;
/*Let's calculate the total */
total = marks1 + marks2 + marks3 + marks4 + marks5;
cout << "Your marks are" << "=" << " " << total << endl;
cout << "Do you want your mark percentage? (y/n)" << endl;
if (getch()=='y')
{
percentage = (total/500) *100;
cout << "Your percentage is" << " " << percentage << "%" <<endl;
}
else
{
cout << "Bye then";
}
