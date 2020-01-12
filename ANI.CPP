#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void child(int i);
void teacher(int m,int y);
void hut();
void smile();
void rotate();
void aero(int p);
void boundaryfill(int x,int y,int fcolor,int bcolor);
void boundaryfill8(int x,int y,int fcolor,int bcolor);
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 settextstyle(1,0,7);
 {            setcolor(LIGHTCYAN);
 outtextxy(140,200,"C.G JOURNEY");
 }
 delay(2000);
 cleardevice();
 closegraph();
 initgraph(&gd,&gm,"");
 for(int i=0;i<30;i++)
 {
  setfillstyle(9,RED);
  bar(0,350,100,479);
  rectangle(100,10,579,70);
  outtextxy(270,30,"TIT");
  rectangle(4,200,200,250);
  line(190,250,190,479);
  line(194,250,194,479);
  line(14,250,14,350);
  line(10,250,10,350);
  outtextxy(50,225,"TIT&S College");
  line(540,200,500,479);
  line(570,200,600,479);
  ellipse(555,200,0,360,14,4);
  line(450,350,450,479);
  line(490,479,490,350);
  line(450,350,490,350);
  rectangle(400,100,639,180);
  outtextxy(470,120,"T.I.T MILL");
  line(420,180,420,479);
  line(425,180,425,479);
  line(619,180,619,479);
  line(624,180,624,479);
  line(0,479,679,479);
  line(0,350,0,479);
  line(0,350,100,350);
  line(100,350,100,479);
  ellipse(50,345,0,360,20,2);
  line(49,342,49,336);
  line(51,342,51,336);
  rectangle(20,300,80,336);
  int l=15*i;

  line(450-l,150,455-l,155);
  line(450-l,150,455-l,145);   //AEROPLANE
  line(455-l,145,485-l,145);
  line(455-l,155,485-l,155);
  line(485-l,145,505-l,85);
  line(485-l,155,505-l,215);
  line(505-l,85,505-l,145) ;
  line(505-l,215,505-l,155);
  line(505-l,145,545-l,145);
  line(505-l,155,545-l,155);
  line(545-l,145,550-l,130);
  line(545-l,155,550-l,170);
  line(550-l,130,550-l,145);
  line(550-l,170,550-l,155);
  line(550-l,145,555-l,145);
  line(550-l,155,555-l,155);
  line(555-l,145,555-l,155);
  delay(100);
  cleardevice();
 }
closegraph();
initgraph(&gd,&gm,"");
int m;
int o;
int y;
for(i=0;i<30;i++)
{
 child(i);
 m=10*i;
 teacher(m,0);
 o=i;
 delay(100);
 cleardevice();
}
teacher(m,0);
child(o);
delay(500);
line(230,320,240,310);
line(230,320,245,310);
ellipse(260,305,0,360,50,8);
outtextxy(217,303,"show work!");
delay(1000);
cleardevice();
hut();
delay(1000);
cleardevice();
for(i=0;i<21;i++)
{
 child(o);
 y=10*i;
 teacher(m,y);
 delay(100);
 cleardevice();
}
child(o);
teacher(m,y);
line(230,120,240,110);
line(230,120,245,110);
ellipse(260,105,0,360,50,8);
outtextxy(218,100,"show work!");
delay(1000);
cleardevice();
smile();
delay(1500);
cleardevice();
int k;
for(i=0;i<21;i++)
{
 child(o);
 k=(20*i)-m;
 teacher(-k,y);
 delay(100);
 cleardevice();
}
child(o);
teacher(-k,y);
line(610,110,620,100);
line(610,110,615,100);
ellipse(590,95,0,360,50,8);
outtextxy(553,90,"show work!");
delay(1000);
cleardevice();
rotate();
delay(1000);
cleardevice();
int c;
for(i=0;i<30;i++)
{
 c=15*i;
 aero(c);
 delay(100);
 cleardevice();
}

getch();
}

void child(int i)
{
 rectangle(100,10,579,70);
 outtextxy(260,40,"LAB-COMPUTER GRAPHICS");
 line(0,279,679,279);
 line(0,479,679,479);
 line(0,350,0,479);
 setfillstyle(9,RED);
 bar(0,350,100,479);
 line(0,350,0,479);
 line(0,350,100,350);
 line(100,350,100,479);
 setfillstyle(1,BROWN);
 fillellipse(170-i,400,35,4);
 fillellipse(210-i,370,4,30);
 line(168-i,403,168-i,479);
 line(173-i,403,173-i,479);

 ellipse(50,345,0,360,20,2);
 line(49,342,49,336);
 line(51,342,51,336);
 rectangle(20,300,80,336);

 rectangle(160-i,350,190-i,395);
 line(168-i,395,162-i,400);
 line(172-i,395,166-i,400);
 line(178-i,395,162-i,400);
 line(182-i,395,166-i,400);
 circle(175-i,335,15);
 circle(170-i,330,2);
 circle(179-i,330,2);
 line(175-i,333,175-i,337);
 arc(175-i,339,180-i,360,3);
 line(175-i,370,165-i,380);
 line(177-i,370,167-i,380);

 line(181-i,370,171-i,390);
 line(183-i,370,173-i,392);

 line(165-i,380,125-i,350);
 line(167-i,380,127-i,350);

 line(171-i,390,168-i,390);
 line(168-i,390,122-i,350);
 line(173-i,392,123-i,350);


 line(0,150,0,279);
 line(0,150,100,150);
 line(100,150,100,279);
 setfillstyle(9,RED);
 bar(1,151,99,278);

 setfillstyle(1,BROWN);
 fillellipse(170-i,200,35,4);
 fillellipse(210-i,170,4,30);
 line(168-i,203,168-i,279);
 line(173-i,203,173-i,279);

 ellipse(50,145,0,360,20,2);
 line(49,142,49,136);
 line(51,142,51,136);
 rectangle(20,100,80,136);

 rectangle(160-i,150,190-i,195);
 line(168-i,195,162-i,200);
 line(172-i,195,166-i,200);
 line(178-i,195,162-i,200);
 line(182-i,195,166-i,200);
 circle(175-i,135,15);
 circle(170-i,130,2);
 circle(179-i,130,2);
 line(175-i,133,175-i,137);
 arc(175-i,139,180-i,360,3);
 line(175-i,170,165-i,180);
 line(177-i,170,167-i,180);

 line(181-i,170,171-i,190);
 line(183-i,170,173-i,192);

 line(165-i,180,125-i,150);
 line(167-i,180,127-i,150);

 line(171-i,190,168-i,190);
 line(168-i,190,122-i,150);
 line(173-i,192,123-i,150);

 line(400,150,400,279);
 line(400,150,500,150);
 line(500,150,500,279);
 setfillstyle(9,RED);
 bar(401,151,499,278);

 setfillstyle(1,BROWN);
 fillellipse(570-i,200,35,4);
 fillellipse(610-i,170,4,30);
 line(568-i,203,568-i,279);
 line(573-i,203,573-i,279);

 ellipse(450,145,0,360,20,2);
 line(449,142,449,136);
 line(451,142,451,136);
 rectangle(420,100,480,136);

 rectangle(560-i,150,590-i,195);
 line(568-i,195,562-i,200);
 line(572-i,195,566-i,200);
 line(578-i,195,562-i,200);
 line(582-i,195,566-i,200);
 circle(575-i,135,15);
 circle(570-i,130,2);
 circle(579-i,130,2);
 line(575-i,133,575-i,137);
 arc(575-i,139,180-i,360,3);
 line(575-i,170,565-i,180);
 line(577-i,170,567-i,180);

 line(581-i,170,571-i,190);
 line(583-i,170,573-i,192);

 line(565-i,180,525-i,150);
 line(567-i,180,527-i,150);

 line(571-i,190,568-i,190);
 line(568-i,190,522-i,150);
 line(573-i,192,523-i,150);

}

void teacher(int m,int y)
{
line(500-m,350-y,470-m,450-y);
line(470-m,450-y,530-m,450-y);
line(530-m,450-y,500-m,350-y);

line(515-m,400-y,540-m,430-y);
line(517-m,400-y,540-m,430-y);

line(485-m,400-y,460-m,430-y);
line(487-m,400-y,460-m,430-y);
line(490-m,450-y,490-m,479-y);
line(493-m,450-y,493-m,479-y);
line(510-m,450-y,510-m,479-y);
line(513-m,450-y,513-m,479-y);
circle(500-m,330-y,20);

circle(490-m,330-y,3);
circle(505-m,330-y,3);
line(497-m,330-y,497-m,335-y);
arc(497-m,335-y,180,360,4);
}

void boundaryfill(int x,int y,int fcolor,int bcolor)
{
int current=getpixel(x,y);
if((current!=bcolor)&&(current!=fcolor))
{putpixel(x,y,fcolor);
boundaryfill(x+1,y,fcolor,bcolor);
boundaryfill(x-1,y,fcolor,bcolor);
boundaryfill(x,y-1,fcolor,bcolor);
boundaryfill(x,y+1,fcolor,bcolor);

}
}
void boundaryfill8(int x,int y,int fcolor,int bcolor)
{int current=getpixel(x,y);
if((current!=bcolor)&&(current!=fcolor))
{putpixel(x,y,fcolor);
boundaryfill8(x+1,y,fcolor,bcolor);
boundaryfill8(x-1,y,fcolor,bcolor);
boundaryfill8(x,y-1,fcolor,bcolor);
boundaryfill8(x,y+1,fcolor,bcolor);
boundaryfill8(x-1,y+1,fcolor,bcolor);
boundaryfill8(x+1,y+1,fcolor,bcolor);
boundaryfill8(x-1,y-1,fcolor,bcolor);
boundaryfill8(x+1,y-1,fcolor,bcolor);
}
}
void hut()
{
line(160,90,120,140); //1
line(160,90,200,140); //2
line(120,140,200,140);//3
line(160,90,260,90);  //4
line(200,140,300,140);//5
circle(160,120,5);
line(260,90,300,140); //6
line(120,140,120,290);//7
line(120,290,200,290);//9
line(200,140,200,290);//8
line(140,290,180,290);
line(140,290,140,190);
line(140,190,180,190);
line(180,190,180,290);
line(200,290,300,290);//10
line(300,140,300,290);//11
rectangle(230,190,270,160);
line(250,160,250,190);
line(230,175,270,175);//window
line(150,200,150,280);
line(140,190,150,200);//gate
line(150,280,140,290);
line(170,200,170,280);
line(180,190,170,200);
line(170,280,180,290);
boundaryfill(150,130,2,15);
boundaryfill(230,115,3,15);
boundaryfill(160,215,6,15);
boundaryfill8(232,162,7,15);
boundaryfill8(269,189,1,15);
outtextxy(350,200,"POLYGON-FILLING");
outtextxy(350,220,"USING_BOUNDARY_FILL");

}
void smile()
{

float xc,yc,r,x1,y1,y2,x2;
  setcolor(BLACK);
  cout<<"Enter the Centre Coordinates of a Smiley\n";
  cin>>xc>>yc;
  cout<<"Enter the Radius of Smiley\n";
  cin>>r;
  x1=(xc-r+xc)/2;
  y1=(yc-r+yc)/2;
  x2=(xc+r+xc)/2;
  y2=(yc-r+yc)/2;
  setfillstyle(SOLID_FILL,YELLOW);
    fillellipse(xc,yc,r,r);
    circle(xc,yc,r);                  //smiley
 setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(xc-(r+5),yc,xc-r,yc);
    line(xc+r+5,yc,xc+r,yc);
    arc(xc,yc-(2*r),10,170,r+5);          //smile
    floodfill(xc+1,yc-(2*r)+1,BLACK);
 setfillstyle(SOLID_FILL,BLACK);
    fillellipse(x1,y1,r/10,r/10);
    circle(x1,y1,r/10);               //eye1
    arc(x1,y1,20,160,(r/10)+3);       //upeye1
 setfillstyle(SOLID_FILL,WHITE);
    fillellipse(x1,y1,r/20,r/20);
    circle(x1,y1,r/20);               //seye1
 setfillstyle(SOLID_FILL,BLACK);
    fillellipse(x2,y2,r/10,r/10);
    circle(x2,y2,r/10);               //eye2
    arc(x2,y2,20,160,(r/10)+3);       //upeye2
 setfillstyle(SOLID_FILL,WHITE);
    fillellipse(x2,y2,r/20,r/20);
    circle(x2,y2,r/20);               //eye2
 rectangle(x1-(r/6),y1-(r/6),x1+(r/6),y1+(r/6));//lspec
 rectangle(x1-(r/6)-1,y1-(r/6),x1+(r/6)+1,y1+(r/6));//lspec
 rectangle(x2-(r/6),y2-(r/6),x2+(r/6),y2+(r/6));//rspec
 rectangle(x2-(r/6)-1,y2-(r/6),x2+(r/6)+1,y2+(r/6));//rspec
 rectangle(x1+(r/6),y1,x2-(r/6),y1);//stick
 rectangle(x1+(r/6),y1-1,x2-(r/6),y1-1);//stick
 setfillstyle(SOLID_FILL,RED);
    fillellipse(xc,yc,r/20,r/20);    //nose
    circle(xc,yc,r/20);
    line(xc-(r/2),yc+(r/4),xc+(r/2),yc+(r/4));//smileline
setfillstyle(SOLID_FILL,RED);
    arc(xc,yc+(r/4),180,360,r/2);          //smile
    floodfill(xc+1,yc+(r/4)+1,BLACK);
 setfillstyle(SOLID_FILL,WHITE);
    rectangle(xc-(r/15),yc+(r/4),xc,yc+(r/2.5)); //teeth
    floodfill(xc-(r/15)+1,yc+(r/4)+1,BLACK);
    rectangle(xc,yc+(r/4),xc+(r/15),yc+(r/2.5)); //teeth
    floodfill(xc+1,yc+(r/4)+1,BLACK);
 setcolor(LIGHTGRAY);
 setfillstyle(LINE_FILL,LIGHTCYAN);   //headphone
    line(xc-(r+5),yc,xc-r-1,yc);
    line(xc+(r)+1,yc,xc+5+r,yc);
    arc(xc,yc,0,180,r+5);
    arc(xc,yc,0,180,r+1);
    floodfill(xc+1,yc-r-5+1,LIGHTGRAY);
    line(xc-r-1,yc,xc-r-1,yc+r/6);       //headphoneL
    arc(xc-r-1,yc,90,270,r/6);
    floodfill(xc-r-4,yc+1,LIGHTGRAY);
    line(xc+r+1,yc,xc+r+1,yc+r/6);     //headphoneR
    arc(xc+r+1,yc,270,90,r/6);
    floodfill(xc+r+4,yc+1,LIGHTGRAY);
    }

void rotate()
{
float x[10],y[10],n;
cout<<"Enter no. of vertices\n";
cin>>n;
cout<<"Enter vertices of polygon\n";
for(int i=0;i<n;i++)
{
cin>>x[i]>>y[i];
}
//setfillstyle(HATCH_FILL,YELLOW);
for(i=0;i<n-1;i++)
{
line(x[i],y[i],x[i+1],y[i+1]);
}
line(x[n-1],y[n-1],x[0],y[0])  ;
int s,s1 ;
s=(x[0]+x[n-2]) /2;
s1=(y[0]+y[n-2]) /2;
delay(800);
//setfillstyle(HATCH_FILL,YELLOW);
//floodfill(s-1,s1-1,WHITE);
float tx,ty;
float a,a1,a2,x2[10],y2[10];
cout<<"Enter fixed point\n";
cin>>tx>>ty;
cout<<"Enter angle of rotation\n";
cin>>a;
float x1[10],y1[10];
for(i=0;i<n;i++)
{
x1[i]=x[i]-tx;
y1[i]=y[i]-ty;
}
for(int z=a,w=1;z<360;z=z+a,w++)
{
setcolor(w);
float q;
q=(z*3.14)/180;
a1=cos(q);
a2=sin(q);
for(i=0;i<n;i++)
{
x2[i]=(a1*x1[i])-(a2*y1[i]);
y2[i]=(a2*x1[i])+(a1*y1[i]);
}
float x3[10],y3[10];
for( i=0;i<n;i++)
{
x3[i]=abs(x2[i]+tx);
y3[i]=abs(y2[i]+ty);
}
setfillstyle(HATCH_FILL,w);
for(i=0;i<n-1;i++)
{
line(x3[i],y3[i],x3[i+1],y3[i+1]);
}
line(x3[n-1],y3[n-1],x3[0],y3[0])  ;
s=(x3[0]+x3[n-2]) /2;
s1=(y3[0]+y3[n-2]) /2;
delay(800);
floodfill(s-1,s1,w);
}}

void aero(int p)
{
line(450-p,150,455-p,155);
line(450-p,150,455-p,145);   //AEROPLANE
line(455-p,145,485-p,145);
line(455-p,155,485-p,155);
line(485-p,145,505-p,85);
line(485-p,155,505-p,215);
line(505-p,85,505-p,145) ;
line(505-p,215,505-p,155);
line(505-p,145,545-p,145);
line(505-p,155,545-p,155);
line(545-p,145,550-p,130);
line(545-p,155,550-p,170);
line(550-p,130,550-p,145);
line(550-p,170,550-p,155) ;
line(550-p,145,555-p,145);
line(550-p,155,555-p,155);
line(555-p,145,555-p,155);
line(470-p,155,470-p,220);
rectangle(400-p,220,490-p,260);
outtextxy(410-p,240,"THANK-YOU");
}