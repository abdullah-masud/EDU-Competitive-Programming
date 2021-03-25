#include <stdio.h>
main()
{
    int testCase;
    double pi = pi = 2 * acos (0.0);
    double radius, diameter, squareArea, circleArea, blueShadedArea;
    scanf("%d", &testCase);

    for(int i=0; i<testCase; i++)
    {
        scanf("%lf", &radius);
        diameter = radius+radius;
        squareArea = diameter*diameter;
        circleArea = pi*radius*radius;
        blueShadedArea = squareArea - circleArea;
        printf("Case %d: %.2lf\n", i+1, blueShadedArea);
    }
}
