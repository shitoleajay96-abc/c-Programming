#include<stdio.h>

int main()
{
 
    int Arr[4]= {10,20,30,40};
    printf("%d\n",sizeof(Arr));   //100
    printf("%d\n",sizeof(Arr[2]));
    printf("%d\n",Arr[2]);  //100

     

    return 0;
}