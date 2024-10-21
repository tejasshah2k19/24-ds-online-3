#include<stdio.h>
#include<string.h>
//return   void 
//name     addition 
//argument ()

void addition(){
    
    int n1;
    int n2; 
    int ans; 

    printf("\nEnter two numbers");
    scanf("%d%d",&n1,&n2); 
    ans = n1 + n2;
    printf("\nAddition = %d",ans);

}

void sub(int n1,int n2){
    int ans;
    ans = n1 - n2; 
    printf("\nSub = %d",ans);
}


int main(){

    int x; 
    // addition();//call 
    // addition();//second call // no argument 
    sub(30,20);//paramter / argument 
    x = strlen("royalEdu");//royal india -> count total numbers of characters -> string length 
    printf("\nlength = %d",x);
    return 0;
}