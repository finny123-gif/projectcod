//functions in C
#include<stdio.h>// scan(), printf()
#include<math.h>// sin, cos(), tan(),
int area(int l, int w);
int perimeter(int length, int width);
int main()
{
int a,c,len, wid;
    printf("Enter length and width:");
    scanf("%d%d",&len,&wid);
    a=area(len,wid);
    c=perimeter(len,wid);
    printf("Area is %d\n",a);
    printf("Perimeter is %d\n",c);
    return 0;
}
int area(int l, int w){
int a;
a=l*w;
return a;
}
int perimeter(int length, int width){
int c; 
c=2* (length+width);
return c;
}