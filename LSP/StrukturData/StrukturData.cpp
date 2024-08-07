#include <stdio.h>
#include <string.h>

typedef struct{
    char nama[255];
    char npm[255];
    char tempat_lahir[255];
    char tanggal_lahir[255];
    char prodi[255];
}Mahasiswa;

Mahasiswa mhs[100];
int index = 0;

void tambahData(char nama[], char npm[], char tempat_lahir[], char tanggal_lahir[], char prodi[])
{
    if(index < 100) {
        strcpy(mhs[index].nama, nama);
        strcpy(mhs[index].npm, npm);
        strcpy(mhs[index].tempat_lahir, tempat_lahir);
        strcpy(mhs[index].tanggal_lahir, tanggal_lahir);
        strcpy(mhs[index].prodi, prodi);
        printf("Data berhasil ditambahkan \n");
    }
}

void tampilData(){
    if(index == 0){
        printf("Data Tidak ada \n");
    }else{
        for(int i = 0; i< index;i++){
            printf("Nama: %s \n",mhs[i].nama);
            printf("NPM: %s \n",mhs[i].npm);
            printf("Tempat Lahir: %s \n",mhs[i].tempat_lahir);
            printf("Tanggal Lahir: %s \n",mhs[i].tanggal_lahir);
            printf("Prodi: %s \n",mhs[i].prodi);
        }
    }
}
void hapusData(int data){
    if (data < 0 || data >= index) {
        printf("Indeks mahasiswa tidak valid.\n");
        return;
    }

    for (int i = indatadex; i < index - 1; i++) {
        mhs[i] = mhs[i + 1];
    }
    index--;
    printf("Mahasiswa pada indeks %d berhasil dihapus.\n", data + 1);
}

int main() {
    printf("\nDaftar Mahasiswa:\n");
    tampilData();
    
    tambahData("Budi", "0620201010", "Jakarta", "2000-01-01", "Informatika");
    tambahData("Ani", "0620201011", "Bandung", "1999-12-12", "Informatika");

    printf("\nDaftar Mahasiswa:\n");
    tampilData();

    printf("\nMenghapus mahasiswa kedua:\n");
    hapusData(1);

    printf("\nDaftar Mahasiswa setelah dihapus:\n");
    tampilData();

    return 0;
}
