#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
     char ch='y';
   int i;
   clrscr();
   textcolor(CYAN);
   cprintf("\n\n\t\t\n                             SREE VISION-2008\n\n");
   textcolor(MAGENTA);
   cprintf("\n                                           PLAYING CASIO WITH KEY BOARD WITH THE HELP OF C-PROGRAMING    \n");
   textcolor(YELLOW);
   cprintf("\n\n                          MOHAMMAD.ASLAM     	      CHANDRA BHANU PULLURI   ");
   textcolor(LIGHTRED);
   cprintf("\n\n\n                                TO EXIT PRESS *: ");

   while(ch!='*')
   { ch=getch();

     switch(ch)
     {
       case 'a': printf("a\t");
		 sound(190);
		 break;
       case 'b': printf("b\t");
		 sound(210);
		 break;
       case 'c': printf("c\t");
		 sound(230);
		 break;
       case 'd': printf("\nd\t");
		 sound(240);
		 break;
       case 'e': printf("e\t");
		 sound(250);
		 break;
       case 'f': printf("f\t");
		 sound(260);
		 break;
       case 'g': printf("g\t");
		 sound(269);
		 break;
       case 'h': printf("\nh\t");
		 sound(275);
		 break;
       case 'i': printf("i\t");
		 sound(280);
		 break;
       case 'j': printf("j\t");
		 sound(290);
		 break;
       case 'k': printf("k\t");
		 sound(300);
		 break;
       case 'l': printf("\nl\t");
		 sound(320);
		 break;
       case 'm': printf("m\t");
		 sound(330);
		 break;
       case 'n': printf("n\t");
		 sound(340);
		 break;
       case 'o': printf("\no\t");
		 sound(350);
		 break;
       case 'p': printf("p\t");
		 sound(360);
		 break;
       case 'q': printf("q\t");
		 sound(370);
		 break;
       case 'r': printf("r\t");
		 sound(380);
		 break;
       case 's': printf("s\t");
		 sound(390);
		 break;
       case 't': printf("\nt\t");
		 sound(400);
		 break;
       case 'u': printf("u\t");
		 sound(410);
		 break;
       case 'v': printf("v\t");
		 sound(420);
		 break;
       case 'w': printf("\nw\t");
		 sound(430);
		 break;
       case 'x': printf("x\t");
		 sound(440);
		 break;
       case 'y': printf("y\t");
		 sound(450);
		 break;
       case 'z': printf("z\t");
		 sound(460);
		 break;

       default : printf("*");
     }
   }
     nosound();
     getch();
}
















