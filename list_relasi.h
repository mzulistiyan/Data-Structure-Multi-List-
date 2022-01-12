
#ifndef LIST_RELASI_H_INCLUDED
#define LIST_RELASI_H_INCLUDED

#include "list_child.h"

#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define info(P) P->info

typedef struct elmlist_relasi *address_relasi;

struct elmlist_relasi{
    address_relasi next;
    address_child info;

};

struct List_relasi{
    address_relasi first;
};


void createList(List_relasi &L);
void insertFirst(List_relasi &L, address_relasi P);

void deleteFirst(List_relasi &L, address_relasi &P);
void deleteLast(List_relasi &L, address_relasi &P);
void deleteAfterRelasi(address_relasi Prec, address_relasi &P);
void hapus_relasi(List_relasi &L ,string nama, address_relasi &P);
void deleteElement (List_relasi &L, address_relasi &P);
address_child CariNamaPesertaEvent(List_relasi &L, string nama_peserta);

int selectMenu();

void insertLast(List_relasi &L, address_relasi P);
void hapus_relasi(List_relasi &L ,string no);

address_relasi alokasi(address_child C);

address_relasi findElm(List_relasi L);
void printInfo(List_relasi L);


#endif // LIST_RELASI_H_INCLUDED
