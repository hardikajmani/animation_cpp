#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<welcome.h>
#include<dos.h>

void main()
{
  int i,screen[80][26],j;
  clrscr();
  welcome(screen);
  for(i=0;i<80;i++)
    {
     for(int j=0;j<26;j++)
	if(screen[i][j]==1)
	   { gotoxy(i,j);
	     delay(40);
	     cout<<(char)219;
	   }
      }
  getch();
}