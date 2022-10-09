// C++ program for implementation of FCFS
#include<iostream>
using namespace std;
// fungsi untuk mencari waiting time semua proses
void findWaitingTime(int processes[], int n,
int bt[], int wt[])
{
// waiting time untuk proses pertama adalah 0
wt[0] = 0;
// calculating waiting time
for (int i = 1; i < n ; i++ )
wt[i] = bt[i-1] + wt[i-1] ;
}
// fungsi untuk menghitung turn around time
void findTurnAroundTime( int processes[], int n,
int bt[], int wt[], int tat[])
{
// menghitung turnaround time dengan menjumlahkan bt[i] + wt[i]
for (int i = 0; i < n ; i++)
tat[i] = bt[i] + wt[i];
}
//Fungsi untuk menghitung average time
void findavgTime( int processes[], int n, int bt[])
{
int wt[n], tat[n], total_wt = 0, total_tat = 0;
cout << "NIM : 20200801076"<<endl;
cout << "Nama : Enggar Lanang NAG" <<endl;
cout << "======================================================================================================================="<<endl;
//fungsi untuk mencari waiting time semua proses
findWaitingTime(processes, n, bt, wt);
//fungsi untuk menemukan Turn around Time untuk semua proses
findTurnAroundTime(processes, n, bt, wt, tat);
//Tampilkan proses beserta semua detailnya
cout << "Processes "<< " Burst time "
<< " Waiting time " << " Turn around time\n";
// menghitung total waiting time dan total turn around time
for (int i=0; i<n; i++)
{
total_wt = total_wt + wt[i];
total_tat = total_tat + tat[i];
cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
<< wt[i] <<"\t\t " << tat[i] <<endl;
}
cout << "Average waiting time = "
<< (float)total_wt / (float)n;
cout << "\nAverage turn around time = "
<< (float)total_tat / (float)n;
}
// Driver code
int main()
{
//process id's
int processes[] = { 1, 2, 3, 4, 5} ;
int n = sizeof processes / sizeof processes[0];
//Burst time dari semua proses
int burst_time[] = {10, 6, 2 ,4 ,8} ;
findavgTime(processes, n, burst_time);
return 0;
}
