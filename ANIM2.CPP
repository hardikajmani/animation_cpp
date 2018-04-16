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
	     delay(50);
	     if(i>=2 && i<=12) cout<<'W';
	     if(i>=14 && i<=16) cout<<'E';
	     if(i>=19 && i<=21) cout<<'L';
	     if(i>=23 && i<=25) cout<<'C';
	     if(i>=27 && i<=31) cout<<'O';
	     if(i>=33 && i<=37) cout<<'M';
	     if(i>=39 && i<=41) cout<<'E';
	   }
      }
  getch();
}