#include <stdio.h>

#define MAX_SIZE 20

// Function prototypes
void allocateMemory(int blocks[MAX_SIZE], int processes[MAX_SIZE], int nb, int np);
void deallocateMemory(int blocks[MAX_SIZE], int parray[MAX_SIZE], int barray[MAX_SIZE], int np);
void printSimulationResults(int blocks[MAX_SIZE], int parray[MAX_SIZE], int barray[MAX_SIZE], int np);

int main()
{
    int blocks[MAX_SIZE], processes[MAX_SIZE];
    int nb, np;

    printf("\n\t\t\tMemory Management Scheme - Best Fit\n");

    // Input validation for number of blocks
    do {
        printf("Enter the number of blocks (max %d): ", MAX_SIZE);
        scanf("%d", &nb);
    } while (nb <= 0 || nb > MAX_SIZE);

    // Input validation for number of processes
    do {
        printf("Enter the number of processes (max %d): ", MAX_SIZE);
        scanf("%d", &np);
    } while (np <= 0 || np > MAX_SIZE);

    printf("\nEnter the size of the blocks:\n");
    for(int i = 0; i < nb; i++)
    {
        printf("Block no.%d: ", i+1);
        scanf("%d", &blocks[i]);
    }

    printf("\nEnter the size of the processes:\n");
    for(int i = 0; i < np; i++)
    {
        printf("Process no.%d: ", i+1);
        scanf("%d", &processes[i]);
    }

    // Call allocateMemory function to allocate memory to processes
    allocateMemory(blocks, processes, nb, np);

    // Call deallocateMemory function to deallocate memory from processes
    int parray[MAX_SIZE] = {0}; // Array to store process allocation information
    int barray[MAX_SIZE] = {0}; // Array to store block allocation information
    deallocateMemory(blocks, parray, barray, np);

    // Display simulation results in table format
    printSimulationResults(blocks, parray, barray, np);

    return 0;
}

// Function to allocate memory to processes using Best Fit algorithm
void allocateMemory(int blocks[MAX_SIZE], int processes[MAX_SIZE], int nb, int np)
{
    int barray[MAX_SIZE] = {0}; // Array to store block allocation information

    for(int i = 0; i < np; i++)
    {
        int min = MAX_SIZE;
        for(int j = 0; j < nb; j++)
        {
            if(blocks[j] >= processes[i] && blocks[j] < min)
            {
                min = blocks[j];
                barray[i] = j;
            }
        }
        if(min != MAX_SIZE)
        {
            blocks[barray[i]] -= processes[i];
        }
    }

    printf("\nBlock allocation details:\n");
    for(int i = 0; i < np; i++)
    {
        if(barray[i] != 0)
        {
            printf("Process no.%d allocated to block no.%d\n", i+1, barray[i]+1);
        }
        else
        {
            printf("Process no.%d not allocated\n", i+1);
        }
    }
}

// Function to deallocate memory from processes
void deallocateMemory(int blocks[MAX_SIZE], int parray[MAX_SIZE], int barray[MAX_SIZE], int np)
{
    for(int i = 0; i < np; i++)
    {
        if(barray[i] != 0)
        {
            blocks[barray[i]] += parray[i];
            parray[i] = 0;
            barray[i] = 0;
        }
    }
}

// Function to display simulation results in table format
void printSimulationResults(int blocks[MAX_SIZE], int parray[MAX_SIZE], int barray[MAX_SIZE], int np)
{
    printf("\nSimulation Results:\n\n");
    printf("Block No.\tBlock Size\tFragment Size\n");

    int fragments[MAX_SIZE];
    for(int i = 0; i < np; i++)
    {
        fragments[i] = blocks[barray[i]];
    }

    for(int i = 0; i < np; i++)
    {
        if(barray[i] != 0)
        {
            printf("%d\t\t\t%d\t\t\t%d\n", barray[i]+1, blocks[barray[i]], fragments[i]);
        }
        else
        {
            printf("%d\t\t\t%d\t\t\t%d\n", i+1, blocks[i], blocks[i]);
        }
    }
}
