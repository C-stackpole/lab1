#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    float side1, side2, side3;
    float semi, area;

    printf("Enter side 1:");
    scanf("%f", &side1);

    printf("Enter side 2:");
    scanf("%f", &side2);

    printf("Enter side 3:");
    scanf("%f", &side3);
    
    if (side1+side2 > side3 && side1+side3> side2 && side2+ side3> side1){
        semi = (side1 + side2 + side3)/2;
        area = sqrt(semi * (semi-side1) * (semi-side2) * (semi-side3));
        printf("Area: %.2f\n", area); 
        if(side1 == side2 && side1 == side3){
            printf("equilateral\n");
        }
        else if(side1 == side2 || side1 == side3 || side2 == side3){
            printf("isosceles\n");
        }
        else{
            printf("scalene\n");
        }
    }else{
        printf("impossible\n");
    }


    return 0;
}