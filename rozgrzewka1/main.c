#include <stdio.h>
#include <stdlib.h>

int Sum(int arr[],int s)
{
    int res=0;
   // printf("%d\n",arr[2]);
    for(int i=0; i<s;i++)
    {
        if(arr[i]%2==0 || arr[i]<6)
        {
            res+=arr[i];
        }
    }
    return res;
}

int main()
{
    printf("Rozgrzewka1\n");
    int n=10;
    int tab[10]={10,3,4,13,11,19,100,9,1,6};
    printf("wynik funk: %d\n",Sum(tab,n));


    return 0;
}
