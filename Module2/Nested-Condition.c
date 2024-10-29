#include <stdio.h>

int main(){

    int tk;
    scanf("%d",&tk);
    if (tk>=5000)
    {
        printf("Going to Cox's Bazar \n");
        if (tk>=10000)
        {
            printf("Going to Saint Martin \n");


        }else{
            printf("Going to home \n");
        }
        
    }else{
        printf("Kothao jabo na \n");
    }
    

    return 0;
}