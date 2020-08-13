
#include<stdio.h>
double Ub, Ua, Uce, Ube, Rc, Rv, Ib, Ic, Bmin, uberfak ;
int i;

void main(){
    printf("\n Geben Sie bekante greusse");

    printf("\n Ub Basisspannung :   ");
    scanf("%lf", &Ub);
    printf("\n Ua Eingangsspannung :  ");
    scanf("%lf", &Ua);
    printf("\n Uce Kollektor-Emiter Saettigungsspannung :  ");
    scanf("%lf", &Uce);
    printf("\n Ube Basis-Emiter Saettigungsspannung :  ");
    scanf("%lf", &Ube);
    printf("\n Rc Lastwiderstand (Kollektor):  ");
    scanf("%lf", &Rc);
    printf("\n Rv Basisvorwiderstand:  ");
    scanf("%lf", &Rv);
    printf("\n Ic Kollektorstrom :  ");
    scanf("%lf", &Ic);
    printf("\n Ib Basisstrom :  ");
    scanf("%lf", &Ib);
    printf("\n Bmin minimale Stromverstaerkung :  ");
    scanf("%lf", &Bmin);
    printf("\n u Uebersteuerungsfaktor :  ");
    scanf("%lf", &uberfak);

    for (i=0; i<20; i++){
        i++;

    if (Ub == 0 && Rc != 0 && Ic != 0 && Uce != 0){
        Ub = (Rc*Ic)+Uce;
    }
    else if (Ua == 0 && Rv != 0 && Ib != 0 && Ube != 0)
        Ua = (Rv*Ib)+Ube;
    else if (Uce == 0 && Ub != 0 && Rc != 0 && Ic != 0)
        Uce = Ub - (Rc*Ic);
    else if (Ube == 0 && Ua != 0 && Rv != 0 && Ib != 0)
        Ube = Ua - (Rv * Ib);
    else if (Rc == 0 && Ub != 0 && Uce != 0 && Ic != 0)
        Rc = (Ub - Uce)/Ic;
    else if (Rv == 0 && Ua != 0 && Ube != 0 && Ib != 0)
        Rv = (Ua - Ube)/Ib;
    else if (Ic == 0 && Ib != 0 && uberfak != 0 && Bmin != 0)
        Ic = (Ib/uberfak)*Bmin;
    else if (Ic == 0 && Ub != 0 && Uce != 0 && Rc != 0)
        Ic = (Ub - Uce)/Rc;
    else if (Ib == 0 && Ua != 0 && Ube != 0 && Rv != 0)
        Ib = (Ua - Ube)/Rv;
    else if (Ib == 0 && Ic != 0 && Bmin != 0 && uberfak != 0)
        Ib = (Ic/Bmin)*uberfak;
    else if (uberfak == 0 && Ib != 0 && Bmin != 0 && Ic != 0)
        uberfak = (Ib*Bmin)/Ic;
    else if (Bmin == 0 && uberfak != 0 && Ic != 0 && Ib != 0)
        Bmin == (uberfak * Ic)/Ib;

   }
    printf("\n Ub Betrieb Spannung: %lf Volt", Ub);
    printf("\n Ua Eingangsspannung : %lf Volt", Ua);
    printf("\n Uce Kollektor-Emiter Saettigungsspannung : %lf", Uce);
    printf("\n Ube Basis-Emiter Saettigungsspannung : %lf", Ube);
    printf("\n Rc Kollektor - Emiter Widerstand: %lf ",Rc);
    printf("\n Rv Basis Widerstand: %lf ", Rv);
    printf("\n Ib Basisstrom : %lf", Ib);
    printf("\n Ice Kollektorstrom : %lf ", Ic);
    printf("\n Bmin minimale Stromverstaerkung : %lf", Bmin);
    printf("\n u Uebesteuerung Faktor: %lf ",uberfak);

}
