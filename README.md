# C-Course-Exercise-7

/*****exercise7.1*****/

:pushpin:Bir karmaşık sayı gerçek ve sanal kısımlardan oluşmaktadır. Karmaşık sayıyı aşağıdaki gibi bir yapı ile ifade edebiliriz:

struct COMPLEX {
	double real;
	double imag;
};

Bu yapıdan hareketle aşağıdaki işlemleri yapan fonksiyonları yazınız:

- Bir karmaşık sayıyı ekrana (stdout dosyasına) yazdıran fonksiyon:

void disp_complex(struct COMPLEX *pz);

- Bir karmaşık sayıyı klavyeden okuyarak struct COMPLEX türünden bir yapı nesnesinin içerisine yerleştiren fonksiyon:

void get_complex(struct COMPLEX *pd);

- İki karmaşık sayıyı toplayan bir fonksiyon:

void add_complex(struct COMPLEX *pz1, struct COMPLEX *pz2, struct COMPLEX *pz3);

Burada ilk iki parametresiyle alınan karmaşık sayılar toplanıp sonuç üçüncü parametresiyle belirtilen nesneye yerleştirilecektir. 

- İki karmaşık sayıyı çıkartan ve çarpan fonksiyonlar:

void sub_complex(struct COMPLEX *pz1, struct COMPLEX *pz2, struct COMPLEX *pz3);
void mul_complex(struct COMPLEX *pz1, struct COMPLEX *pz2, struct COMPLEX *pz3);

/*****exercise7.2*****/

:pushpin:Ekranda bir noktayı ve dikdörtgensel bir alanı betimlemek için aşağıdaki gibi bir POINT ve RECT yapıları olsun:

struct POINT {
	int x;
	int y;
};

struct RECTE {
	int x1;
	int y1;
	int x2;
	int y2;
};

Ekran koordinat sisteminde (0, 0) noktası ekranın sol-üst köşesidir. x değerleri sağa doğru y değerleri aşağıya doğru artmaktadır. 

RECT yapısı ekranda bir dikdörtgensel alanın sol üst köşesini (x1, y) ve sağ alt köşesni (x2, y2) tutmaktadır. Aşağıdaki fonksiyonları yazınız:

- Bir noktanın bir dikdörtgenin içerisinde olup olmadığını anlamaya yarayan isinside isimli fonksiyon:

#include <stdbool.h>


bool isinside(struct RECT *rect, struct POINT *pt);

Bu fonksiyon eğer nokta dikdörtgenin içerisindeyse true değeri ile değilse false değeri ile geri dönmelidir. 
bool türü <stdbool.h> içerisnde _Bool olarak typdef edilmiştir.  Bu tür anımsanacağı gibi C99 ile C'ye eklenmiştir. <stdbool.h> içerisinde iki sembolik sabit de aşağıdaki gibi define edilmiştir:

#define false		0
#define true			1

- İki dikdörtgenin kesişiminde elde edilen dikdörtgeni hesaplayan intersect_rect fonksiyonu:

bool intersect_rect(struct RECT *rect1, struct RECT *rect2, struct RECT *rect3);

Fonksiyon ilk iki parametreyle aldığı dikdörtgenin kesişimini üçüncü parametreyle belirtilen nesnesye yerleştirir. Fonksiyonun geri dönüş değeri kesim boş küme ise false, değilse true biçiminde olmalıdır. 

