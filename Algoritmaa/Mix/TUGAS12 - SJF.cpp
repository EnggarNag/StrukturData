// C++ program to implement Shortest Job First (SJF)
#include <bits/stdc++.h>
using namespace std;
struct Process {
int pid; // Process ID
int bt; // Burst Time
int art; // Arrival Time
};
// fungsi untuk mencari waiting time semua proses
void findWaitingTime(Process proc[], int n,
int wt[])
{
int rt[n];
// Salin burst time ke rt[]
for (int i = 0; i < n; i++)
rt[i] = proc[i].bt;
int complete = 0, t = 0, minm = INT_MAX;
int shortest = 0, finish_time;
bool check = false;
// Proses sampai semua proses selesai
while (complete != n) {
// Temukan proses dengan sisa waktu minimum di antara proses yang datang hingga saat ini
for (int j = 0; j < n; j++) {
if ((proc[j].art <= t) &&
(rt[j] < minm) && rt[j] > 0) {
minm = rt[j];
shortest = j;
check = true;
}
}
if (check == false) {
t++;
continue;
}
// Kurangi waktu yang tersisa satu per satu
rt[shortest]--;
// Perbarui minimum
minm = rt[shortest];
if (minm == 0)
minm = INT_MAX;
// Jika suatu proses dijalankan sepenuhnya
if (rt[shortest] == 0) {
// Penambahan selesai
complete++;
check = false;
// Temukan waktu selesai dari proses saat ini
finish_time = t + 1;
// Menghitung waiting time
wt[shortest] = finish_time -
proc[shortest].bt -
proc[shortest].art;
if (wt[shortest] < 0)
wt[shortest] = 0;
}
// Penambahan waktu
t++;
}
}
// Fungsi untuk menghitung turn around time
void findTurnAroundTime(Process proc[], int n,
int wt[], int tat[])
{
// Menghitung turn around time dengan menjumlahkan bt[i] + wt[i]
for (int i = 0; i < n; i++)
tat[i] = proc[i].bt + wt[i];
}
// Fungsi untuk menghitung average time
void findavgTime(Process proc[], int n)
{
int wt[n], tat[n], total_wt = 0,
total_tat = 0;
cout << "NIM : 20200801076"<<endl;
cout << "Nama : Enggar Lanang NAG" <<endl;
cout << "======================================================================================================================="<<endl;
// fungsi untuk mencari waiting time semua proses
findWaitingTime(proc, n, wt);
// fungsi untuk menemukan turn around time untuk semua proses
findTurnAroundTime(proc, n, wt, tat);
// Tampilkan proses beserta semua detailnya
cout << "Processes "
<< " Burst time "
<< " Waiting time "
<< " Turn around time\n";
// Menghitung total waiting time dan total turn around time
for (int i = 0; i < n; i++) {
total_wt = total_wt + wt[i];
total_tat = total_tat + tat[i];
cout << " " << proc[i].pid << "\t\t"
<< proc[i].bt << "\t\t " << wt[i]
<< "\t\t " << tat[i] << endl;
}
cout << "\nAverage waiting time = "
<< (float)total_wt / (float)n;
cout << "\nAverage turn around time = "
<< (float)total_tat / (float)n;
}
// Driver code
int main()
{
Process proc[] = { { 1, 10, 2 }, { 2, 6, 2 },
{ 3, 2, 2 }, { 4, 4, 2 } , { 5, 8, 2} };
int n = sizeof(proc) / sizeof(proc[0]);
findavgTime(proc, n);
return 0;
}
