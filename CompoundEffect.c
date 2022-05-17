#include <stdio.h>
int main () //compound effect 1% per day
{
    int a ; // days
    float b=100 ;
    printf("Hello there. I'm gonna calculate the compund effect on your life! please give me how many days you are going to use compund effect?\n");
    scanf("%i",&a);
    for(int i=0 ; i<a ; i++ ){
        b= (b*101)/100 ;
    }
    printf("\n %f This is how much you will be after %i days of getting better using compound effect .",b,a);
}