#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int gun;
    


    printf("gun sayisini girin: ");
    scanf("%d", &gun);
    
    float yil = gun / 365;
    
    if (yil > 5.0) printf("Belgeyi imha edin!");
    else printf("Daha gideri var");

    

    return 0;

}