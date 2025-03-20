#include <stdio.h>
#include <math.h>

#define G 9.81 // Acceleration due to gravity in m/s^2

int main() {
    double velocity, angle, range;

    // Input initial velocity and angle
    printf("Enter the initial velocity (in m/s): ");
    scanf("%lf", &velocity);
    printf("Enter the angle of projection (in degrees): ");
    scanf("%lf", &angle);

    // Convert angle to radians
    angle = angle * ((22/7)/ 180.0);

    // Calculate the range
    range = (pow(velocity, 2) * sin(2 * angle)) / G;

    // Display the result
    printf("The range of the projectile is: %.2f meters\n", range);

    return 0;
}
