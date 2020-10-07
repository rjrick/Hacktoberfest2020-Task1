#include<stdio.h>
#include<conio.h>
void main()
{
    int No,Temp,A[100];
    printf("Enter the size of the array->\n");
    scanf("%d",&No);
    for (int i = 0; i < No; i++)
    {
        printf("Enter the Number->\n");
        scanf("%d",&A[i]);
    }
    for ( int i = 0; i < No; i++)
    {
        for (int j = 0; j < No-1; j++)
        {
            if (A[j]>A[j+1])
            {
                Temp=A[j];
                A[j]=A[j+1];
                A[j+1]=Temp;
            }
            
        }
        
    }
    printf("The Sorted Array Is->\n");
    for (int i = 0; i < No ; i++)
    {
        printf("%d\t",A[i]);
    }
    
    
    
}