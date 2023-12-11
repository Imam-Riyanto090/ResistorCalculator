#include <stdio.h>
#include <string.h>

int main()
{
    int jumlahGelang;
    char warna[] = {"hitam","coklat","merah","orange","kuning","hijau","biru","ungu","abu","putih"}; 
    double toleransi;


    printf("Masukkan jumlah gelang (4 atau 5): ");
    scanf("%d", &jumlahGelang);
    
    for(int i = 0; i< jumlahGelang; i++){
        printf("Masukkan warna gelang %d: ",i+1);
        scanf("%s", warna);
    }
    

}
