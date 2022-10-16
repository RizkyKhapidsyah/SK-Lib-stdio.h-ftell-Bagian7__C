#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	//buka file dalam mode baca
	FILE* pFile = fopen("test.txt", "r");

	//pergi ke akhir file
	fseek(pFile, 0, SEEK_END);

	//dapatkan nilai saat ini dari
	//indikator posisi file
	long int size = ftell(pFile);

	//tutup filenya
	fclose(pFile);

	//tampilkan hasilnya
	printf("Size of the file: %ld bytes\n", size);

	_getch();
	return 0;
}

