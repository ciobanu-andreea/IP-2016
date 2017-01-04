#include <iostream>

using namespace std;

long double lungime (long double n, char from , char to); //*
long double arie (long double n, char from , char to);//*
long double volum (long double n, char from , char to);//*
long double timp (long double n, char from , char to); //*
long double viteza (long double n, char from , char to);//*
long double temperatura (long double n, char from , char to); //*
long double masa (long double n, char from , char to); //*
long double energie (long double n, char from , char to);//*
long double presiune (long double n, char from , char to); //*
long double densitate (long double n, char from , char to);//*
long double combustibil (long double n, char from , char to);

int main()
{

    return 0;
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
