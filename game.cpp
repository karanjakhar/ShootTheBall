#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;
void main()
{ clrscr();
int i,q=1,j,a,b,l,p=0, bcx=60,bcy=60;
      int gdriver = DETECT, gmode;
      initgraph(&gdriver,&gmode," ");
      rectangle(50,100,450,400);
      setcolor(4);
      settextstyle(1,0,8);
      outtextxy(80,200,"WELCOME");
      delay(3000);

  for(i=5;i<=400;i=i+5)
    { rectangle(50,100,450,400);
      settextstyle(1,0,8);
      settextstyle(2,0,5);
      outtextxy(80,100,"HERE IS A GAME DEVELOPED BY USING");
      settextstyle(3,0,4);
      outtextxy(80,150,"C++ GRAPHICS");
      settextstyle(2,0,6);
      outtextxy(80,250,"MADE BY - KARAN JAKHAR");
      outtextxy(80,300,"GUIDED BY - Mr. A.K SRIVASTAV");
      setcolor(14);
      circle(50+i,100,40);  //first cir
      circle(35+i,80,10);
      circle(65+i,80,10);
      arc(50+i,100,200,335,20);
      circle(50,400-i+5,40); //secondcir     circle(35,380-i+5,10);
      circle(65,380-i+5,10);
      arc(50,400-i+5,200,335,20);
      circle(450-i+5,400,40);    //third cir
      circle(435-i+5,380,10);
      circle(465-i+5,380,10);
      arc(450-i+5,400,200,335,20);
      circle(450,100+i,40);      //forth cir
      circle(435,80+i,10);
      circle(465,80+i,10);
      arc(450,100+i,200,335,20);
      delay(60);
      cleardevice();
    }
      rectangle(50,100,450,400);
      settextstyle(1,0,8);
      settextstyle(2,0,5);
      outtextxy(80,100,"HERE IS A GAME DEVELOPED BY USING");
      settextstyle(3,0,4);
      outtextxy(80,150,"C++ GRAPHICS");
      settextstyle(2,0,6);
      outtextxy(80,250,"MADE BY - KARAN JAKHAR");
 outtextxy(80,300,"GUIDED BY - Mr. A.K SRIVASTAV");
      setcolor(14);
      circle(50,100,40);  //first cir      circle(35,80,10);
      circle(65,80,10);
      arc(50,100,200,335,20);
      circle(50,400,40); //second cir
      circle(35,380,10);
      circle(65,380,10);
      arc(50,400,200,335,20);
      circle(450,400,40);    //thirdcir      circle(435,380,10);
      circle(465,380,10);
      arc(450,400,200,335,20);
      circle(450,100,40);      //forth cir
      circle(435,80,10);
      circle(465,80,10);
      arc(450,100,200,335,20);
      outtextxy(200,400,"PRESS ENTER KEY");
      getch();

      cleardevice();
  while(kbhit()==0)
    { outtextxy(150,200,"YOU WILL GET THREE CHANCE TO SHOOT THE BALL");
      outtextxy(180,250,"FOR EACH SHOOT WILL GET 10 POINTS");
      outtextxy(200,400,"PRESS ENTER KEY TO START");
      outtextxy(200,300,"PRESS ENTER KEY TO SHOOT");
    }

      getch();
  for(j=1;j<=3;j++)
    { cleardevice();
  if(q==1)
    { outtextxy(200,200,"FIRST CHANCE");
      delay(2000);       }
  if(q==2)
    { outtextxy(200,200,"SECOND CHANCE");
      delay(2000);}
  if(q==3)
    { outtextxy(200,200,"THIRD CHANCE");
      delay(2000);}
      cleardevice();
      setbkcolor(9);
      setcolor(1);
      line(30,450,240,450);
      line(300,450,500,450);
      line(240,450,240,400);
      line(300,450,300,400);
      circle(270,425,30);

  while(kbhit()==0)
    { outtextxy(bcx=bcx+5,bcy+10,"SHOOT IT");      //only moving
      setfillstyle(1,6);
      circle(bcx=bcx+5,bcy,40);  //big cir
      floodfill(bcx=bcx+5,bcy,1);
      line(30,450,240,450);
      line(300,450,500,450);
      line(240,450,240 ,400);
      line(300,450,300,400);
      setfillstyle(2,4);
      circle(270,425,30) ;
      floodfill(270,425,1);
      delay(50);
      cleardevice();
  if(bcx>550)
      bcx=60;
    }
   int x = bcx+10;
   a=270,b=425 ;
  for(i=5;i<=300;i=i+5)
    { circle(bcx=bcx+5,bcy,40);
      setfillstyle(1,6);
      floodfill(bcx=bcx+5,bcy,1);        //shooting
      line(30,450,240,450);
      line(300,450,500,450);
      line(240,450,240 ,400);
      line(300,450,300,400);
      b=b-20;
      circle(a,b,30) ;
      setfillstyle(2,4);
      floodfill(a,b,1);
  if(b<60)  //cir rev
      b=60;
      delay(50);
      cleardevice();
    }

      getch();
      settextstyle(1,0,5);

  if(x>50&&x<250)
    { outtextxy(200,300,"GOOD");
      p++;}
  else
      outtextxy(200,300,"YOU FAILED!!");
      q++;
      delay(2000);
      cleardevice();   }
      getch();
  if(p==0)
      outtextxy(200,200,"YOUR SCORE IS = 0");
  else if(p==1)
      outtextxy(200,200,"YOUR SCORE IS = 10");
  else if(p==2)
      outtextxy(200,200,"YOUR SCORE IS = 20");
  else if(p==3)
      outtextxy(200,200,"YOUR SCORE IS = 30");
      delay(2000);
      cleardevice();
   for(i=1;i<=15;i++)
    { setcolor(i);
      setfillstyle(i,i+2) ;
      rectangle(50,100,450,400);
      floodfill(60,200,i);
      setcolor(i+1);
      setbkcolor(i+2);
      settextstyle(1,0,7);
      outtextxy(100,200,"THANKYOU")   ;
      settextstyle(2,0,4)   ;
      setcolor(i-1);
      outtextxy(200,400,"PRESS ENTER TO EXIT ");
      delay(1000);  }
      getch();
      getch();

    }
}

