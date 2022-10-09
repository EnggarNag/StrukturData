// C++ program for implementation of RR 
#include<iostream>
using namespace std;
// fungsi untuk mencari waiting time semua proses
void findWaitingTime(int processes[], int n,
int bt[], int wt[], int quantum)
{
// Buat salinan burst time bt [] untuk menyimpan burst time yang tersisa.
int rem_bt[n];
for (int i = 0 ; i < n ; i++)
rem_bt[i] = bt[i];
int t = 0; // waktu saat ini
// Teruskan proses traverse dengan cara round robin sampai semuanya tidak selesai.
while (1)
{
bool done = true;
// Lintasi semua proses satu per satu berulang kali
for (int i = 0 ; i < n; i++)
{
// Jika burst time suatu proses lebih besar dari 0 maka hanya perlu proses lebih lanjut
if (rem_bt[i] > 0)
{
done = false; // Ada proses yang menunggu keputusan
if (rem_bt[i] > quantum)
{
// Meningkatkan nilai t yaitu menunjukkan berapa lama suatu proses telah diproses
t += quantum;
// Kurangi burst_time proses saat ini dengan kuantum
rem_bt[i] -= quantum;
}
// ika burst time lebih kecil dari atau sama dengan kuantum. Siklus terakhir untuk proses ini
else
{
// Meningkatkan nilai t yaitu menunjukkan berapa lama suatu proses telah diproses
t = t + rem_bt[i];
// Waiting time adalah waktu saat ini dikurangi waktu yang digunakan oleh proses ini
wt[i] = t - bt[i];
// Saat proses dijalankan sepenuhnya, buat burst time yang tersisa = 0
rem_bt[i] = 0;
}
}
}
// Jika semua proses sudah selesai
if (done == true)
break;
}
}
// Fungsi untuk menghitung turn around time
void findTurnAroundTime(int processes[], int n,
int bt[], int wt[], int tat[])
{
// menghitung turn around time dengan menjumlahkan bt[i] + wt[i]
for (int i = 0; i < n ; i++)
tat[i] = bt[i] + wt[i];
}
// Fungsi untuk menghitung average time
void findavgTime(int processes[], int n, int bt[],
int quantum)
{
int wt[n], tat[n], total_wt = 0, total_tat = 0;
cout << "NIM : 20200801076"<<endl;
cout << "Nama : Enggar Lanang NAG" <<endl;
cout << "======================================================================================================================="<<endl;
// fungsi untuk mencari waiting time semua proses
findWaitingTime(processes, n, bt, wt, quantum);
// fungsi untuk menemukan Turn around Time untuk semua proses
findTurnAroundTime(processes, n, bt, wt, tat);
// Tampilkan proses beserta semua detailnya
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
// process id's
int processes[] = { 1, 2, 3, 4, 5};
int n = sizeof processes / sizeof processes[0];
// Burst time dari semua proses
int burst_time[] = {10, 6, 2, 4, 8};
// Time quantum
int quantum = 2;
findavgTime(processes, n, burst_time, quantum);
return 0;
}
