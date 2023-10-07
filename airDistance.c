#include <stdio.h>
#include <math.h>
int main()
{
    float d, lat1, lat2, lon1, lon2, R = 6371, pi = 3.14, diff;
    printf("Enter the latitude of location A:\n ");
    scanf("%f", &lat1);
    printf("Enter the latitude of location B:\n ");
    scanf("%f", &lat2);
    printf("Enter the longitude of location A:\n ");
    scanf("%f", &lon1);
    printf("Enter the longitude of location B:\n ");
    scanf("%f", &lon2);
    printf("Origin:(%f,%f)\n", lat1, lon1);
    printf("Destination:(%f,%f)\n", lat2, lon2);
    if (lat1 >= -90 && lat1 <= 90 && lat2 >= -90 && lat2 <= 90 && lon1 >= -180 && lon1 <= 180 && lon2 >= -180 && lon2 <= 180)
    {
        lat1 = lat1 / 180 * pi;
        lat2 = lat2 / 180 * pi;
        lon1 = lon1 / 180 * pi;
        lon2 = lon2 / 180 * pi;
        diff = lon2 - lon1;
        d = acos((sin(lat1)) * (sin(lat2)) + (cos(lat1)) * (cos(lat2)) * (cos(diff))) * R;
        printf("Air distance:(%f)\n", d);
    }
    else
    {

        printf("invalid input\n");
    }

    return 0;
}
