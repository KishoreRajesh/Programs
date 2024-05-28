#include<stdio.h>
#define N 7
typedef struct knapsack{
    float weight;
    float profit;
    float ratio;
}knapsack;
knapsack k[N];
void sort()
{
    for(int i=0;i<N;i++)
    {

        for(int j=0;j<N-i-1;j++)
        {
            if(k[j].ratio<k[j+1].ratio)
            {
                struct knapsack temp = k[j];
                k[j]=k[j+1];
                k[j+1]=temp;
            }
        }
    }
}

int main()
{
    float cap = 15;
    float p=0;
    float current_cap=0;
    for(int i=0;i<N;i++)
    {
        printf("Enter weight:");
        scanf("%f",&k[i].weight);
        printf("Enter profit:");
        scanf("%f",&k[i].profit);
        k[i].ratio=k[i].profit/k[i].weight;
    }
    sort();
    int h=0;
    while(current_cap<cap)
    {
        if((current_cap+k[h].weight)<=cap)
        {
            current_cap+=k[h].weight;
            p+=k[h].profit;
            h++;
        }
        else{
            float t = cap - current_cap;
            p+=(t/k[h].weight)*k[h].profit;
            break;
        }
    }
    printf("Maximum profit = %f",p);
}
