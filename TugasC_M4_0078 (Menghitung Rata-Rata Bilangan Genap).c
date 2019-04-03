/* Progam Menghitung Rata-Rata */
#include<stdio.h>

main()
{
    int ge[16], n, Ng, bil;
    int s, sg, i;
    float rg, total;
    Ng=0;
    sg=0;
    printf("Masukkan Banyak Data : ");
    scanf("%d",&n);
    printf("Masukkan Nilai Pada Data Ke-1 : ");
    scanf("%d",&bil);
    total=bil;
    for (i=2;i<=n;i++)
    {
        printf("Masukkan Nilai Pada Data Ke-%d : ",i);
        scanf("%d",&bil);
        total+=bil;
        if (bil%2==0)
        {
            sg=sg+bil;
            ge[Ng]=bil;
            Ng++;
        }
    }
    printf("Bilangan Genap : ");
    for (i = 0; i < Ng; i++)
    {
        printf("%d-", ge[i]);
    }
    printf("\nJumlah Bilangan Genap : %d\n",sg);
    if(Ng == 0 || n == 0)
    {
        Ng=1;
        n=1;
    }
    rg=sg/Ng;
    printf("Rata-rata Bilangan Genap : %.2f\n",rg);
    total=total/n;
    printf("Rata-rata Bilangan yang diinput : %.2f",total);
}
