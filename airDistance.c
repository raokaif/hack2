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
        printf("Air distance: %f kms\n", d);
    }
    else
    {

        printf("invalid input\n");
    }

    return 0;
}  

// test case: 

// 1) origin: (latitude: 40.7128° N, longitude: 74.0060° W) destination: (latitude: 34.0522° N, longitude: 118.2437° W) Air distance  3,945.8.

// program Results:
// PS C:\Users\Kaif Rao\OneDrive\Desktop\Repo\hack2> gcc .\airDistance.c
// PS C:\Users\Kaif Rao\OneDrive\Desktop\Repo\hack2> .\a.exe
// Enter the latitude of location A:
//  40.7128
// Enter the latitude of location B:
//  34.0522
// Enter the longitude of location A:
//  74.0060
// Enter the longitude of location B:
//  118.2437
// Origin:(40.712799,74.005997)
// Destination:(34.052200,118.243698)
// Air distance: 3934.789062 kms

// 2) origin: (latitude: 51.5074° N, longitude: 0.1278° W) destination: (latitude: 48.8566° N, longitude: 2.3522° E) Air distance   213.4. 

// program result:
// Enter the latitude of location A:
//  51.5074
// Enter the latitude of location B:
//  48.8566
// Enter the longitude of location A:
//  0.1278
// Enter the longitude of location B:
//  2.3522
// Origin:(51.507401,0.127800)
// Destination:(48.856602,2.352200)
// Air distance: 334.445984 kms

// 3) origin: (latitude: 35.682839° N, longitude: 139.759455° E) destination: ((latitude: 40.712776° N, longitude: -74.005974° W) Air distance 10,854.1 kilometers.

// program result:
// PS C:\Users\Kaif Rao\OneDrive\Desktop\Repo\hack2> .\a.exe
// Enter the latitude of location A:
//  35.682839
// Enter the latitude of location B:
//  40.712776 
// Enter the longitude of location A:
//  139.759455
// Enter the longitude of location B:
//  -74.005974
// Origin:(35.682838,139.759460)
// Destination:(40.712776,-74.005974)
// Air distance: 10854.904297 kms
