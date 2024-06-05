#include<stdio.h>

int main(){
    int arr[6]={1, 6, 13, 16, 25, 26};

    // cetak isi array sebelum
    printf("Daftar Halaman Sebelum Perubahan:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // ubah value array
    arr[1]=8;
    arr[2]=16;
    arr[4]=26;

    // cetak setelah perubahan
    printf("\nDaftar Halaman Setelah Perbubahan:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d " ,arr[i]);
    }
    return 0;
}