#include<stdio.h>
double main()
{
    float TP,PW,PM,TW,TM,OL,LM,LW,OI,IM,IW;

    TP = 1441981744;
    PW = (48.4 / 100)*TP;
    PM = (TP-PW);
    OL = (85.95 / 100)*TP;
    LM = (80.95 / 100)*OL;
    LW = (62.84 / 100)*OL;
    OI = (TP-OL);
    IM = (OL-LW);
    IW = (OL-LM);

    printf("Total Population:%2lf\n",TP);
    printf("Total Number Of WOMEN:%2lf\n",PW);
    printf("Total Number Of Men:%2lf\n",PM);
    printf("_______________________\n");

    printf("OVERALL LITERANCY:%2lf\n",OL);
    printf("LITERANCY OF MEN :%2lf\n",LM);
    printf("LITERANCY OF WOMEN:%2lf\n",LW);
    printf("_______________________\n");

    printf("OVERALL ILLETERANCY:%2lf\n",OI);
    printf("ILLETERANCY OF MEN :%2lf\n",IM);
    printf("ILLETERANCY OF WOMEN:%2lf\n",IW);
    printf("_______________________\n");

    return 0;

}
