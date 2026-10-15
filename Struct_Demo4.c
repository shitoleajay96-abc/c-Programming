#include<stdio.h>
#pragma pack(1)
// 1  2   4   8 
struct Demo 
{
     int i;
     char ch ;
     float f;
    

};
int main()
{
    Struct Demo dobj1;
    Struct Demo dobj2;
    Struct Demo *dp =NULL;

    dp = &dobj2;

    //direct accessing operator  
    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.99f;


    //direct accessing operator 
    dp ->i=21;
    dp ->ch='B';
    dp ->f= 91.99f;
     
    printf("%d\n",dobj1.i);
    printf("%d\n",dp->i);


    return 0;
}
