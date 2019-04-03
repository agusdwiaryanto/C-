/*Coded By Itsuka VrCy - IndoXploit Coder Team*/

#include<stdio.h>
main()
{
 int n1, n2;
 printf("Masukan bilangan ke-1 : "); scanf("%i", &n1);
 printf("Masukan bilangan ke-2 : "); scanf("%i", &n2);
 if(n1<=n2&&n1>0)
  {
   if(n2==0||n1%n2!=0)
    {
     printf("%i bukan kelipatan dari %i\n\n", n1,n2);
    }
   else{
     printf("%i adalah kelipatan dari %i\n\n", n1,n2);
    }
  }
 else{
  printf("%i bukan kelipatan dari %i\n\n", n1,n2);
   
  }
 system("pause"); //perintah agar program tidak langsung berakhir/berhenti
}
