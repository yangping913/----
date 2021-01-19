#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   int main()
   {
       char a[100][11],b[100][11],c[100][11],s[11];
       int n,m,i,j,k;
      while(~scanf("%d%d",&n,&m))
      {
          for(i=0;i<n;i++)
       {
           scanf("%s\n",a[i]);
       }
          
       for(i=0;i<m;i++)
       {
           scanf("%s\n",b[i]);
       }
       for(k=0,i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(strcmp(a[i],b[j])==0)
               {strcpy(c[k],a[i]);
                   k++;}
           }
       }
       for(i=0;i<k-1;i++)
       {
           for(j=0;j<k-1-i;j++)
           {
               if(strcmp(c[j],c[j+1])>0)
               {
                   strcpy(s,c[j]);
                   strcpy(c[j],c[j+1]);
                   strcpy(c[j+1],s);
               }
           }
       }
       for(i=0;i<k;i++)
        printf("%s\n",c[i]);
        if(k==0)
            printf("sad!");
      }
       return 0;
   }
