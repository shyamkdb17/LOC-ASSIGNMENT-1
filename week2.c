//Q1//

#include <stdio.h>  
#include <string.h>
int main()  
{  
    char first_string[20],second_string[20];  
    int l,i,j=0;
    printf("Enter the first string ");  
    gets(first_string);  
    printf("\nEnter the second string ");  
    gets(second_string);  
   strcat(first_string,second_string);
   printf("%s\n",first_string);
   l=strlen(first_string);
   for(i=l-1;i>=0;i--)
   {
  printf("%c",first_string[i]);
   }
  
return 0;
}


//Q2//
// SUM OF EVEN AND ODD NO.S//
#include <stdio.h>
int main()
{
    int n[10],s=0,k=0;
    for (int i=1;i<=10;i++)
{
    scanf("%d",&n[i]);
}
for(int j=1;j<=10;j++)
{
    if(n[j]%2==0)
    {
        s=s+n[j];
    }
    
    else 
    {
        k=k+n[j];
    }
}
printf("The sum ofeven no.s is %d\n",s);
printf("The sum of odd no.s is %d\n",k);
return 0;
}


//Q3//
// SWAPPING//
#include <stdio.h>
int main()
{
   int n,a,b,c,d,e,f,g,h,i,j,k,l,m;
   printf("Enter the number\n");
   scanf("%d",&n);
   if(n>=1 && n<=99)
   {
     a=n%10;
     b=n/10;
     c=a*10+b;
     printf("%d",c);
   }
   else if(n>=100 && n<=999)
   {
     d=n%10;
     e=n/100;
     f=n%100;
     g=f/10;
     h=d*100+g*10+e;
     printf("%d",h);
   }
   else if(n>=1000 && n<=9999)
   {
    i=n%10;
    j=n/1000;
    k=n%1000;
    l=k/10;
    m=i*1000+l*10+j;
    printf("%ld",m);
   }
   else 
   {
       printf("00001");
   }
   return 0;
}


//Q4//
#include <stdio.h>
int main()
{
    int n,n1,t1=0,t2=1;
    printf("Enter the no of terms of the fibonacci series\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",t1);
        n1=t1+t2;
        t1=t2;
        t2=n1;
    }
}


//Q5//
//sum and product of 2*2 matrices//
#include <stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],s=0,p=1;
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int k=1;k<=2;k++)
    {
        for (int l=1;l<=2;l++)
        {
            scanf("%d",&arr2[k][l]);
        }
    }
    for (int m=1;m<=2;m++)
    {
        for(int n=1;n<=2;n++)
        {
            s=s+arr1[m][n]+arr2[m][n];
            p=p*arr1[m][n]*arr2[m][n];
        }
    }
    printf("The sum is %d\n",s);
    printf("The product is %d\n",p);
}


//Q6//
//EMPTY SQUARE//
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1|j==5)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

