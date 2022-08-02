#include<stdio.h>
int findNthTerm(int n)
{
     int ans=0;
     for(int i=1;i<=n;i++)
    {
	ans=ans+i;
    }
    return ans;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=findNthTerm(n);
    printf("%d\n",k);
    return 0;
}

