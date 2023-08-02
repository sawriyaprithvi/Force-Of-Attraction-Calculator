#include <stdio.h>

float force(float mass) {
    float result = mass * 9.8;
    return result;
}

int main() {
    float m;
    
    printf("Enter the mass in kg: ");
    scanf("%f", &m);
    
    if (m <= 0) {
        printf("Error: Mass should be a positive value.\n");
        return 1;
    }
    
    printf("The force in Newton is %.2f\n", force(m));
    
    return 0;
}
