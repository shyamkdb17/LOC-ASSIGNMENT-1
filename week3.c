//Q1//

#include <stdio.h>
int gcd(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, gcd(n1, n2));
    return 0;
}

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}


//Q2//
#include <stdio.h>
int prime(int a);
int main()
{
    int a;
    printf("Enter the no. you wish to check");
    scanf("%d",&a);
    if (prime(a)==1)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
    return 0;

}
int prime(int a)
{
    int j=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            j++;
        }
    }
    if (j==2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}


//Q3//
#include <stdio.h>
int odd_even(int a);
int main()
{
    int a;
    printf("ENter the no. you wish to check: ");
    scanf("%d",&a);
    if (odd_even(a)==1)
    {
        printf("The no. you have entered is even.");
    }
    else{
        printf("The no. you have entered is odd.");
    }
    return 0;
}
int odd_even(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}



//Q4//
#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("Enter two no.s: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int k;
    k=a;
    a=b;
    b=k;
    printf("%d %d",a,b);
}



//Q5//
#include <stdio.h>
int max(int a[],int n);
void main()
{
	int i;
    int a[i];
    for(int j=0;j<i;j++)
    {
        scanf("%d",&j);
    }
	int n,m;
    printf("Enter the smallest no. in your array: ");
    scanf("%d",&n);
	m=max(a,n);
	printf("\nMAXIMUM NUMBER IS %d",m);
}
int max(int a[],int n)
{
	int t,i;
	t=a[0];
	for(i=1;i<n;i++)
        {
		if(a[i]>t)
			t=a[i];
	}
	return(t);
}