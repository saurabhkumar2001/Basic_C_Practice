// WAP TO FIND THE AREA OF A CIRCLE ??
// #include<stdio.h>
// int main(){
//     int r;
//     int pi = 3.14;
//     printf("Enter the radius of a circle \n ");
//     scanf("%d",&r);
//     float area = pi*r*r;
//     printf("the area of circle is %f with the radius %d",area,r);
//     return 0;
//     }

/*now covert the programme and make it to the volume of cylinder
 with the height and radius is given*/

#include<stdio.h>
int main(){
    int r , h;
    int pi = 3.14;
    printf("Enter the radius of a cylinder \n ");
    scanf("%d",&r);
    printf("Enter the height of a cylinder \n ");
    scanf("%d",&h);
    float volume = 2*pi*r*h;
    printf("the radius of the cylinder and the height is %d %d so that the volume of the cylinder becomes %f ",r,h,volume);
    return 0;
    }