#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi_1;
int sayi_2;
int islem;
int sonuc_1 = sayi_1+sayi_2;
float sonuc_2 = sayi_1-sayi_2;
float sonuc_3 = sayi_1*sayi_2;
float sonuc_4 = sayi_1/sayi_2;



printf("birinci sayiyi girin: ");
scanf("%d", &sayi_1);

printf("ikinci sayiyi girin: ");
scanf("%d", &sayi_2);

printf("toplama islemi icin 1 yaz \n cikarma islemi icin 2 yaz \n carpma islemi icin 3 yaz \n bolme islemi icin 4 yaz: ");
scanf("%d", &islem);

if (islem == 1) {printf("cevap = %d ", sonuc_1 );}

else if (islem == 2) {printf("cevap = %f ", sonuc_2 );}

else if (islem == 3) {printf("cevap = %f ", sonuc_3 );}

else if (islem == 4) {printf("cevap = %f ", sonuc_4 );}


}

