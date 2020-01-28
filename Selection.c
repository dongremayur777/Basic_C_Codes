#include<stdio.h>
void selection_sort ();
int A[100];
int n;
void selection_sort () 
{
        int minimum,i,j,t;        
        for(i = 0; i < n ; i++)  
        {
            minimum=i;
            for(j = i+1; j < n ; j++ )
             {
                if(A[ j ] < A[i]) 
                {                
                minimum = j ;
                }
             }
            if(A[i]!=A[minimum])
                  {
                     t=A[i];
                     A[i]=A[minimum];
                     A[minimum]=t;
                  }
        }
   }
   
   int main()
   {int j;
   printf("Enter the no of Elements");
   scanf("%d",&n);
   printf("Enter the values in the Array");
   for(j=0;j<n;j++)
   {
      scanf("%d",&A[j]);
   }
   selection_sort();
   printf("The modified Array is:\n");
   for(j=0;j<n;j++)
   {
   printf("%d\n",A[j]);
   }
   printf("\n");
   return 0;
   }
