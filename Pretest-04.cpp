/*
NAMA PROGRAM	: Pretest-04
NAMA			: Anne Audistya F
NPM				: 140810180059
KELAS			: A
TANGGAL			: 26 Maret 2019
*/

#include <iostream>

using namespace std;

struct ElemtList{
    char NPM[14];
    char nama[40];
    float IPK;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElemt(pointer& pBaru);
void insertLast (List& First, pointer pBaru);
void sort (List First, pointer pBaru);
void traversal (List First);


int main()
{
    pointer p;
    List mhs;
    int pilih;

    createList(mhs);
    while(1){
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1. Tambah Data "<<endl;
        cout<<"2. Tampilkan"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Masukan Pilihan : "; cin >> pilih;
        switch(pilih){
        case 1:
            createElemt(p);
            insertLast(mhs, p);
        break;

        case 2:
            traversal(mhs);
        break;

        case 3:
            return 0;
            break;
        }
        system("pause");
    }
}
void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Nama               : "; cin.ignore();cin.getline(pBaru->nama,40);
    cout<<"NPM                : "; cin>>pBaru->NPM;
    cout<<"IPK                : "; cin>>pBaru->IPK;
    pBaru->next=NULL;
}
void traversal(List First){
    cout<<"\nNo\t"<<"\tNama\t\t"<<"NPM\t\t"<<"IPK\t"<<endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout<<i<<"\t"<<pBantu->nama<<"\t\t\t"<<pBantu->NPM<<"\t\t"<<pBantu->IPK<<endl;
        pBantu=pBantu->next;
        i++;
    }
}

void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}
