#include <iostream>

int main() {
int g1,g2,m1,m2,a1,a2,diff;
    printf("calcola la differenza tra due date espresse in giorni, mesi, anni\ninserisci la prima data in giorni mesi anni: ");
    scanf("%d %d %d", &g1, &m1, &a1 );
    printf("inserisci la seconda data espressa in giorni, mesi, anni: ");
    scanf("%d %d %d", &g2, &m2, &a2 );
    diff = g2-g1+(m2-m1)*30+(a2-a1)*3600;
    g1 = diff%30;
    m1 = (diff/30)%12;
    a1 = diff/360;
    printf("la differenza espressa in giorni, mesi, anni e' : %d giorni, %d mesi, %d anni\n",g1,m1,a1);
}
