#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l,b;
    printf("Enter Length:");
    scanf("%d",&l);
    printf("Enter Breadth:");
    scanf("%d",&b);
    int p,a;
    p=2*(l+b),a=l*b;
    printf("Area:%d\nperimeter:%d",a,p);
    
    if(a>p)
    {
    printf("\nAREA OF RECTANGLE IS GREAT THAN ITS PERIMETER" );
    }
    else
    {
    printf("\nAREA OF RECTANGLE IS SMALLER THAN ITS PERIMETER");
    }
    return 0;
}