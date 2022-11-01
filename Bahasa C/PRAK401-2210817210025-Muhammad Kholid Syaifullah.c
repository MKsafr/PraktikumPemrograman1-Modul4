#include <stdio.h>

int main (void) {
    int angka, i ;
    char huruf ;
    scanf("%d %c", &angka, &huruf);
    for (i = 1; i <= 50; i++){
        if (i % angka == 0){
            printf ("%c ", huruf);}
        else {
            printf ("%d ", i);}
    }
}
