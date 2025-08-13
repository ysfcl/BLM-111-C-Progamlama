#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//#define PI 3.14
//#define EULER 2.71
//#define tav_artis 0.038
//#define kus_artis 0.012
//#define kitap_vergi 0.04
//#define temel_vergi 0.056
//#define luks_vergi 0.196

int main()
{
/*
 float sayi=4.48;


 printf("Sayi degiskeni hafizada %d byte kadar yer tutar.\n",sizeof(sayi));

printf("char hafizada %d byte kadar yer tutar.",sizeof(char));


printf("%f",PI);
*/
/*
  const  int x=10;  //final gibi dusunulebilir
    int y=14;

  //  printf("%d",x!=y);
  //  printf("%d\n",x+=3);
    printf("%f\n",YUSUF);

    printf("\n%d",!(x<y && y>=100));
*/
  /*
    char kar;

    printf("Bir harf gir:");
    scanf("%c",&kar);

    printf("Konu ile bir ilgisi bulunmamaktadir.\n\n\n\n\n\n");


    float x,y;

    printf("X sasyisini giriniz:");
    scanf("%f",&x);

    printf("Y sayisini giriniz:");
    scanf("\n\n\n%f",&y);

    printf("\n\n\n\nKarsilastirma islemi baslatiliyor....\n\n\n");

    if(x==y && PI>x)
    {
        printf("If calisti.\n\n\n");
    }

    else if(x!=y || EULER<y)
    {
        printf("Else calisti.\n\n\n");

    }

    else
    {
        printf("Ikiside calismadi.\n\n\n");
    }

    printf("Islem tamam.");
*/
/*
    float x,y,z;

    printf("X sasyisini giriniz:");
    scanf("%f",&x);

    printf("\n\n\nY sasyisini giriniz:");
    scanf("%f",&y);

    printf("\n\n\nZ sasyisini giriniz:");
    scanf("%f",&z);


    if(y<x && z<x)
    {

        printf("X en buyuk sayidir.");
    }

    else if(x<y && z<y)
    {
        printf("Y en buyuk sayidir.");
    }

    else if(x<z && y<z)
    {
        printf("Z en buyuk sayidir");
    }

    else
    {
        printf("Hepsi esit olan sayilar.");

    }

  */
/*
    int x;

    printf("Bir sayi giriniz:");
    scanf("%d",&x);

    if(x%2==0)  // == kullan = degil
    {
        printf("%d Cift sayidir",x);
    }

    else
    {
        printf("%d Tek sayidir.",x);
    }

*/

/*
    float yas;

    printf("Bahsi gecen kisinin yasini giriniz:");
    scanf("%f",&yas);

    if(yas<18)
    {
        printf("Yasal olarak oy kullanamaz");
    }

    else
    {
        printf("Yasal olarak oy kullanabilir.");
    }

*/
/*
    float x,y;

    printf("Iki sayi giriniz:");
    scanf("%f  %f",&x,&y);


    if(x<y)
    {
        printf("%f daha buyuktur.",y);
    }

    else if(y<x)
    {
        printf("%f daha buyuktur.",x);
    }

    else
    {
        printf("%f ile %f esittir.",x,y);
    }
*/

/*
 float x,y;

    printf("Iki sayi giriniz:");
    scanf("%f  %f",&x,&y);

    if(x!=y)
    {
        if(x<y)
        {
            printf("%f daha buyuktur.",y);
        }

        else
        {
            printf("%f daha buyuktur.",x);
        }
    }
    else
    {
        printf("%f ile %f esittir.",x,y);
    }

*/
/*
    int x,toplam=0;

    printf("Bir sayi gir:");
    scanf("%d",&x);                         //Toplam her türlü sifirdan baslamali cünkü sayac onun üstüne ekleniyor.

    for(int i=0;i<=x;i++)
    {

    toplam=toplam+i;   //(toplam+=i) !!!!!


    }

    printf("Toplam:%d",toplam);   // Hani toplam sonucu özellikle disari yaziliyor ya hani

*/
/*
    for(int i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            printf("\n\n\n%d cift sayidir.",i);
        }

        else
        {
            printf("\n\n\n%d tek sayidir.",i);
        }
    }

*/
/*
        int i=1;
        int sayi=100;



        while(i<=10)
        {

            printf("%d\n",i*sayi);
            i++;
        }

*/


/*
        int i=0;             //100e kadar yazdir ya da kendin sinir seç

        int x;

        printf("X ile ne yapacagini iyi biliyorsundur artik:) :");
        scanf("%d",&x);

        while(i<=x)
        {
            if(i%2==0)
            {
                printf("%d cift sayidir.\n",i);
            }

            else
            {
                printf("%d tek sayidir.\n",i);
            }

            i++;

        }

*/

/*
    int x,y;

    printf("Bana iki sayi soyle:");
    scanf("%d %d",&x,&y);

    printf("Birinci sayi:%d   //  Ikinci sayi:%d",x,y);
*/

/*
    int x,y;

     printf("Bana iki sayi soyle:");
    scanf("%d %d",&x,&y);

    printf("Carpimlari:%d",x*y);
*/

/*
    int bolunen,bolen,kalan,bolum;

    printf("Bolunen ve boleni gir:");
    scanf("%d %d",&bolunen,&bolen);

    bolum=bolunen/bolen;
    kalan=bolunen%bolen;

    printf("Bolum:%d  Kalan:%d",bolum,kalan);
*/
/*
    int kenar_u,kenar_k;

    printf("Uzun kenar uzunluklarini giriniz:");
    scanf("%d %d",&kenar_u,&kenar_k);

    printf("Kenar uzunluklari%d ve %d olan dikdortgenin alani %d, cevresi ise %d'dir.",kenar_u,kenar_k,kenar_u*kenar_k,(kenar_u+kenar_k)*2);
*/
/*
    float fahrenheit,santigrat;

    printf("Fahrenheit cinsinden derece giriniz:");
    scanf("%f",&fahrenheit);

    santigrat=(fahrenheit-32)*5/9;

    printf("Girilen %f Fahrenheit derece %f santigrat derecedir.",fahrenheit,santigrat);
*/
/*
    int girilen_sayi;

    printf("Bana bi deger soyle:");
    scanf("%d",&girilen_sayi);

    if(girilen_sayi%2==0)
    {
        printf("%d cifttir.",girilen_sayi);
    }

    else
    {
        printf("%d tektir.",girilen_sayi);
    }
*/


  /*
    int x,y,z;                       //En kucugu ve En buyugu bul ve yazdir.

    printf("3 tane deger gir:\n");
    scanf("%d %d %d",&x,&y,&z);

    if(x<y && x<z)
    {
       if(y<z)
       {
           printf("\n%d en kucuktur.",x);
           printf("\n%d en buyuktur.",z);
       }
       else
        {
           printf("\n%d en kucuktur.",x);
           printf("\n%d en buyuktur.",y);
        }
    }

    else if(y<x && y<z)
    {
        if(x<z)
        {
            printf("\n%d en kucuktur.",y);
            printf("\n%d en buyuktur.",z);
        }
        else
        {
            printf("\n%d en kucuktur.",y);
            printf("\n%d en buyuktur.",x);
        }
    }

    else
    {
        if(x<y)
        {
            printf("\n%d en kucuktur.",z);
            printf("\n%d en buyuktur.",y);
        }
        else
        {
            printf("\n%d en kucuktur.",y);
            printf("\n%d en buyuktur.",x);
        }
    }

*/


/*
    int x,y;

    printf("Iki tane sayi gir:");
    scanf("%d %d",&x,&y);

    if(x==y)
    {
        printf("%d ile %d esittir.",x,y);
    }

    else
    {
        if(x<y)
        {
            printf("%d,%d'den daha buyuktur.",y,x);
        }
        else
        {
            printf("%d,%d'den daha buyuktur.",x,y);
        }

    }
*/


/*
    int x;
    int sayac=1;

    printf("Bir sayi gir:");
    scanf("%d",&x);

    while(sayac<=10)
    {

        printf("%d*%d=%d\n",x,sayac,x*sayac);
        sayac++;
    }

*/


/*
    int x;

    printf("Sayi gir:");
    scanf("%d",&x);

    while(x!=0)
    {

        printf("%d\n",x);
        x--;
    }
*/


/*
    int x;
    int sonuc=0;

    printf("Lutfen sayi gir:");
    scanf("%d",&x);

    for(int i=0;i<=x;i++)
    {
     sonuc=sonuc+i;
    }
    printf("1'den %d'ye kadar olan sayilarin toplami %d'dir.",x,sonuc);
*/


/*
    int x;
    int sonuc=0;
    int sayac=1;

    printf("Lutfen sayi gir:");
    scanf("%d",&x);

    while(sayac<=x)
    {
        if(sayac==x)
        {
            printf("%d",sayac);         // BU KOD HATALİDİR (106 NUMARA TEKRAR YAPİLACAK)
        }
        else
        {
            printf("%d+",sayac);
        }

        sonuc=sonuc+sayac;
        sayac++;
    }
    printf("+%d=%d",sayac,sonuc);
*/


/*
    int a,b,c,x;
    int sonuc;

    printf("Katsayilari ve x'i giriniz:");
    scanf("%d %d %d %d",&a,&b,&c,&x);

    sonuc=(a*x*x)+(b*x)+c;

    printf("Denklemin sonucu %d'dir.",sonuc);
*/


/*
    int u_kenar,k_kenar,yukseklik;

    printf("Uzun kenar, kisa kenar ve yukseklik:");
    scanf("%d %d %d",&u_kenar,&k_kenar,&yukseklik);

    printf("\n\nDikdortgenin taban alani:%d",u_kenar*k_kenar);
    printf("\n\nYanal alanlari %d ve %d'dir.",u_kenar*yukseklik,k_kenar*yukseklik);

    printf("\n\nYanal alanlar toplami %d'dir.",2*yukseklik*(u_kenar+k_kenar));

    printf("\n\nHacim:%d",u_kenar*k_kenar*yukseklik);
*/


/*
    float x;
    float fonk;

    printf("Bir deger giriniz:");
    scanf("%f",&x);

    fonk=x*x*x+13*x*x+47*x+5;

    printf("f(%.2f)=%.2f",x,fonk);

*/


/*
    int kenar;

    printf("Kenar uzunlugu:");
    scanf("%d",&kenar);

    printf("Alan:%d",kenar*kenar);
    printf("\nCevre:%d",4*kenar);
*/



/*
    float mil; //1 mil = 1.609 km


    printf("Mil cinsinden gidilen mesafeyi giriniz:");
    scanf("%f",&mil);

    printf("Gidilen mesafe %.2f kilometredir.",mil*1.609);
*/



/*
    float yaricap;

    printf("Yaricap degerini giriniz:");
    scanf("%f",&yaricap);

    printf("\nDairenin alani:%.3f",PI*yaricap*yaricap);

    printf("\nDairenin cevresi:%.3f",2*PI*yaricap);

*/



/*
    float en,boy,yukseklik;

    printf("Havuzun enini boyunu ve yuksekligini metre cinsinden giriniz:\n");
    scanf("%f %f %f",&en,&boy,&yukseklik);

    printf("Havuzun alabilecegi maksimum su miktari m^3 cinsinden %.4f'tir",en*boy*yukseklik);
*/


/*
    float a,b;

    printf("Yerinin degismesini istediginiz A ve B sayilarini giriniz:\n");
    scanf("%f %f",&a,&b);

    float c;

    c=b;
    b=a;
    a=c;

    printf("A ve B'nin yeni degerleri %f ve %f'dir.",a,b);
*/


/*
    int sure;                                //Ankara-Istanbul arasi 450 km'dir.
    const yol=450;

    printf("Ankara_Istanbul arasini gittiginiz sureyi saat cinisinden giriniz:");
    scanf("%d",&sure);

    printf("Aracin ortalama hizi %d km'dir.",yol/sure);
*/


/*
    float x,y,z;

    printf("Uc sayi giriniz:\n");
    scanf("%f %f %f",&x,&y,&z);

    printf("Girilen 3 sayinin ortalamasi %.2f'dir.",(x+y+z)/3);

*/


/*
    int x,y,z;

    printf("Yuzler birler ve onlar basamagini giriniz:");
    scanf("%d %d %d",&x,&y,&z);

//    printf("Olusturulan sayi %d%d%d'dir.",x,y,z);

    printf("Olusturulan sayi %d'dir.",100*x+10*y+z);
*/


/*
    int x;

    printf("Bir sayi giriniz:");
    scanf("%d",&x);

    while(x!=0)
    {
        printf("%d\n",x);
        x--;

    }
*/


/*
    int x;                                 //TEK CIFT SORUSU BU
    int sayac=0;

    printf("0'dan itibaren yazilmasini istediginiz sayiyi yaziniz:");
    scanf("%d",&x);

    while(sayac<x)
    {
        if(sayac%2==0)
        {
            printf("%d cift sayidir.\n",sayac);
        }

        else
        {
            printf("%d tek sayidir.\n",sayac);
        }

        sayac++;
    }
*/


/*
    int x;

    printf("Bir sayi gir aslan:");
    scanf("%d",&x);

    while(x!=0)
    {
        printf("%d\n",x);
        x-=1;
    }
*/


/*
    int x;
    int sayac=15;

    printf("Bir sayi gir:");
    scanf("%d",&x);

    do{
        printf("%d\n",sayac);
        sayac++;

    }while(sayac<x);
*/

/*
  const int i=100;
    int x=1;
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    do{
        printf("%d\n",i*x);
        x++;
    }while(x<=sayi);
*/


/*
    int i;

    for(i=0;i<=10;i++)
    {
       if(i==5)
        {
            continue;
        }
        if(i==8)
        {
            break;
        }
        printf("%d\n",i);

    }
*/


/*
    int x=5;

    switch(x)       //Switch-case ornek
    {
    case 1:
         printf("Sayi 1'dir.");
        break;

    case 2:
         printf("Sayi 2'dir.");
        break;

    case 3:
         printf("Sayi 3'dir.");
        break;

    case 4:
         printf("Sayi 4'dir.");
        break;

    case 5:
        printf("Sayi 5'dir.");
        break;

    default:
        printf("Gecersiz deger.");
        break;


    }
*/


/*
    char op;
    float x,y;


    printf("Lutfen bir operator giriniz:");
    scanf("%c",&op);

    printf("Islem icin iki sayi giriniz");
    scanf("%f %f",&x,&y);

    switch(op)
    {
    case '+':
        printf("%f+%f=%f",x,y,x+y);
        break;

    case '-':
        printf("%f-%f=%f",x,y,x-y);
        break;

    case '*':
        printf("%f*%f=%f",x,y,x*y);
        break;

    case '/':
        printf("%f/%f=%f",x,y,x/y);
        break;

    default:
        printf("Gecersiz operator!!!");
        break;
    }
*/

/*
    bool x=true;
    printf("%d",x);     // #include <stdbool.h>
*/


/*
    int x;
    int sayac=1;
    int toplam=0;

    printf("Toplamin yazilmasini istediginiz sayiyi giriniz:");
    scanf("%d",&x);

    while(sayac!=x)
    {

        printf("%d+",sayac);

        toplam=toplam+sayac;
        sayac++;

    }
    toplam=sayac+toplam;
    printf("%d=%d",sayac,toplam);
*/



/*
    int x;
    int sayac=1;
    int toplam=0;

    printf("Toplamin yazilmasini istediginiz sayiyi giriniz:");
    scanf("%d",&x);

    while(sayac<=x)
    {
        if(sayac==x)
        {
            printf("%d",sayac);
        }

        else
        {
            printf("%d+",sayac);
        }
        toplam=toplam+sayac;
        sayac++;
    }

    printf("=%d",toplam);
*/


/*
    int x,y;

    printf("Iki sayi giriniz:");
    scanf("%d %d",&x,&y);

    if((x<0 && y<0 )||(x>0 && y>0))
    {
        printf("Carpim pozitiftir.");

    }

    else if((x==0 && y!=0)||(x!=0 && y==0)||(x==0 || y==0))
    {
        printf("Carpim sifirdir.");
    }

    else if((x>0 && y<0)||(x<0 && y>0))
    {
        printf("Carpim negatiftir.");
    }

    else
    {
        printf("Gecersiz islem talebi");
    }
*/

/*
 else if((x==0 || y==0)||(x==0 && y!=0)||(x!=0 && y==0))   //Bir ara bu blogu incele
    {
        printf("Carpim sifirdir.");
    }
*/


/*
    int x;
    int sayac=1;
    int satirEleman=0;

    printf("Bir sayi giriniz:");
    scanf("%d",&x);


    while(sayac<=x)
    {
        if(sayac%17==0)
        {
            printf("%5d",sayac);
            satirEleman++;
            if(satirEleman%10==0)
            {
                printf("\n");
            }

        }

        sayac+=1;

    }
*/


/*
    int x;

    printf("Bir sayi giriniz:");
    scanf("%d",&x);

    printf("Yuzler basamagi %d'dir.",x/100%10);
    printf("Onlar basamagi %d'dir.",x%100/10);  //1298 orneginde en son 98 kalir ve onu 10'a boldugunde 9.8 kalir ve 9'a yuvarlanir.
    printf("Birler basamagi %d'dir.",x%10);
*/


  /*                                      //Halinin metrekaresi 150 TL ve 1000 TL iscilk parasi
    float metreKare;

    printf("Metrekareyi girin:");
    scanf("%f",&metreKare);

    printf("Yapilan islem tutari %.3f TL'dir.",1000+150*metreKare);
*/



/*                                        // T-->18 B-->17 S-->19 birim fiyatlaridir.
    float b1,b2,b3;
    char tip;

    printf("Alinmasini istediginiz hali tipini seciniz:");
    scanf("%c",&tip);

    switch(tip)
    {
    case 'T':
        printf("Almak istediginiz miktari giriniz:");
        scanf("%f",&b1);

        printf("%c tipindeki halinin toplam tutari %.3f'dir.",tip,18*b1);

        break;

    case 'B':
        printf("Almak istediginiz miktari giriniz:");
        scanf("%f",&b2);

        printf("%c tipindeki halinin toplam tutari %.3f'dir.",tip,17*b2);

        break;

    case 'S':
        printf("Almak istediginiz miktari giriniz:");
        scanf("%f",&b3);

        printf("%c tipindeki halinin toplam tutari %.3f'dir.",tip,19*b3);

        break;

    default:
        printf("Boyle bir hali tipi bulunmamakta.Islem gecersiz.");
        break;

    }
*/


/*
    int x;

   do{

    printf("Bir tam sayi giriniz:");
    scanf("%d",&x);

    }while(x<=0);

    if(x%13==0)
    {
        if(x%17==0)
        {
            printf("%d 13 ve 17'nin tam katidir.",x);
        }

        else
        {
            printf("%d sadece 13'un tam katidir.",x);
        }
    }

    else if(x%13!=0)
    {
        if(x%17!=0)
        {
            printf("%d 13 ve 17'nin tam kati degildir.",x);
        }

        else if(x%17==0)
        {
            printf("%d sadece 17'nin tam katidir.",x);
        }
    }
    else
    {
        printf("%d 13 ve 17'nin tam kati degildir.",x);
    }
*/


/*
    float x;
    float sayac=1;
    float toplam=0;

  do{
    printf("Hesaplanmasini istediginiz degeri giriniz:");
    scanf("%f",&x);
    }while(x<1);



    while(sayac<=x)
    {


        toplam=toplam+(1/sayac);

        sayac++;
    }

    printf("=%f",toplam);
*/


/*
    float x;
                                                //115 numarali soru
    do{

    printf("Lutfen bir tam sayi giriniz:");
    scanf("%f",&x);

    if(x<0)
    {
      printf("Lutfen pozitif bir sayi giriniz:\n");

        continue;
    }

    printf("\nSayinin karekoku:%f\n",sqrt(x));

    }while(x);
*/


  /*                                        //116 do-while ile cozum.
    float sayi;
    float toplam=0;
    float sayac=0;


    printf("Lutfen pozitif bir sayi giriniz:");
    scanf("%f",&sayi);

    do{

    if(sayi<0)
    {
        printf("Ama pozitif dedik o kadar:");
        continue;
    }

    toplam=toplam+sayac;
    sayac++;

    }while(sayac<=sayi);

    printf("Yapilan islemin sonucu %f'dir.",toplam);
*/


/*
    float sayi;             //116 while ile cozum.
    float sayac=0;
    float toplam=0;

  do{
    printf("Lutfen bir sayi giriniz:");
    scanf("%f",&sayi);

    if(sayi<0)
    {
        printf("Girilen sayi pozitif degil , lutfen tekrar giriniz:");
        continue;
    }

  }while(sayi<0);



    while(sayac<=sayi)
    {

        toplam=toplam+sayac;
        sayac+=1;
    }


    printf("Yapilan islemin sonucu %f'dir.",toplam);
*/


/*
    float sayi;                             //116 for dongusu ile cozum
    float toplam=0;

    printf("Lutfen bir sayi giriniz:");
    scanf("%f",&sayi);

    if(sayi>=0)
    {
        for(int i=1;i<=sayi;i++)
        {
            toplam=toplam+i;

        }
            printf("Yapilan islemin sonucu:%f",toplam);
    }

    else
    {
        printf("Bu sefer pozitif gir:");
        scanf("%f",&sayi);
    }
*/


 /*
    int yil;                                        //117

    printf("Hesaplamak istedigini yili giriniz:");
    scanf("%d",&yil);

    if(yil%400==0)
    {
      printf("%d yili artik yildir.",yil);
    }

    else if(yil%100==0)
    {
        printf("%d yili artik yil degildir.",yil);
    }

    else if(yil%4==0)
    {
        printf("%d yili artik yildir.",yil);
    }

    else
    {
         printf("%d yili artik yil degildir.",yil);
    }
*/


/*
    int yil;                                            //118

    printf("Hesaplamak istediginiz yili giriniz:");
    scanf("%d",&yil);

    if(yil%4==0)
    {
        if(yil%100==0)
        {
            if(yil%400==0)
            {
                printf("%d artik yildir.",yil);
            }

            else
            {
                printf("%d artik yil degildir.",yil);
            }

        }

        else
        {
            printf("%d artik yildir.",yil);
        }
    }

    else
    {
        printf("%d yili artik yil degildir.",yil);
    }
*/


/*                                                  //119
    int yil;

    printf("Hesaplamak istediginiz yili giriniz:");
    scanf("%d",&yil);

    if((yil%4==0 && yil%100!=0) || ( yil%400==0 ))
    {
        printf("%d artik yildir.",yil);
    }

    else
    {
        printf("%d artik yil degildir.",yil);
    }
*/


/*
    int aci1,aci2,aci3;

    printf("Ucgenin acilarini giriniz:");
    scanf("%d %d %d",&aci1,&aci2,&aci3);

    if(aci1+aci2+aci3==180)
    {
        if(aci1==aci2 && aci1==aci3)
        {
            printf("Ucgen eskenar ucgendir.");
        }

        else if((aci1==aci2 || aci1==aci3)||(aci2==aci3))
        {
            if((aci1==90 || aci2==90) || (aci3==90))
            {
                printf("Ikizkenar dik ucgendir.");
            }

           else
           {
               printf("Ucgen ikizkenar ucgendir.");
           }
        }

        else if(aci1!=aci2 && aci2!=aci3)
        {

            if((aci1==90 || aci2==90) || (aci3==90))
            {
                printf("Dik ucgendir.");
            }

            else
            {
                printf("Cesitkenar ucgendir.");
            }

        }

        else
        {
            printf("Ucgenin hicbir kenari esit degildir.");
        }
    }

    else
    {
        printf("Girilen acilar ucgen olusturmaz.");
    }
*/


/*
    float dakika;
    float ek=1;
    const float sabit=4;

    printf("Lutfen telefonla ne kadar goruseceginizi belirtiniz:");
    scanf("%f",&dakika);


    if(dakika<=3 && dakika>0)
    {
        printf("Yapilan gorusmenin ucreti %f TL'dir.",sabit);
    }

    else if(dakika>3)
    {
        printf("Yapilan gorusmenin ucreti %f TL'dir.",sabit+(dakika-3)*ek);
    }

    else
    {
       if(dakika==0)
        {
            printf("Telefonla hic konusmadiniz bu yuzden tutar hesaplanmadi.");
        }

        else
        {
            printf("Telefonla gorusme suresi negatif olamaz");
        }

    }
*/


/*
    char op;

    printf("Yapmak istediginiz islemi (+,-) giriniz:");
    scanf("%c",&op);

    float x,y;
    float sonuc;

    printf("Iki sayi giriniz:");
    scanf("%f %f",&x,&y);

    if(x==0 || y==0)
    {
        printf("Secilen sayilardan biri 0 oldugu icin islem sonlandirildi.");
        exit(0);
    }


    else
{

      switch(op)
        {

        case '+':

            sonuc=1/x+1/y;
            printf("1/%f+1/%f=%.3f",x,y,sonuc);
            break;

        case '-':

            sonuc=1/x-1/y;
            printf("1/%f-1/%f=%.3f",x,y,sonuc);
            break;

        default :

            printf("Yanlis operator girdiniz.");
            exit(0);
        }


        exit(0);
}

*/


/*
    int n;
    int sayac=1;

    float toplam=0;
    float x;

    printf("n pozitif tam sayisini giriniz:");
    scanf("%d",&n);

    printf("x reel sayisini giriniz:");
    scanf("%f",&x);


    while(sayac<=2*n-1)
    {

        toplam=((1*sayac)/pow(x,sayac+1))+toplam;

                        //(x^sayac+1) yerine pow yazildi

        sayac+=2;
    }


    printf("Pozitif tam sayi:%d\n",n);
    printf("Reel sayi:%f\n",x);
    printf("Seri:%f",toplam);
*/


/*
    int n;
    int sayac=1;

    float toplam=0;
    float x;


    printf("Lutfen pozitif bir tam sayi giriniz:");
    scanf("%d",&n);

    printf("Lutfen x reel sayisini giriniz:");
    scanf("%f",&x);

    while(sayac<=2*n-1)
    {
        toplam=(1*sayac)/pow(x,sayac+1)+toplam;

        sayac+=2;
    }

    printf("Seri:%f\n\n",toplam);

//
    char cevap;

    printf("Isleme ekleme yapmak istiyor musunuz?");
    scanf(" %c",&cevap);

    if((cevap=='e') || (cevap=='E'))
    {

        printf("Devam ediliyor...");


        float sonuc=0;

        int n2;

        printf("Lutfen islemi uzatmak istediginiz tam sayiyi giriniz.");
        scanf("%d",&n2);



            while(sayac<=2*n2-1)
            {
                sonuc=toplam+(1*sayac/pow(x,sayac+1));

                sayac+=2;
            }

        printf("\n\n\nNihai islemin sonucu %f'dir.",sonuc);
    }

    else if((cevap=='h') || (cevap=='H'))
    {
        printf("Islem sonlandiriliyor...");
        exit(0);
    }

    else
    {
        printf("Gecersiz cevap.\nKapatiliyor...");
        exit(1);
    }
*/


/*
    char cevap;
do{                         //Esas cevap bu ve belliki bir ustteki kod hatali muhtemelen

    int n;
    int sayac=1;

    float toplam;
    float x;

    printf("n pozitif tam sayisini giriniz:");
    scanf("%d",&n);

    printf("x reel sayisini giriniz:");
    scanf("%f",&x);


    while(sayac<=2*n-1)
    {
       toplam=((1*sayac)/pow(x,sayac+1))+toplam;

        sayac+=2;
    }

    printf("Pozitif tam sayi:%d\n",n);
    printf("Reel sayi:%f\n",x);
    printf("Seri:%f\n",toplam);



    printf("\nDevam etmek istiyor musunuz?");
    scanf(" %c",&cevap);

}while((cevap=='e')||(cevap=='E'));
*/


/*
    float kus_sayi=2272,tav_sayi=1042;      //%1,2 artis yani 12/10*1/100=12/1000 kus
                                            //%3,8 artis yani 38/10*1/100=38/1000 tavsan

    int yil=0;

                                            //*********BU BAYA İYİ ASLİNDA************

    while(tav_sayi<kus_sayi)
    {

        tav_sayi=tav_sayi+tav_sayi*tav_artis;
        kus_sayi=kus_sayi+kus_sayi*kus_artis;

        printf("Kus sayisi:%d\nTavsan sayisi:%d\nyil:%d\n\n\n",(int)kus_sayi,(int)tav_sayi,yil);
        yil++;
    }

    printf("Tavsanlarin sayisi %d yil sonra Kuslarin sayisini gececektir.",yil);
*/


/*
        int taban;
        int us;
        int sonuc=1;
        int sayac=1;


        printf("Sayiyi ve ussunu giriniz:");
        scanf("%d %d",&taban,&us);

        while(sayac<=us)
        {
           sonuc=sonuc*taban;
           sayac++;
        }

        printf("Yapilan islemin sonucu %d'dir.",sonuc);


                                    ********       //Altli ustlu us alma islemi ornekleri ********



        int taban;
        int us;
        int sonuc=1;



        printf("Sayiyi ve ussunu giriniz:");
        scanf("%d %d",&taban,&us);

        while(us!=0)
        {
           sonuc=sonuc*taban;
           us--;
        }

        printf("Yapilan islemin sonucu %d'dir.",sonuc);
*/


/*
        int kod;                                             //Kitap vergisi %4.0  //temel gida vergisi %5.6 //luks urun vergisi %19.6
        float tutar;                                        //kitap kodu:0 / temel gida kodu:1 / luks urun kodu:2

        printf("Lutfen almak istediginiz urunun kodunu ve tutarini giriniz:");
        scanf("%d %f",&kod,&tutar);

        switch(kod)
        {
            case 0:

                printf("Kitap almayi sectiniz.\nKitabin vergisi ile tutari %f'dir.",tutar+tutar*kitap_vergi);

                break;

            case 1:

                printf("Temel gida almayi sectiniz.\nTemel gidanin vergisi ile tutari %f'dir.",tutar+tutar*temel_vergi);



                break;

            case 2:

                printf("Luks urun almayi sectiniz.\nLuks urunun vergisi ile tutari %f'dir.",tutar+tutar*luks_vergi);


                break;

            default:

                printf("Sectiginiz urun bulunamadi.Islem sonlandiriliyor.");
                break;
        }
*/

 /*
                                        //Girilen sayiya kadar fibonacci sayilarini bastirma

        int n,sayi1=0,sayi2=1,sonraki;

        printf("Kac tane fibonacci sayisi yazdirmak istiyorsunuz:");
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                printf("%d\n",sayi1);

            }

            else if(i==2)
            {
                printf("%d\n",sayi2);

            }

            else
            {
            sonraki=sayi1+sayi2;
            sayi1=sayi2;
            sayi2=sonraki;

            printf("%d\n",sonraki);

            }


        }
*/


/*
        int x,el1=0,el2=1,el_son;
        int sayac=0;

        printf("Kac tane fibonacci sayisi yazdirmak istiyorsunuz?");
        scanf("%d",&x);

        while(sayac<x)
        {
            if(sayac==0)
            {
                printf("%d\n",el1);
            }

            else if(sayac==1)
            {
                printf("%d\n",el2);
            }

            else
            {
                el_son=el1+el2;
                el1=el2;
                el2=el_son;

                printf("%d\n",el_son);

            }

            sayac++;

        }
*/

/*
    int dizi[5]={1,3,5,7,9};

    printf("%d",dizi[5]);


    for(int i=0;i<=sizeof(dizi[i]);i++)
    printf("%d\n",dizi[i]);
*/

/*
    int dizi[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++)
    {
        dizi[i]=i*2;
        printf("%d\n",dizi[i]);
    }
*/

/*
    int dizi[5]={19,10,8,17,9};

    dizi[0]=1;

    dizi[3]=21;

    for(int i=0;i<5;i++)
    {
        printf("%d\n",dizi[i]);
    }
*/

/*
    int dizi[3];


    for(int i=0;i<3;i++)
    {

        scanf("%d",&dizi[i]);

    }

    for(int i=0;i<3;i++)
    {
         printf("%d\n",dizi[i]);
    }
*/


/*
    int sayilar[3];

    int sayac=0;

    while(sayac<3)
    {
        scanf(" %d",&sayilar[sayac]);

        sayac++;
    }

    sayac=0;

    while(sayac<3)
    {
        printf("%d\n",sayilar[sayac]);

        sayac++;
    }
*/


/*
    int sayilar[3];
    int sayac=0;

    do{

        scanf("%d",&sayilar[sayac]);


        sayac++;

    }while(sayac<3);

    sayac=0;

    do{

        printf("%d\n",sayilar[sayac]);


        sayac++;

    }while(sayac<3);
*/


/*
    int i,j;

    for(i=1;i<=5;i++)           //BUNLAR COK KRITIK*****
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/


/*
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
*/


/*
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",i+64);
        }

        printf("\n");
    }
*/



/*
    int n;

    float dizi[50],toplam=0.0;


    printf("Lutfen almak istediginiz kadar sayi giriniz:");
    scanf("%d",&n);


    while(n>=50 || n<=0)
    {
        printf("Lutfen almak istediginiz kadar sayi giriniz:");
        scanf("%d",&n);
    }



    for(int i=0;i<n;i++)
    {
        printf("%d. sayiyi giriniz:\n(Lutfen girdiginiz degerler 0-100 arasi olsun)",i+1);
        scanf("%f",&dizi[i]);

        toplam+=dizi[i];  //Elemanlari toplamak icin ikinci diziye gerek yok.
    }


        printf("\n\nDizi icerisindeki elemanlarin ortalamasi %.2f'dir.",toplam/n);
*/



/*
    int sayi,sayac=1;

    float toplam=0;

    float sayi_dizisi[80];


    printf("Lutfen dizide kac tane sayi olacagini giriniz:");
    scanf("%d",&sayi);

    while(sayi>80 || sayi<=0)
    {
        printf("Lutfen dizide kac tane sayi olacagini giriniz:");
        scanf("%d",&sayi);
    }

    while(sayac<=sayi)
    {
        printf("%d. eleman:",sayac);
        scanf(" %f",&sayi_dizisi[sayac]);

        toplam=toplam+sayi_dizisi[sayac];

        sayac++;
    }

    printf("Dizinin elemanlarini ortalamasi %f'dir",toplam/sayi);
*/


/*
    int n;
    int dizi[10];

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
        scanf("%d",&dizi[i]);

    }


    for(int i=0;i<n;i++)
    {
       if(dizi[0]>dizi[i])
       {
            dizi[0]=dizi[i];
       }

    }


    printf("Dizinin en kucuk elemani %d'dir.",dizi[0]);
*/


/*                              //PIRAMIT SORULARI
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf("* ");
        }

        printf("\n");
    }
*/


/*
    for(int i=5;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");//printf("%d ",j);
        }

        printf("\n");
    }
*/


/*
    for(int i=5;i>=1;i--)       //Ilk kosulda 0 ya da 1 olmasi fark etmiyor.
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
*/


/*
    for(int i=1;i<=5;i++)
    {
        for(int j=5;i<=j;j--)
        {
            printf("%d",j);

        }

        printf("\n");
    }
*/


/*
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);

        }
        printf("\n");
    }
*/


/*
    int yusuf[2][2]={{4,6},{2,3}};

    printf("%d",yusuf[0][0]);
*/


/*
    int matris[10][10];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i==j)
            {
                matris[i][j]=1;
            }

            else
            {
                matris[i][j]=0;
            }
        }

    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d ",matris[i][j]);
        }

        printf("\n");
    }
*/


 /*                         //Kendi matrisini olusturma
    int n,p;

    printf("Lutfen olusturmak istediginiz matrisin kaca kaclik olacagini giriniz:");
    scanf("%d %d",&n,&p);

    int matris[n][p];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d. satir %d. sutun:",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",matris[i][j]);
        }

        printf("\n");
    }
*/


/*                                      //GERİ DONUCEM
    int n,p;

    printf("Lutfen olusturmak istediginiz matrisin kaca kaclik olacagini giriniz(n x n):");
    scanf("%d",&n);

    int matris[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",matris[i][]);
        }
    }
*/


/*
    int k,l,m,n;

    printf("Lutfen birinci matrisin boyutlarini giriniz (n x n):");
    scanf("%d %d",&k,&l);

    int matris1[k][l];

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("a[%d][%d]",i+1,j+1);
            scanf("%d",&matris1[i][j]);
        }

    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf("%d ",matris1[i][j]);
        }

        printf("\n");
    }

    // IKINCI MATRIS

    printf("Lutfen ikinci matrisin boyutlarini giriniz(n x n):");
    scanf("%d %d",&m,&n);


    int matris2[m][n];


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("b[%d][%d]",i+1,j+1);
            scanf("%d",&matris2[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matris2[i][j]);

        }

        printf("\n");
    }


    //MATRİS TOPLAMA

    if(k==m && l==n)
    {
        printf("Matrislerin boyutlari esittir.\nDevam ediliyor....\n\n\n");

        int x,y;

        int matris_toplam[k][l];


        for(int i=0;i<k;i++)
        {
            for(int j=0;j<l;j++)
            {
                matris_toplam[i][j]=matris1[i][j]+matris2[i][j];
            }
        }


        for(int i=0;i<k;i++)
        {
            for(int j=0;j<l;j++)
            {
                printf("%d ",matris_toplam[i][j]);
            }

            printf("\n");
        }




    }

    else
    {
        printf("Toplama islemi yapilamiyor.");

        if(k!=m && l!=n)
        {
            printf("\nMatrislerin ne satirlari ne sutunlari esittir.");
        }

        else if(k==m && l!=n)
        {
            printf("\nMatrislerin satirlari esittir ancak sutunlari esit degildir.");
        }

        else
        {
            printf("\nMatrislerin satirlari esit degilken sutunlari esittir.");
        }
    }
*/


                        //Transpoze Matris
/*
    int x,y;

    printf("Olusturmak istediginiz matrisin satir sayisini giriniz:");
    scanf("%d",&x);

    printf("Simdide sutun sayisini giriniz:");
    scanf("%d",&y);



    int matris[x][y];


    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d. satir %d. sutun:",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }


    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            printf("%d ",matris[j][i]);
        }

        printf("\n");
    }
*/

/*
    char yusuf[]={'a','b','c','d','\0'};

    char dizi[]="Yusuf";

    printf("%s",dizi);
*/

/*
    char str_dizi[50];

    printf("Lutfen bir string giriniz:");
    scanf("%s",&str_dizi);

    printf("\n\n\n");

    printf("%s",str_dizi);
*/


/*
    char dizi[50];


    printf("Lutfen bir string gir:");
    gets(dizi);     //Diziyi klavyeden alır ve sonuna \n ve \0 ekler.

    puts(dizi);     //Alinan diziyi ekrana bastirir ve alt satira gecer.


    strlen(dizi); // #include <string.h> ile calisir.
*/


































































































































































































    return 0;
}
