#include <stdio.h>

int main() {
    int radius, height;

    printf("Enter cone height: ");
    scanf("%d", &height);
    
    printf("Enter cone radius: ");
    scanf("%d", &radius);

    float volume = (1.0 / 3.0) * 3.14159265359 * radius * radius * height;

    printf("Cone volume = %.1f\n", volume);

    if (volume > 260) 
    {
        printf("\nThis cone is perfect for Supun's project\n");
    } 
    else 
    {
        printf("\nThis cone is not fit for this project\n");
    }

    return 0;
}
