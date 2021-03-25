#include <stdio.h>
#include <math.h>
main()
{
    int cases,i;
    double fullVol,juiceVol,xR,volxR,d,r1,r2,h,p;
    scanf("%d",&cases);
    for(i=0; i<cases; i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        xR = r2 + (p*(r1-r2))/h;
        volxR = (((acos(-1.0))*p)*(xR*xR + xR*r2 + r2*r2))/3 ;
        printf("Case %d: %.9lf\n",i+1,volxR);
    }
}
