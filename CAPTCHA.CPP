// _________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL ___________
//________________ C++ PROGRAMMING TO GENERATE RANDOM CAPTCHA ______________


#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
int main()
{
  int i = 0, key, n, x, gd = DETECT, gm;
  char a[10];

  initgraph(&gd, &gm, "C:\\TC\\BGI");
  setbkcolor(15);

  x = getmaxx()/2;

  settextstyle(1, 0, 5);
  settextjustify(1,1);
  setcolor(5);
  outtextxy(x, 20, "CAPTCHA");

  settextstyle(1, 0, 3);
  settextjustify(1,1);
  setcolor(12);
  outtextxy(x, 125, "Press any key to change the generated \"CAPTCHA\"");
  outtextxy(x, 160, "Press escape key to exit...");

  setcolor(15);
  setviewport(100, 200, 600, 400, 1);
  setcolor(RED);
  randomize();

  while (1)
  {
    while (i < 6)
    {
      n = random(3);

      if (n == 0)
      a[i] = 65 + random(26);   // 65 is the ASCII value of A
      else if (n == 1)
	a[i] = 97 + random(26); // 97 is the ASCII value of a
      else
	a[i] = 48 + random(10); // 48 is the ASCII value of 0
      i++;
    }
    a[i] = '\0';
    outtextxy(210, 100, a);
    key = getch();

// Press Escape key to exit
    if (key == 27)
      exit(0);
    clearviewport();
    i = 0;
  }
}


//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________
