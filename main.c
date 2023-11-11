#include <stdio.h>
#include <stdlib.h>
    void yerdegistir(int sayi1,int sayi2)
    {
        int gecici;
        gecici=sayi1;
        sayi1=sayi2;
        sayi2=gecici;
        printf("Yer degistirildikten sonra =>");
        printf("Birinci sayi:%d Ikinci sayi:%d",sayi1,sayi2);
    }
int main()
{
    /*Girilen tamsayilar x ve y degiskenlerinde tutulmaktadir.Yerlerinin degistirilmesini
    fonksiyon kullanan bir C programi þeklinde yaziniz.
    */
   // void yerdegistir(int x, int y);
    int x,y;
    printf("Lutfen 2 adet sayi giriniz.\n");
    scanf("%d%d",&x,&y);
    printf("Ilk sayimiz:%d Ikinci sayimiz:%d\n",x,y);
    yerdegistir(x,y);
}
