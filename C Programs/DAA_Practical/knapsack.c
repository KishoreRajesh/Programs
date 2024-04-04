#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int weight, profit;
	float value;
}item;

int compare(const void* a, const void* b){
	item* aa = (item*) a;
	item* ab = (item*) b;
	return (ab->value - aa->value);
}

int main(){
	item items[] = {{20, 60, 3}, {12, 40, 2.5}, {10, 20, 2}, {30, 100, 3.33}};
	int n = 4;
	int W = 50;
	int i, j, count;
	item* items_copy = (item*) malloc(n * sizeof(item));

	for(i = 0; i < n; i++){
		items_copy[i] = items[i];
	}

	qsort(items_copy, n, sizeof(item), compare);

	int amount[n];
	count = 0;
	for(i = 0; i < n; i++){
		if(items_copy[i].weight <= W){
			amount[count] = items_copy[i].profit;
			W -= items_copy[i].weight;
			count++;
		}
	}

	float total_profit = 0;
	for(i = 0; i < count; i++){
		total_profit += amount[i];
	}

	printf("Maximum profit is %.2f\n", total_profit);

	return 0;
}