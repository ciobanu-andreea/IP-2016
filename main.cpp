#include <iostream>
#include <graphics.h>

using namespace std;

int startPage;
const char* start, *image;
int coordX, coordY;

int unitate_1, unitate_2;
long double valoare;

void unitsPage();
void do_actiune(int);
int get_actiune(int, int);
int get_unitate(int, int);
long double get_valoare();
void Page1();
void Page2();
void Page3();
void Page4();
void Page5();
void Page6();
void Page7();
void Page8();
void Page9();
void Page10();
void Page11();

long double lungime (long double n, char from , char to);
long double arie (long double n, char from , char to);
long double volum (long double n, char from , char to);
long double timp (long double n, char from , char to);
long double viteza (long double n, char from , char to);
long double temperatura (long double n, char from , char to);
long double masa (long double n, char from , char to);
long double energie (long double n, char from , char to);
long double presiune (long double n, char from , char to);
long double densitate (long double n, char from , char to);
long double combustibil (long double n, char from , char to);

int main()
{

    startPage=initwindow(800, 600, "Convertor de unitati", 0, 0, false, true);
    cleardevice();
    unitsPage();
    return 0;
}
void unitsPage()
{
    int actiune_selectata;
    cleardevice();
    start="images/page.jpg";
    readimagefile(start, 0, 0, 800, 600);
    while(!ismouseclick(WM_LBUTTONDOWN))
        {
        delay(300);
        getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
        actiune_selectata=get_actiune(coordX, coordY);
        do_actiune (actiune_selectata);
        }
}
int get_actiune(int x, int y)
{

    if(y>270&&y<295&&x>80&&x<200) return 1;
    if(y>310&&y<330&&x>80&&x<200) return 2;
    if(y>350&&y<370&&x>80&&x<200) return 3;
    if(y>385&&y<400&&x>80&&x<200) return 4;

    if(y>270&&y<295&&x>280&&x<400) return 5;
    if(y>310&&y<330&&x>280&&x<450) return 6;
    if(y>350&&y<370&&x>280&&x<400) return 7;
    if(y>385&&y<400&&x>280&&x<400) return 8;

    if(y>270&&y<295&&x>525&&x<650) return 9;
    if(y>310&&y<330&&x>525&&x<650) return 10;
    if(y>350&&y<370&&x>525&&x<800) return 11;

     if(y>545&&y<575&&x>710&&x<750)return 12;

}
void do_actiune(int actiune_selectata)
{
    if(actiune_selectata==1) Page1();
    if(actiune_selectata==2) Page2();
    if(actiune_selectata==3) Page3();
    if(actiune_selectata==4) Page4();
    if(actiune_selectata==5) Page5();
    if(actiune_selectata==6) Page6();
    if(actiune_selectata==7)Page7();
    if(actiune_selectata==8)Page8();
    if(actiune_selectata==9)Page9();
    if(actiune_selectata==10)Page10();
    if(actiune_selectata==11)Page11();
    if(actiune_selectata==12) closegraph();

}
void Page1()
{
    cleardevice();
    image="images/page1.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<lungime(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page2()
{
    cleardevice();
    image="images/page2.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<arie(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page3()
{
    cleardevice();
    image="images/page3.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<volum(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page4()
{
    cleardevice();
    image="images/page4.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<timp(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page5()
{
    cleardevice();
    image="images/page5.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<viteza(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page6()
{
    cleardevice();
    image="images/page6.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<temperatura(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page7()
{
    cleardevice();
    image="images/page7.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<masa(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page8()
{
    cleardevice();
    image="images/page8.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<energie(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page9()
{
    cleardevice();
    image="images/page9.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<presiune(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page10()
{
    cleardevice();
    image="images/page10.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<densitate(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
void Page11()
{
    cleardevice();
    image="images/page11.jpg";
    readimagefile(image, 0, 0, 800, 600);
    while(1)
    {
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_1=get_unitate(coordX, coordY);
            break;
            }
        valoare=get_valoare();
        bgiout<<fixed<<valoare;
        setbkcolor(WHITE); setcolor(BLACK);
        outstreamxy(300, 423);
        while(1)
        if(ismouseclick(WM_LBUTTONDOWN))
            {
            getmouseclick(WM_LBUTTONDOWN,coordX,coordY);
            unitate_2=get_unitate(coordX, coordY);
            break;
            }
    bgiout<<fixed<<combustibil(valoare, unitate_1, unitate_2);
    setbkcolor(WHITE); setcolor(BLACK);
    outstreamxy(230, 550);
    }
}
int get_unitate(int x, int y)
{
    if(y>330&&y<390&&x>30&&x<90) return 1;
    if(y>470&&y<530&&x>30&&x<90) return 1;

    if(y>330&&y<390&&x>110&&x<170) return 2;
    if(y>470&&y<530&&x>110&&x<170) return 2;

    if(y>330&&y<390&&x>190&&x<250) return 3;
    if(y>470&&y<530&&x>190&&x<250) return 3;

    if(y>330&&y<390&&x>270&&x<330) return 4;
    if(y>470&&y<530&&x>270&&x<330) return 4;

    if(y>330&&y<390&&x>345&&x<405) return 5;
    if(y>470&&y<530&&x>345&&x<405) return 5;

    if(y>330&&y<390&&x>425&&x<485) return 6;
    if(y>470&&y<530&&x>425&&x<485) return 6;

    if(y>330&&y<390&&x>505&&x<565) return 7;
    if(y>470&&y<530&&x>505&&x<565) return 7;

    if(y>330&&y<390&&x>585&&x<645) return 8;
    if(y>470&&y<530&&x>585&&x<645) return 8;

    if(y>330&&y<390&&x>665&&x<725) return 9;
    if(y>470&&y<530&&x>665&&x<725) return 9;

    if(y>330&&y<390&&x>745&&x<799) return 10;
    if(y>470&&y<530&&x>745&&x<799) return 10;

    if(y>545&&y<580&&x>710&&x<780) unitsPage();
    if(y>545&&y<585&&x>655&&x<700){
        bgiout<<"                                         "; setbkcolor(WHITE);outstreamxy(300, 423);
        bgiout<<"                                         "; setbkcolor(WHITE);outstreamxy(230, 550);}

}
long double get_valoare()
{
    int x; long double val, aux; int ok, p10;
    val=0; ok=0; p10=10;
    x=getch(); val=x-'0'; x=getch();
    while(x!=13)
        {
        if(x!=46 && ok==0) {val=val*10+x-'0'; x=getch();}
        else
            if(x==46) {ok=1; x=getch();}
                else
                if(x!=46 && ok==1) {val= val+(long double)(x-'0')/p10; p10=p10*10; x=getch();}
        }
    return val;
}
long double lungime (long double n, char from , char to)
{
    //mm cm dm m dm hm km in ft yd
    // 1  2  3 4  5  6  7  8  9 10
    //         *
    long double x;
    if(from==to) return n;
    if(from!=4 && to!=4) {x=lungime(n, from, 4); x=lungime(x, 4, to); return x;}
    if(to==4)
        {
        if(from==1) return n*0.001;
        if(from==2) return n*0.01;
        if(from==3) return n*0.1;
        if(from==5) return n*10;
        if(from==6) return n*100;
        if(from==7) return n*1000;
        if(from==8) return n*0.0254;
        if(from==9) return n*0.3048;
        if(from==10) return n*0.9144002;
        }
    if(from==4)
        {
        if(to==1) return n*1000;
        if(to==2) return n*100;
        if(to==3) return n*10;
        if(to==5) return n*0.1;
        if(to==6) return n*0.01;
        if(to==7) return n*0.001;
        if(to==8) return n*39.370078;
        if(to==9) return n*3.2808398;
        if(to==10) return n*1.0936130;
        }
}
long double arie (long double n, char from , char to)
{
    //cm m km a ha in ft yd
    // 1 2  3 4  5  6  7  8
    //   *
    long double x;
    if(from==to) return n;
    if(from!=2 && to!=2) {x=arie(n, from, 2); x=arie(x, 2, to); return x;}
    if(to==2)
        {
        if(from==1) return n*0.0001;
        if(from==3) return n*1000000;
        if(from==4) return n*100;
        if(from==5) return n*10000;
        if(from==6) return n*0.0006452;
        if(from==7) return n*0.0929;
        if(from==8) return n*0.8361278;
        }
    if(from==2)
        {
        if(to==1) return n*10000;
        if(to==3) return n*0.000001;
        if(to==4) return n*0.01;
        if(to==5) return n*0.0001;
        if(to==6) return n*1549.9070058;
        if(to==7) return n*10.7642626;
        if(to==8) return n*1.1959894;
        }

}
long double volum (long double n, char from , char to)
{
    //ml m l in ft yd gal
    // 1 2 3  4  5  6   7
    //     *
    long double x;
    if(from==to) return n;
    if(from!=3 && to!=3) {x=volum(n, from, 3); x=volum(x, 3, to); return x;}
    if(to==3)
        {
        if(from==1) return n*0.001;
        if(from==2) return n*1000;
        if(from==4) return n*0.0163870;
        if(from==5) return n*28.32;
        if(from==6) return n*764.56;
        if(from==7) return n*3.785;
        }
    if(from==3)
        {
        if(to==1) return n*1000;
        if(to==2) return n*0.001;
        if(to==4) return n*61.0237441;
        if(to==5) return n*0.0353107;
        if(to==6) return n*0.0013079;
        if(to==7) return n*0.2642008;
        }
}
long double timp (long double n, char from , char to)
{
    // s m h sp ln an ms nano
    // 1 2 3  4  5  6  7    8
    //   *
    long double x;
    if(from==to) return n;
    if(from!=2 && to!=2) {x=timp(n, from, 2); x=timp(x, 2, to); return x;}
    if(to==2)
        {
        if(from==1) return n*0.1666666;
        if(from==3) return n*60;
        if(from==4) return n*10080;
        if(from==5) return n*43800;
        if(from==6) return n*525600;
        if(from==7) return n*0.0000166;
        if(from==8) return n*1.6666666;
        }
    if(from==2)
        {
        if(to==1) return n*60;
        if(to==3) return n*0.0166666;
        if(to==4) return n*0.0000992;
        if(to==5) return n*0.0000228;
        if(to==6) return n*0.0000019;
        if(to==7) return n*60000;
        if(to==8) return n*6000000;
        }
}
long double viteza (long double n, char from , char to)
{
    //fps ips mps mph nmi km/h
    //  1   2   3   4   5    6
    //          *
    long double x;
    if(from==to) return n;
    if(from!=3 && to!=3) {x=viteza(n, from, 3); x=viteza(x, 3, to); return x;}
    if(to==3)
        {
        if(from==1) return n*0.3048;
        if(from==2) return n*0.0254;
        if(from==4) return n*0.44707;
        if(from==5) return n*0.5144;
        if(from==6) return n*0.2777778;
        }
    if(from==3)
        {
        if(to==1) return n*3.2808399;
        if(to==2) return n*39.3700787;
        if(to==4) return n*2.2369363;
        if(to==5) return n*1.9440124;
        if(to==6) return n*3.6;
        }
}
long double temperatura (long double n, char from , char to)
{
    // c f k
    // 1 2 3
    if(from==to) return n;
    if(from==1 && to==2) return n*1.8+32;
    if(from==1 && to==3) return n+273.15;
    if(from==2 && to==1) return (n-32)/1.8;
    if(from==2 && to==3) return (n+459.67)*5/9;
    if(from==3 && to==1) return n-273.15;
    if(from==3 && to==2) return n*9/5-459.67;
}
long double masa (long double n, char from , char to)
{
    //mg g kg t lb oz
    // 1 2  3 4  5  6
    //   *
    long double x;
    if(from==to) return n;
    if(from!=2 && to!=2) {x=masa(n, from, 2); x=masa(x, 2, to); return x;}
    if(to==2)
        {
        if(from==1) return n*0.001;
        if(from==3) return n*1000;
        if(from==4) return n*1000000;
        if(from==5) return n*453.529;
        if(from==6) return n*28.3495;
        }
    if(from==2)
        {
        if(to==1) return n*1000;
        if(to==3) return n*0.001;
        if(to==4) return n*0.000001;
        if(to==5) return n*0.0022046;
        if(to==6) return n*0.0352739;
        }
}
long double energie (long double n, char from , char to)
{
    //cal kcal kj kwatt  j
    //  1    2  3     4  5
    //                   *
    long double x;
    if(from==to) return n;
    if(from!=5 && to!=5) {x=energie(n, from, 5); x=energie(x, 5, to); return x;}
    if(to==5)
        {
        if(from==1) return n*4.1868;
        if(from==2) return n*4186.8;
        if(from==3) return n*1000;
        if(from==4) return n*3600000;
        }
    if(from==5)
        {
        if(to==1) return n*0.2388459;
        if(to==2) return n*0.0002388;
        if(to==3) return n*0.001;
        if(to==4) return n*2.7777777;
        }
}
long double presiune (long double n, char from , char to)
{
    // psi ba atm pa n mmhg
    //   1  2   3  4 5    6
    //          *
    long double x;
    if(from==to) return n;
    if(from!=3 && to!=3) {x=presiune(n, from, 3); x=presiune(x, 3, to); return x;}
    if(to==3)
        {
        if(from==1) return n*0.0680457;
        if(from==2) return n*0.9671821;
        if(from==4) return n*0.0000098;
        if(from==5) return n*9.8692059;
        if(from==6) return n*0.0013157;
        }
    if(from==3)
        {
        if(to==1) return n*14.6959884;
        if(to==2) return n*1.0339313;
        if(to==4) return n*101325.2738;
        if(to==5) return n*0.1013252;
        if(to==6) return n*760.0020536;
        }
}
long double densitate (long double n, char from , char to)
{
    //g/l kg/l kg/m3 t/m3
    //  1    2    3   4
    //       *
    long double x;
    if(from==to) return n;
    if(from!=2 && to!=2) {x=densitate(n, from, 2); x=densitate(x, 2, to); return x;}
    if(to==2)
        {
        if(from==1) return n*0.001;
        if(from==3) return n*0.001;
        if(from==4) return n;
        }
    if(from==2)
        {
        if(to==1) return n*1000;
        if(to==3) return n*1000;
        if(to==4) return n;
        }
}
long double combustibil (long double n, char from , char to)
{
    //l/100 km/l ml/gl
    // 1      2    3
    // *
    long double x;
    if(from==to) return n;
    if(from!=1 && to!=1) {x=combustibil(n, from, 1); x=combustibil(x, 1, to); return x;}
    if(to==1)
        {
        if(from==2) return n*100;
        if(from==3) return n*235.2145833;
        }
    if(from==1)
        {
        if(to==2) return n*100;
        if(to==3) return n*235.2145833;
        }
}
