#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/*
void ushesapla(int taban,int us)
{
    int sayac=1;
    int sonuc=1;
    while(sayac<=us)
    {

     sonuc=sonuc*taban;
     sayac++;
    }

    printf("%d ussu %d %d'dir.",taban,us,sonuc);
}
*/

/*
    void faktoriyel(int s_sayac)
    {
        int faktoriyel=1;
        int sayac=1;

        while(sayac<=s_sayac)
        {
            faktoriyel=sayac*faktoriyel;

            sayac++;
        }

        printf("%d! =%d\n",s_sayac,faktoriyel);

    }
*/
/*
void negatif(int sayi)
{
    while(sayi>=0)
    {
        if(sayi<0)
        {

            break;
        }
        else
        {
            printf("Tekrar deneyin:");
            scanf("%d",&sayi);
        }
    }
        printf("Islem tamam...");
}
*/

/*
void karsilastir(int x,int y)
{
    if(x==y)
    {
        printf("Iki sayi da esittir");
    }
    else if(x<y)
    {
        printf("%d daha buyuktur.",y);
    }
    else
    {
        printf("%d daha buyuktur.",x);
    }
}
*/


/*
void tek_cift(int sayi1)
{
    if(sayi1%2==0)
    {
        printf("%d cifttir.",sayi1);
    }

    else
    {
        printf("%d tektir.",sayi1);
    }
}
*/

/*
    void tek_yazdir(int x)
    {
         for(int i=0;i<x;i++)
         {
             if(i%2==1)
             {
                 printf("%d\n",i);
             }
         }

    }
*/
/*
void sirala(int dizi[],int n)
    {

        int gecici;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(dizi[j]>dizi[j+1])
                {
                        gecici=dizi[j+1];
                        dizi[j+1]=dizi[j];
                        dizi[j]=gecici;

                }
            }
        }

    }
*/

/*
    void kare(int* sonuc,int* yusuf)
    {
         *sonuc=*yusuf**yusuf;


    }
*/

/*
    int ussunuAl(int x,int y)
    {
       int carpim=1;
        for(int i=1;i<=y;i++)
        {
            carpim=x*carpim;
        }

        return carpim;
    }
*/

/*
    void ussunuAl(int x,int y,int* sonuc)
    {
        int sayac=1;
        *sonuc=1;

        while(sayac<=y)
        {
            *sonuc=x**sonuc;

            sayac++;
        }
    }
*/


/*
    int fonksiyon1(int x)
    {


        if(x%2==0)
        {
            printf("%d 2'nin katidir.\n\n",x);
        }

        else
        {
            printf("%d 2'nin kati degildir.\n\n",x);
        }
    }

    int fonksiyon2(int y)
    {


        if(y%3==0)
        {
            printf("%d 3'nin katidir.\n\n",y);
        }

        else
        {
            printf("%d 3'nin kati degildir.\n\n",y);
        }
    }
*/

/*
    void fonksiyon1(int* girdi)
    {


        if(*girdi%2==0)
        {
            printf("%d 2'nin katidir.\n\n",*girdi);
        }

        else
        {
            printf("%d 2'nin kati degildir.\n\n",*girdi);
        }
    }

    void fonksiyon2(int* girdi)
    {


        if(*girdi%3==0)
        {
            printf("%d 3'un katidir.\n\n",*girdi);

            if(*girdi%2==0)
            {
                printf("%d cift sayidir.",*girdi);
            }

            else
            {
                printf("%d cift degildir.",*girdi);
            }
        }

        else
        {
            printf("%d 3'un kati degildir.\n\n",*girdi);

            if(*girdi%2==0)
            {
                printf("%d cift sayidir.",*girdi);
            }

            else
            {
                printf("%d cift sayi degildir.",*girdi);
            }
        }
    }
*/

/*
    void islem(int x,int y,int*sonuc,char isaret)
    {


        switch(isaret)
        {
        case '+':

        *sonuc=x+y;
            break;

        case '-':

        *sonuc=x-y;
            break;

        case '*':

        *sonuc=x*y;
            break;

        case '/':

        *sonuc=x/y;
            break;

        default:
                printf("Gecersiz islem...");

            break;

        }
    }
*/


/*
void takasla(int* x,int* y)
{
    int gecici;

    gecici=*y;
    *y=*x;
    *x=gecici;

 //   printf("Degisimden sonra ilk sayi %d ve ikinci sayi %d'dir.",x,y);

}
*/

/*
void cesitkenar(int x,int y,int z,int* sonuc)
{

    int u;
    u=(x+y+z)/2;
    u=[u*(u-x)*(u-y)*(u-z)]/2;

    *sonuc=u;
}
*/ // Bu soruda bir sey vardi ama tam cozemedim dogrusu
/*
void fibonacci(int sinir)
{
    int ilk=1,ikinci=1;
    int sonuc=0;

    while(sonuc<=sinir)
    {
        sonuc=ilk+ikinci;
        ilk=ikinci;
        ikinci=sonuc;
    }

    printf("Fibonacci isleminin sonuc %d'dir",ilk);

}
*/

int main()
{
//    printf("Selam!\nC ogrenmeye basliyorum");
/*
    float a=4.8;

    double b=2.88;

    printf("1.sayi=%.1f 2.sayi=%.3lf",a,b);
*/
/*
    printf("%f\n",ceil(3.4));
    printf("%f\n",floor(4.9));
    printf("%f\n",sqrt(81));
    printf("%d\n",abs(-5));
    printf("%f\n",pow(4,2));

    int x;
    float y;

    printf("Iki sayi gir:");
    scanf("%d %f",&x,&y);

    printf("\n\n\n%d ve %f",x,y);
*/

/*
    int n;

    float dizi[10];

    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&n);

    while(n>10 || n<=0)
    {
        printf("Dizinin eleman sayisini dogru giriniz:");
        scanf("%d",&n);
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d. eleman:",i);
        scanf("%f",&dizi[i]);

        if(dizi[0]<dizi[i])
        {
            dizi[0]=dizi[i];
        }
    }

    printf("Dizinin en buyuk elemani %.2f'dir",dizi[0]);
*/


/*
    int n;

    float sayi_dizisi[15];

    printf("Lutfen dizinin eleman sayisini giriniz:");
    scanf("%d",&n);

    while(n>15 || n<=0)
    {
        printf("Dizinin eleman sayisini dogru giriniz:");
        scanf("%d",&n);
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d. eleman:",i);
        scanf("%f",&sayi_dizisi[i]);

    }



    for(int i=1;i<=n;i++)
    {
            if(sayi_dizisi[0]>sayi_dizisi[i])
            {
                sayi_dizisi[0]=sayi_dizisi[i];
            }


    }

    printf("\n\nDizinin en kucuk elemani  %.3f' Sdir.",sayi_dizisi[0]);
*/

/*
    char dizi[]="Salam naber nasilsin";

    printf("%d",strlen(dizi));
    printf("%d",sizeof(dizi));
*/



/*
    int x,y;

    char islem;

    printf("Iki tane sayi giriniz:");
    scanf("%d%d",&x,&y);

    printf("Islem numarasini giriniz:\n");
    scanf("%c ",&islem);


    switch(islem)
    {
    case '+':
        topla(x,y);

        break;

    case '-':
        cikar(x,y);

        break;

    case '*':
        carp(x,y);

        break;

    case '/':
        bol(x,y);

        break;

    default:
            printf("Gecersiz islem!");

            exit(0);
        break;

    }
*/
/*
    if(islem== '+')
    {
        printf("Sonuc:%d",topla(x,y));
    }

    else if(islem== '-')
    {
        printf("Sonuc:%d",cikar(x,y));
    }

    else if(islem== '*')
    {
        printf("Sonuc:%d",carp(x,y));
    }

    else if(islem== '/')
    {
        printf("Sonuc:%d",bol(x,y));
    }

    else
    {
        printf("Gecersiz islem!");
        exit(0);
    }
*/

/*
    int taban,us;

    int sayac=1;

    printf("Taban:?");
    scanf("%d",&taban);

    printf("Us:?");
    scanf("%d",&us);

    ushesapla(taban,us);
*/

/*
    int sayac=1;
    int sinir;

    printf("Lutfen faktoriyel alma sinirini girinizi:");
    scanf("%d",&sinir);


    while(sayac<=sinir)
    {
        faktoriyel(sayac);

        sayac++;
    }
*/


/*
    int x;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&x);


    negatif(x);
*/

/*
    int x,y;

    printf("Iki tane sayi giriniz:");
    scanf("%d%d",&x,&y);

    karsilastir(x,y);
*/

/*
    int x;

    printf("Iki sayi?");
    scanf("%d",&x);

    tek_cift(x);
*/

/*
    int sayi;

    printf("Sayi gir:");
    scanf("%d",&sayi);

    tek_yazdir(sayi);
*/


/*
    int n;
    int sayac=0;

    printf("Kac tane random sayi uretmek istediginizi giriniz:\t");
    scanf("%d",&n);

    int dizi[50];

    srand(time(0));

    while(sayac<n)
    {
        dizi[sayac]=rand()%100;
        printf("%d\n",dizi[sayac]);

        sayac++;
    }

    printf("Dizinin sirali hali:\n\n\n\n");

    sirala(dizi,n);

    for(int i=0;i<n;i++)
    {
        printf("%d\n",dizi[i]);
    }
*/


/*
    int x=4,karesi;
    int sonuc;
    kare(&sonuc,&x);

    printf("%d",sonuc);
*/

/*
    int taban=4,us=5;
    int sonuc;

    sonuc=ussunuAl(taban,us);

    printf("%d",sonuc);
*/


/*
    int us=4,taban=5;
    int sonuc;

    ussunuAl(us,taban,&sonuc);

    printf("%d",sonuc);
*/


/*
    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&x);

    fonksiyon1(sayi);
    fonksiyon2(sayi);
*/



/*
    int girdi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&girdi);

    fonksiyon1(&girdi);
    fonksiyon2(&girdi);
*/


/*
    char isaret;
    int x,y,sonuc;

    printf("Lutfen islem secenegini giriniz:");
    scanf("%c",&isaret);

    printf("Lutfen isleme sokulacak sayilari giriniz:");
    scanf("%d%d",&x,&y);

    islem(x,y,&sonuc,isaret);

    printf("Yapilan islemin sonucu %d'dir.",sonuc);
*/


/*
    int x=3;
    float a=5.8;
    char z='+';

    int *p1;
    float *p2;
    char *p3;

    p1=&x;
    p2=&a;
    p3=&z;

    printf("p1'in adresi:%d\np2'nin adresi %d\np3'un adresi:%d\n\n",p1,p2,p3);
    printf("%d\n%.2f\n%c\n\n\n",*p1,*p2,*p3);

    *p1=48;
    *p2=101.01;
    *p3='*';

    printf("p1'in adresi:%d\np2'nin adresi %d\np3'un adresi:%d\n\n",p1,p2,p3);
    printf("%d\n%.2f\n%c",*p1,*p2,*p3);
*/

/*
    int sayi1,sayi2;

    printf("Lutfen iki sayi giriniz:");
    scanf("%d%d",&sayi1,&sayi2);

    printf("Degisimden once ilk sayi %d ikinci sayi %d'dir.\n",sayi1,sayi2);

    int *ptr1,*ptr2;

    ptr1=&sayi1;
    ptr2=&sayi2;

    takasla(ptr1,ptr2);

    printf("\nDegisimden sonra ilk sayi %d ve ikinci sayi %d'dir",sayi1,sayi2);
*/

/*
    u=(a+b+c)/2
    Alan^2=u*(u-a)*(u-b)*(u-c)
*/

/*
    int k1,k2,k3;

    printf("Lutfen ucgenin kenar uzunluklarini giriniz:");
    scanf("%d%d%d",&k1,&k2,k3);

    int alan;
    int *p;

    p=&alan;

    cesitkenar(k1,k2,k3,p);

    printf("Cesitkenar ucgenin alani %d'dir");
*/  //Bu soruyu tam kontrol edemedim :(

/*
    int sinir;

    printf("Sinir degerini giriniz:");
    scanf("%d",&sinir);

    fibonacci(sinir);
*/





















































































































































































































}
