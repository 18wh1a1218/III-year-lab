#include <stdio.h>
#include <string.h>
int main()
{
    char fr[100][100],n;
    char str[100] = "";
    int x;
    printf("Enter the no. of frames : ");
    scanf("%d",&x);
    for(int i = 0;i < x;i++){
        printf("Frame%d : ",i+1);
        scanf("%s",&fr[i]);
    }
    printf("AT THE SENDER\n");
    printf("Data as frames:\n");
    for(int i = 0;i < x;i++){
        printf("Frame%d : %d%s\n",i+1,strlen(fr[i])+1,fr[i]);
        n = strlen(fr[i])+1;
        strcat(str,fr[i]);
    }
    printf("Data transmitted:\n");
     for(int i = 0;i < x;i++){
        printf("%d%s",strlen(fr[i])+1,fr[i]);
     }
     printf("\n");
    printf("AT THE RECEIVER\n");
    printf("The data after removing count char : %s\n",str);
    printf("The data in frame form:\n");
    for(int i = 0;i < x;i++){
        printf("Frame%d : %s\n",i+1,fr[i]);
    }
    return 0;
}