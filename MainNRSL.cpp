/* File        : mainNRSL.cpp */
/* Deskripsi   : Driver / main program untuk ADT Non Restricted Single Linked/Linear List */
/* Dibuat oleh : Ade Chandra Nugraha*/
/* Tanggal     : 25-10-2001 */
/* Diupdate oleh : Santi Sundari, 6-4-2011, hanya tdd operasi2 dasar */
/* Diupdate oleh : WW & AM, 8-3-2025, penyesuaian area body & main untuk latihan Diploma 3 */

#include "spnrsll.h"
#include <stdio.h>

int main()
{
	/* Kamus Lokal */
		List MyList;
		infotype isi;
		address P, Prec;

	/* Program */
	CreateList (&MyList);	//List sudah terbentuk, digunakan untuk memanipulasi elemen
	
	//aksi mahasiswa untuk implementasi studi kasus
	InsertFirst(&MyList, Alokasi(7));
	PrintInfo(MyList);
	InsertLast(&MyList, Alokasi(11));
	PrintInfo(MyList);
	InsertAfter(&MyList, Alokasi(9), First(MyList));
	PrintInfo(MyList);
	InsertFirst(&MyList, Alokasi(5));
	PrintInfo(MyList);
	InsertLast(&MyList, Alokasi(13));
	PrintInfo(MyList);
	DelLast(&MyList, &P);
	PrintInfo(MyList);
	DelAfter(&MyList, &P, First(MyList));
	PrintInfo(MyList);
	DelFirst(&MyList, &P);
	PrintInfo(MyList);
	DelAll(&MyList);
	PrintInfo(MyList);
	/* Finishing */
	
	//Pastikan List di Dealokasi setelah manipulasi elemen selesai
	
	return 0;
}

