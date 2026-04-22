/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 02 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : Fesya Dea Azzahra (13224049)
 *   Nama File           : soal1_Modul2.c
 *   Deskripsi           : menerima deretan data eksperimen, melaporkan jumlah, rata-rata, nilai maksimum, dan posisi pertama kemunculan 
 *                         nilai maksimum dengan benar.
 */
// Soal 1: Mesin Analisis Pointer

#include <stdio.h>
#include <math.h>

void mesinAnalisis(int *arr, int n, int *jumlah, float *average, int *max, int *posisi_max) {  
    *jumlah = 0;
    *max = arr[0];
    *posisi_max = 0;
    
    for (int i = 0; i<n; i++) {         
        *jumlah =  *jumlah + arr[i];
        if (arr[i] > *max) {
            *max = arr[i];
            *posisi_max = i;
        }
    }
    *average = (float)*jumlah / n;
}

int main() {
    int N;
    scanf("%d", &N);
    int craft[N];
    int *ptr = craft;
    for (int i = 0; i<N; i++) {
        scanf("%d", &craft[i]);          
    }

    int jumlah, max; 
    float average;
    int posisi_max;
    
    mesinAnalisis(ptr, N, &jumlah, &average, &max, &posisi_max);

    printf("SUM %d\n", jumlah);
    printf("AVG %.2f\n", average);
    printf("MAX %d\n", max);
    printf("IDX %d\n", posisi_max);
    return 0;
}
