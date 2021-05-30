/*Tugas Kelompok Stack List
Nama-anggota:
1. Aura Husnaini P.Z	(2017051045)
2. Dita Faradila	(2017051002)
3. Yulia Dwi Putri	(2017051016)
Link Github: .....
*/
#include <bits/stdc++.h>
#define MAX_STACK_SIZE 100

using namespace std;
class Lingkaran{
public:
    double radius;
    Lingkaran *next;

    Lingkaran(){
        this->radius=1;
    }
    Lingkaran(double radius){
        this->radius = radius;
    }
    Lingkaran(Lingkaran &lingkaran) {
        this->radius = lingkaran.radius;
    }
    double getLuas(){
        return M_PI * radius * radius;
    }
    double getKeliling(){
        return 2 * M_PI * radius;
    }
};

class ListStack{
public:
    Lingkaran *top;
    ListStack(){
        top=NULL;
    }
    bool isEmpty(){
        return top == NULL;
    }
    bool isFull(){
        if(isEmpty() == 1)
        {
        	return 0;
		}
		else
		{
			Lingkaran *bantu;
			int n;
			bantu = top;
			while (bantu != '\0')
			{
				n++;
				bantu = bantu->next;
			}
			return n > MAX_STACK_SIZE - 1;
		}
    }
    
    void push(Lingkaran *item){
	    item->next = NULL;
	    if(isFull())
	    {
	    	cout<<"Stack Penuh"<<endl;
	    }
	    else
	    {
	    	item->next = top;
	    	top = item;
	    }
    }
    
    void push(double radius){
	    Lingkaran *baru;
	    baru = new Lingkaran(radius);
	    baru->radius = radius;
	    baru->next = NULL;
	    if(isFull())
	    {
	    	cout<<"Stack Penuh"<<endl;
	    }
	    else
	    {
	    	baru->next = top;
	    	top = baru;
	    }
    }
    
    Lingkaran *pop(){
        if (isEmpty()) {
            cout<<"Stack Kosong"<<endl;
            return NULL;
        } else{
        	Lingkaran *hapus;
		    hapus = top;
		    top = top->next;
		    return hapus;
		    delete hapus;
		    top--;
        }
    }
};


