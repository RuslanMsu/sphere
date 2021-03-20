#include<cassert>
#include<stdio.h>

//chunk - 8 битовая ячейка

class myset{
public:
	using chunktype = unsigned char; // размер chunk = 1 байт
	const size_t CHUNKSIZE = 8;
	myset(size_t size) {   //Конструктор
		chunks = (size + CHUNKSIZE - 1) / CHUNKSIZE; //количество chunk
		body = new chunktype[chunks];
		setsize = size;
		for (size_t i = 0; i < chunks; i++) {
			body[i] = 0;
		}
		printf("size user: %zu bytes\n", chunks*sizeof(chunktype));


	}
	~myset() {  //Деструктор

	}

	void insert(size_t elem) {
		if(elem < 0 || elem >= setsize) return;
		body[elem/CHUNKSIZE] |= 1<<(elem % CHUNKSIZE);
	}

	void erase(size_t elem) {
		if(elem < 0 || elem >= setsize) return;
		body[elem/CHUNKSIZE] &= ~(1<< (elem % CHUNKSIZE));
	}


	bool in(size_t elem) {
		return (elem < 0 || elem >= setsize) ? false : (body[elem/CHUNKSIZE] >> (elem % CHUNKSIZE)) & 1;
		}
private:
	chunktype *body;
	size_t setsize;
	size_t chunks;

};

int main(){
	myset s1(1000); // create
	for (int i = 0; i < 10; i++) {
		s1.insert(i*i);
	}
	assert(s1.in(64));
	s1.erase(64);
	assert(!s1.in(64));

}
