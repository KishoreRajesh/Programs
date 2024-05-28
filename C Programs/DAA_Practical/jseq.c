#include <stdio.h>
#include <stdlib.h>

typedef struct Job {
    char id;     // Job ID
    int deadline; // Deadline of job
    int profit;  // Profit if job is done before or on deadline
} Job;

// A utility function to sort jobs according to their profit
int compare(const void *a, const void *b) {
    Job *job1 = (Job *)a;
    Job *job2 = (Job *)b;
    return job2->profit - job1->profit;
}

// Function to find the maximum deadline among all jobs
int findMaxDeadline(Job jobs[], int n) {
    int max = jobs[0].deadline;
    for (int i = 1; i < n; i++) {
        if (jobs[i].deadline > max)
            max = jobs[i].deadline;
    }
    return max;
}

// Function to print the job sequence to maximize the total profit
void printJobScheduling(Job jobs[], int n) {
    // Sort all jobs according to their decreasing order of profit
    qsort(jobs, n, sizeof(Job), compare);

    int maxDeadline = findMaxDeadline(jobs, n);

    // Array to keep track of free time slots
    int slot[maxDeadline];
    for (int i = 0; i < maxDeadline; i++)
        slot[i] = -1;

    // Result array to store the sequence of jobs
    char jobSequence[maxDeadline];

    // Iterate through all given jobs
    for (int i = 0; i < n; i++) {
        // Find a free slot for this job (starting from the last possible slot)
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            // Free slot found
            if (slot[j] == -1) {
                slot[j] = i; // Assign this job to this slot
                jobSequence[j] = jobs[i].id;
                break;
            }
        }
    }

    // Print the result
    printf("Job sequence for maximum profit: ");
    for (int i = 0; i < maxDeadline; i++) {
        if (slot[i] != -1)
            printf("%c ", jobSequence[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    Job jobs[] = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(jobs) / sizeof(jobs[0]);

    printf("Following is the maximum profit sequence of jobs:\n");
    printJobScheduling(jobs, n);

    return 0;
}
