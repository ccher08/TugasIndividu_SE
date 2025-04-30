#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <math.h>
#include <time.h>

int main(){
	
	char P1, P2, P3;
	float num1, num2, hasil;
	int A, B, ans, sum;
	
	printf("----------------------\n");
	printf("KALKULATOR MATEMATIKA\n");
	printf("----------------------\n\n");
	printf("Mode apa yang ingin kamu gunakan?\n[1] Operasi dasar (+, -, x, :)\n[2] Quiz matematika\n\nPilihanmu (gunakan angka):  ");
	scanf("%c", &P1);
	
	system ("cls");
	if (P1 == '1'){
		printf("Masukkan angka pertama : \n");
		scanf("%f", &num1);
		printf("Masukkan angka kedua : \n");
		scanf("%f", &num2);
		
		printf("\nOperasi apa yang ingin kamu gunakan?\n[1] Penjumlahan (+)\n[2] Pengurangan (-)\n[3] Perkalian (*)\n[4] Pembagian (/)\nPilihanmu (gunakan angka):  ");
		scanf("%d", &P2);
		getchar();
		
		switch (P2){
			case 1 :
				hasil = num1 + num2;
				printf("Hasil dari %.2f + %.2f adalah %.2f\n", num1, num2, hasil);
				break;
			case 2 :
				hasil = num1 - num2;
				printf("Hasil dari %.2f - %.2f adalah %.2f\n", num1, num2, hasil);
				break;
			case 3 :
				hasil = num1 * num2;
				printf("Hasil dari %.2f * %.2f adalah %.2f\n", num1, num2, hasil);
				break;
			case 4 :
				hasil = num1 / num2;
				printf("Hasil dari %.2f / %.2f adalah %.2f\n", num1, num2, hasil);
				break;
			default :
        		printf("\nMenu tidak tersedia");
        	break;
			}
	}
	else if (P1 == '2'){
		printf("Quiz dengan operasi apa yang ingin kamu coba?\n[1] Penjumlahan (+)\n[2] Pengurangan (-)\n[3] Perkalian (*)\nPilihanmu (gunakan angka):  ");
		scanf("%d", &P3);
		getchar();
		switch (P3){
			case 1 : 
				srand(time(0));
				A = rand()%501;
				B = rand()%501;
				sum = A + B;
       			printf("Berapa hasil dari %d + %d?\nJawaban: ", A, B);
        		scanf("%d", &ans);
				getchar();	
        		if (ans == sum){
        			printf("Jawabanmu BENAR!");
				}
				else{
					printf("\nJawabanmu SALAH :(\nJawaban yang benar adalah %d", sum);
				}
				break;
			case 2 :
				srand(time(0));
				A = rand()%501;
				B = rand()%201;
				sum = A - B;
       			printf("Berapa hasil dari %d - %d?\nJawaban: ", A, B);
        		scanf("%d", &ans);
				getchar();	
        		if (ans == sum){
        			printf("Jawabanmu BENAR!");
				}
				else{
					printf("\nJawabanmu SALAH :(\nJawaban yang benar adalah %d", sum);
				}
				break;
			case 3 :
				srand(time(0));
				A = rand()%101;
				B = rand()%101;
				sum = A * B;
       			printf("Berapa hasil dari %d * %d?\nJawaban: ", A, B);
        		scanf("%d", &ans);
				getchar();	
        		if (ans == sum){
        			printf("Jawabanmu BENAR!");
				}
				else{
					printf("\nJawabanmu SALAH :(\nJawaban yang benar adalah %d", sum);
				}
				break;
		}
	}
	else{
		printf("Menu tidak tersedia");
	}
	
return 0;
}

