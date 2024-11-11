#include<stdio.h>





int main(){

    int i;
    char gender[10]; // %s  
    printf("\nEnter gender");
    scanf("%s",&gender);//male 
    //null character \0 
    printf("\nGender = %s",gender);//royal royal12 male 

    printf("\n 0 => %c",gender[0]);
    printf("\n 1 => %c",gender[1]);

    printf("\nAll Data");
    for(i=0;i<10;i++){
        if(gender[i] == '\0'){
            break;
        }
        printf("\n %c ",gender[i]);
    }
    
    return 0;
}


// int main(){

//     char gender; // %c  
//     printf("\nEnter gender");
//     scanf("%c",&gender);

//     printf("\nGender = %c",gender);

//     return 0;
// }
