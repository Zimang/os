It's very suprising to know that there're so many algo in the field.
I mean I will make them all clear for a short time, in code or statement.

# Terminology
- **Arrival Time:** Time at which the process arrives in the ready queue.

- **Completion Time:** Time at which process completes its execution.

- **Burst Time:** Time required by a process for CPU execution.

- **Turn Around Time:** Time Difference between completion time and arrival time.

  > Turn Around Time = Completion Time  –  Arrival Time

- **Waiting Time(W.T):** Time Difference between turn around time and burst time.

  > Waiting Time = Turn Around Time  –  Burst Time
  
- Arrival->Waiting->Burst

  ​             |<---- TAT ---->|

  |<- Completion Time->|

- For multi-process ,Waiting Time should be begin-now time difference Arrival time. 

-  **Response Ratio = (W + S)/S**

  > Here, **W** is the waiting time of the process so far and **S** is the Burst time of the process.

# Typ1es of CPU Scheduling

- [Preemptive Scheduling](https://www.geeksforgeeks.org/preemptive-and-non-preemptive-scheduling/): Preemptive scheduling is used when a process switches from running  state to ready state or from the waiting state to the ready state.

- [Non-Preemptive Scheduling](https://www.geeksforgeeks.org/preemptive-and-non-preemptive-scheduling/): Non-Preemptive scheduling is used when a process terminates , or when a process switches from running state to waiting state.

  ![Different types of CPU Scheduling Algorithms](https://media.geeksforgeeks.org/wp-content/uploads/20220525174157/UntitledDiagram12.jpg)



## First Come First Serve

**Characteristics of FCFS:**

- FCFS supports non-preemptive and preemptive CPU scheduling algorithms.
- Tasks are always executed on a First-come, First-serve concept.
- FCFS is easy to implement and use.
- This algorithm is not much efficient in performance, and the wait time is quite high.

**Advantages of FCFS:**

- Easy to implement
- First come, first serve method

**Disadvantages of FCFS:**

- FCFS suffers from [**Convoy effect**](https://www.codingninjas.com/codestudio/library/convoy-effect).
- The average waiting time is much higher than the other algorithms.
- FCFS is very simple and easy to implement and hence not much efficient.

## Shortest Job First(SJF)

**Shortest job first (SJF)** is a scheduling process that selects the waiting process with the  smallest execution time to execute next. This scheduling method may or  may not be preemptive. Significantly reduces the average waiting time  for other processes waiting to be executed. The full form of SJF is  Shortest Job First.

**Characteristics of SJF:**

- Shortest Job first has the advantage of having a minimum average waiting time among all [operating system scheduling algorithms.](https://www.geeksforgeeks.org/cpu-scheduling-in-operating-systems/)
- It is associated with each task as a unit of time to complete.
- It may cause starvation if shorter processes keep coming. This problem can be solved using the concept of ageing.

**Advantages of Shortest Job first:**

- As SJF reduces the average waiting time thus, it is better than the first come first serve scheduling algorithm.
- SJF is generally used for long term scheduling

**Disadvantages of SJF:**

- One of the demerit SJF has is starvation.
- Many times it becomes complicated to predict the length of the upcoming CPU request

##  Longest Job First(LJF)

**Longest Job First(LJF)** scheduling process is just opposite of shortest job first (SJF), as the name suggests this algorithm is based upon the fact that the process  with the largest burst time is processed first. Longest Job First is  non-preemptive in nature.

**Characteristics of LJF:**

- Among all the processes waiting in a waiting queue, CPU is always assigned to the process having largest burst time.
- If two processes have the same burst time then the tie is broken using [FCFS ](https://www.geeksforgeeks.org/program-for-fcfs-cpu-scheduling-set-1/)i.e. the process that arrived first is processed first. 
- LJF CPU Scheduling can be of both preemptive and non-preemptive types.

**Advantages of LJF:**

- No other task can schedule until the longest job or process executes completely.
- All the jobs or processes finish at the same time approximately.

**Disadvantages of LJF:**

- Generally, the LJF algorithm gives a very high [average waiting time](https://www.geeksforgeeks.org/difference-between-turn-around-time-tat-and-waiting-time-wt-in-cpu-scheduling/) and[ average turn-around time](https://www.geeksforgeeks.org/difference-between-turn-around-time-tat-and-waiting-time-wt-in-cpu-scheduling/) for a given set of processes.
- This may lead to convoy effect.

## Priority Scheduling

**Preemptive Priority CPU Scheduling Algorithm** is a pre-emptive method of [CPU scheduling algorithm](https://www.geeksforgeeks.org/cpu-scheduling-in-operating-systems/) that works **based on the priority** of a process. In this algorithm, the editor sets the functions to be as important, meaning that the most important process must be done first.  In the case of any conflict, that is, where there are more than one  processor with equal value, then the most important CPU planning  algorithm works on the basis of the FCFS (First Come First Serve)  algorithm.

## Round robin

**Round Robin** is a [CPU scheduling algorithm](https://www.geeksforgeeks.org/cpu-scheduling-in-operating-systems/) where each process is cyclically assigned a fixed time slot. It is the [preemptive ](https://www.geeksforgeeks.org/preemptive-and-non-preemptive-scheduling/)version of[ First come First Serve CPU Scheduling algorithm](https://www.geeksforgeeks.org/first-come-first-serve-cpu-scheduling-non-preemptive/). Round Robin CPU Algorithm generally focuses on Time Sharing technique. 

**Advantages of Round robin:**

- Round robin seems to be fair as every process gets an equal share of CPU.
- The newly created process is added to the end of the ready queue.

To learn about how to implement this CPU scheduling algorithm, please refer to our detailed article on the [Round robin Scheduling algorithm](https://www.geeksforgeeks.org/program-round-robin-scheduling-set-1/).

## Shortest Remaining Time First

**Shortest remaining time first** is the preemptive version of the Shortest job first which we have discussed earlier where the  processor is allocated to the job closest to completion. In SRTF the  process with the smallest amount of time remaining until completion is  selected to execute.

##  Longest Remaining Time First:

**The longest remaining time first** is a preemptive version of the longest job first scheduling algorithm.  This scheduling algorithm is used by the operating system to program  incoming processes for use in a systematic way. This algorithm schedules those processes first which have the longest processing time remaining  for completion.

## Highest Response Ratio Next

**Highest Response Ratio Next** is a non-preemptive CPU Scheduling algorithm and it is considered as one  of the most optimal scheduling algorithms. The name itself states that  we need to find the response ratio of all available processes and select the one with the highest Response Ratio. A process once selected will  run till completion.

**Characteristics of Highest Response Ratio Next:**

- The **criteria** for HRRN is **Response Ratio,** and the **mode** is **Non-Preemptive.** 
- HRRN is considered as the modification of [Shortest Job First](https://www.geeksforgeeks.org/shortest-job-first-cpu-scheduling-with-predicted-burst-time/) to reduce the problem of [starvation](https://www.geeksforgeeks.org/starvation-aging-operating-systems/).
- In comparison with SJF, during the HRRN scheduling algorithm, the CPU is allotted to the next process which has the **highest response ratio** and not to the process having less burst time.



## Multiple Queue Scheduling

Processes in the ready queue can be divided into different classes where each class has its own scheduling needs. For example, a common division is a **foreground (interactive)** process and a **background (batch)** process. These two classes have different scheduling needs. For this kind of situation **Multilevel Queue Scheduling** is used. 

- **System Processes:** The CPU itself has its process to run, generally termed as System Process.
- **Interactive Processes:** An Interactive Process is a type of process in which there should be the same type of interaction.
- **Batch Processes:** Batch processing is generally a technique in the Operating system that collects the programs and data together in the form of a **batch** before the **processing** starts.

## **Multilevel Feedback Queue Scheduling (MLFQ)**

 CPU Scheduling is like  **Multilevel Queue Scheduling** but in this process can move between the queues. And thus, much more efficient than multilevel queue scheduling. 
