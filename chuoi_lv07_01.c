#include <string.h>
#include <stdio.h>
#include <conio.h>
#define hang 128
void main()
{
    char xau[hang]; //Khai báo xâu ký tự
    int i=0,nh; //khai báo i, nh
    printf(" Hello Boss\n");
    printf("Nhap xau ky tu bat ky: ");
    gets(xau);
    nh=i;
    while (xau[i])
        if (xau[i++]=='h')//tìm kiếm ký tự h trong xâu
          {
             nh++;
          }
      printf("Xau co %d chu h\n", nh);

}
