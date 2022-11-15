#include<stdio.h>

struct Process {
    int processID;
    int burstTime;
    int tempburstTime;
    int responsetime;
    int arrivalTime;
    int priority;
    int outtime;
    int intime;
};

// It is used to include all the valid and eligible
// processes in the heap for execution. heapsize defines
// the number of processes in execution depending on
// the current time currentTime keeps a record of
// the current CPU time.
void insert(Process Heap[],Process value,int* heapsize,
	    int* currentTime)
{
	int start =*heapsize,i;
	Heap[*heapsize]=value;
	if(Heap[*heapsize].intime==-1)
		Heap[*heapsize].intime=*currentTime;
	++(*heapsize);

//      Ordering the Heap
	while(start!=0 && Heap[(start-1)/2].priority
				>Heap[start].priority){
		Process temp=Heap[(start-1)/2];
		Heap[(start-1)/2]=Heap[start];
		Heap[start]=temp;
		start=(start-1)/2;
	}
}
// It is used to reorder the heap according to
// priority if the processes after insertion
// of new process.
void order(Process Heap[],int* heapsize,int start)
{
	int smallset=start;
	int left=2*start+1;
	int right=2*start+2;
	
	if(left<*heapsize && Heap[left].priority
				<Heap[smallest].priority)
		smallest=left;

	if(right<*heapsize && Heap[right].priority
				<Heap[smallest].priority)
		smallest=right;

	if(smallest!=start){
		Process temp=Heap[smallest];
		Heap[smallest]=Heap[start];
		Heap[start]=temp;
		order(Heap,heapsize,smallest);
	}
}

// This function is used to find the process with
// highest priority from the heap. It also reorders
// the heap after extracting the highest priority process.
Process extractminmum(Process Heap[],int* heapsize,int* currentTime)
{
	Process min = Heap[0];
	if(min.responsetime==-1)
		min.responsetime=*currentTime-min.arrivalTime;
	
}






















