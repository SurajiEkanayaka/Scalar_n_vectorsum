#include<stdio.h>
int main()
{
    int U[5],V[5],W[5],sumU=0,sumV=0,sp=0;
 //suraji
      int i;

     for (i=0;i<5;i++)

     {​​

     printf("enter a value into the element %d of array U ",i+1);

     scanf("%d",&U[i+1]);

     printf("enter a value into the element %d of array V ",i+1);

     scanf("%d",&V[i+1]);

     }​​
    
    for (i=0;i<5;i++)
    { 
    sumU= sumU+ U[i];
    sumV= sumV+ V[i];
    } 
    printf("The scaler sum of U is %d \n",sumU);
    printf("The scaler sum of V is %d \n",sumV);
    for (i=0;i<5;i++)
    {​​
        W[i]=U[i]*V[i];
        sp=sp+W[i];
    }​​

    printf("Scaler product is %d \n",sp);

    //vector sum // Nishu

    printf("vector sum is \n",)

    for (i=0;i<5;i++)

    {​​

    W[i]=U[i]+V[i];

    printf("%d \n",W[i]);

    }​​

    //vector product

    printf("Vector product is \n")

    for (i=0;i<5;i++)

    {​​



}​​

}
