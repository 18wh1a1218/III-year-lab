#include<stdio.h>
#include<string.h>
int main(){
    char k[30];
    int i,count = 0;
    printf("Enter the data : ");
    scanf("%s",k);
    printf("\n");
    printf("Data At Sender : ");
    printf("%s\n",k);
    printf("Data After Character Stuffing : dlestx");
    for(i = 0;i < strlen(k);i++){
        printf("%c",k[i]);
        if(k[i] == 'd'){
            count++;
        }
        else if(k[i] == 'l' && count == 1){
            count++;
        }
        else if(k[i] == 'e' && count == 2){
            count = 0;
            printf("dle");
        }
        else{
            count = 0;
        }
    }
    printf("dleetx\n\n");
    printf("Data At Receiver : \n");
    printf("Data After Destuffing : ");
    printf("%s\n",k);
    return 0;
}