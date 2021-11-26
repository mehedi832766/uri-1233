include <stdio.h>
int main()
{

        int i=0,t;

        scanf("%d",&t);
        while(i!=t){
             char s[3];
            scanf("%s", s);
            char t1[1];
            t1[0]=s[2];
            //printf("%c\n",t1);
             int n1,n2;
            n1=atoi(t1[0]);
            //sscanf(t1, "%d", &n1);
            printf("%d",n1);
            //sscanf(s, "%d", &n2);


           
            i++;
        }




    }

