#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 0;

   initgraph(&gdriver, &gmode, "");

   errorcode = graphresult();
   if (errorcode != grOk)  
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(1);

   /* draw the circle */
   for(radius=0;radius<=100;radius++)
   circle(midx, midy, radius);

   /* clean up */
   getch();
   closegraph();
   return 0;
}