#include <stdio.h>
#include <math.h>
main()
{
    double x1,y1,x2,y2,d;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    d = (sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));

    printf("%.4lf\n",d);
}

