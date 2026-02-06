#include <stdio.h>
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int c=0;
    for (int i=2;i<=(N/2);i++){
        if(N%i==0){
            c+=1;
            break;
        }        
    }if(c==0){
        printf("The no. is Prime");
    }else{
        printf("The no is not Prime");
    }
}
