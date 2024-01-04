// Program Data_mahasiswa
#include<stdio.h>

typedef struct  {
        char nim[10];
		char nama[25];
		char jurusan[25];
		int nilai
    } mahasiswa;
mahasiswa mhs[50];

int main()
{
    // Kamus
    
    int i,n;

    // Algoritma
	// {scanf data}
    printf("Masukkan jumlah data yang akan di input\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("scanf data mahasiswa\n");
        printf("nim anda = ");
        scanf("%s",&mahasiswa[i].nim);
        printf("nama anda = ");
        scanf("%s",&mahasiswa[i].nama);
        printf("jurusan anda = ");
        scanf("%d",&mahasiswa[i].jurusan);
        printf("nilai anda = ");
        scanf("%d",&mahasiswa[i].nilai);
    }
	
    
    // printf data}
    for(i=0;i<n;i++)
    {
        printf("Data mahasiswa ke-%d\n",i+1);
        printf("------------------------\n");
        printf("nim anda = %s\n",mahasiswa[i].nim);
        printf("nama anda = %s\n",mahasiswa[i].nama);
        printf("jurusan anda = %s\n",mahasiswa[i].jurusan);
        printf("nilai anda = %d\n",mahasiswa[i].nilai);
    }
	

    return 0;
}
