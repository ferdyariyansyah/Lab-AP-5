/*#include <stdio.h>
using namespace std;

int main()
{

    system("cls");    
    int x;
    for(x=10; x>=1; x--)
    printf("%d\n",x);
    getchar();
}*/

/*#include <iostream>
using namespace std;
 int main()
 {
    for(x = 1, x<=10, x+=2){
    printf("%d\n", x);
    }

    getchar();
 }*/

 /*#include <stdio.h>
 using namespace std;

 int main()
 {
    int x;
    for(x = 1; x <= 1000000; x++)
    {
        printf("%d\n",x);
        x=(x*10)-1;
    }

    getchar();
 }*/

 #include<iostream.h>
 void main()
 {
    int bil,i;
    float jumlah;
    cout<<"input bilangan: ";
    cin>>bil;
    jumlah=0;
    for(i=1;i<=bil;i++);
    {
        jumlah=jumlah+(float)i/(i+1);
    }

    cout.precision(3);
    cout<<"jumlah adalah: "<<jumlah;
 }