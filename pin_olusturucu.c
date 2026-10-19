#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main()


{

    srand(time(NULL));
    int i,number,randompin;

    printf("PIN Olusturma Sistemine Hosgeldiniz!\n");
    printf("Lutfen Olusturmak Istediginiz PIN Sayisini Giriniz: \n");
    scanf("%d",&number);
    printf("PIN Olusturuluyor...\n");
    printf("=========================================\n");

    for(i=1;i<=number;i++){
        randompin=rand() % 9000 + 1000;
        printf("%d. PIN = %d\n",i,randompin);
    }

}