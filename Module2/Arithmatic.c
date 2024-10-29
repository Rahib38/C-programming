#include <stdio.h>

int main (){

    int a,b,sum,sub,mul,dvd,modules;
    a=50;
    b=20;
    sum= a+b;
    sub=a-b;
    mul= a*b;
    dvd = a/b;
    modules = a%b;
    printf("%d \n",sum);
    printf("%d \n",sub);
    printf("%d \n",mul);
    printf("%d \n",dvd);
    printf("%d \n",modules);
    return 0;
}