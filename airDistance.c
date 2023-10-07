#include<stdio.h>
int main()
{
    float d, lat1, lat2, lon1, lon2, R = 6371;
    printf("Enter the latitude of location A:\n ");
    scanf("%f",lat1);
    printf("Enter the latitude of location B:\n ");
    scanf("%f",lat2);
    printf("Enter the longitude of location A:\n ");
    scanf("%f",lon1);
    printf("Enter the longitude of location B:\n ");
    scanf("%f",lon2);
    printf("Origin:(%f%f)",lat1, lon1);
    printf("Destination:(%f%f)",lat2, lon2);

    return 0;
}

