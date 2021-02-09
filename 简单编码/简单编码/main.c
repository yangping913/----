    #include <stdio.h>
    #include <stdlib.h>
    #include<string.h>
    int main()
    {
        char a[100];
        int i,n;
        scanf("%s",a);
        n=strlen(a);
        for(i=0; i<n; i++)
        {
            if(48<=a[i]&&a[i]<=57)
            {
                a[i]=105-a[i];
            }
            else if('a'<=a[i]&&'z'>=a[i])
            {
                a[i]=a[i]-32;
            }
            else if('A'<=a[i]&&'Z'>=a[i])
            {
                a[i]=a[i]+32;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            printf("%c",a[i]);
        }
        return 0;
    }
