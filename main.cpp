#include <iostream>

using namespace std;

long double lungime (long double n, char from , char to);
long double arie (long double n, char from , char to);
long double volum (long double n, char from , char to);

int main()
{
    cout<<fixed<<arie(4578, 4, 7);
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
