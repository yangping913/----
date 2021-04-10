#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char str1[1000],str2[1000];
    scanf("%s %s",str1,str2);
    int l1=strlen(str1);
    int l2=strlen(str2);
    int flag=0,i;
    if(l1!=l2) flag=1;
    for(i=0;i<l1;i++){
        if(str1[i]!=str2[l1-i-1]) flag++;
    }
    if(flag==0) printf("wuhu!\n");
    else printf("haoziweizhi\n");
    return 0;
}
