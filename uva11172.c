#include<stdio.h>
int main()
{
    int i, n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

scanf("%d %d",&a,&b);


        if(a<b) printf("<\n");

    else if(a>b){
        printf(">\n");
    }
    else
    {
        printf("=\n");
    }

}
return 0;
}

