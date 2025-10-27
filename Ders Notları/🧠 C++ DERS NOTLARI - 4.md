### Konu: Nesne Yönelimli Programlama - OOP

---

![coffee funny](https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExeXVrdzh3Y3N1MWphb2E1Y3llbG04aHZpMThyd2pudG5zcmJ0dWZhciZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/hPTZgtzfRIB5Nfb5rL/giphy.gif)

> “☕ C++’ta nesneler, kodun kahve çekirdekleridir. İlk yudumda karışık gelir ama her satırda karakter kazanır.”

---

## 🧩 1. NESNE YÖNELİMLİ PROGRAMLAMA (OOP) NEDİR?

Nesne Yönelimli Programlama (OOP), programı **nesneler (objects)** ve **sınıflar (classes)** üzerinden tasarlama yaklaşımıdır.  

Bu yaklaşımda:
- Kod **gerçek dünyadaki varlıkları** temsil eder,  
- Her nesne **veri (özellik)** ve **davranış (fonksiyon)** içerir,  
- Kod **daha düzenli**, **yeniden kullanılabilir** ve **bakımı kolay** hale gelir.  

OOP’nin temel amacı, **karmaşık programları küçük ve anlamlı yapılar** haline getirmektir.  
Bu yapılar, birbirleriyle etkileşime girerek büyük bir sistemi oluşturur.

C++’ta OOP yaklaşımı genellikle şu kavramlar üzerine kuruludur:
- **Class (Sınıf)** → Nesnelerin şablonudur.  
- **Object (Nesne)** → Sınıftan üretilen somut örnektir.  
- **Attribute (Özellik)** → Nesnenin verisidir.  
- **Method (Davranış)** → Nesnenin yaptığı iştir.  

💡 **Kısacası:**  
OOP, programı “ne yapacağını bilen küçük parçalar” haline getirir.  
Her nesne kendi görevinden sorumludur, tıpkı bir ekibin üyeleri gibi 🤝.


---

## 🧩 1. NESNE YÖNELİMLİ PROGRAMLAMA NEDİR?

OOP (Object Oriented Programming), programı **nesneler (objects)** ve **sınıflar (classes)** üzerinden düzenleme yaklaşımıdır.  
Her nesne, **özelliklerini (veri)** ve **yeteneklerini (fonksiyon)** içinde barındırır.  

Bu sayede:
- Kod **daha düzenli** ve **okunabilir** olur,  
- **Tekrar kullanılabilir** yapılar oluşturulur,  
- Gerçek dünyadaki mantık, **doğrudan koda yansıtılır.**

💡 *Bir araba, bir öğrenci ya da bir hesap makinesi de aslında birer nesnedir.*

---

## 🧱 2. SINIF (CLASS) ve NESNE (OBJECT)

Sınıf, bir nesnenin “şablonu”dur.  
Nesne ise bu şablondan oluşturulan somut örnektir.

**Örnek: Basit bir Araba sınıfı**

```cpp
#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    int hiz;

    void bilgileriGoster() {
        cout << "Marka: " << marka << endl;
        cout << "Hiz: " << hiz << " km/s" << endl;
    }

    void hizlan(int miktar) {
        hiz += miktar;
        cout << "Yeni hiz: " << hiz << " km/s" << endl;
    }

    void yavasla(int miktar) {
        hiz -= miktar;
        cout << "Yeni hiz: " << hiz << " km/s" << endl;
    }
};

int main() {
    Araba a1;               // Nesne oluşturuldu
    a1.marka = "BMW";
    a1.hiz = 120;

    a1.bilgileriGoster();
    a1.hizlan(30);
    a1.yavasla(50);

    return 0;
}
```

📤 **Çıktı:**

```
Marka: BMW
Hiz: 120 km/s
Yeni hiz: 150 km/s
Yeni hiz: 100 km/s
```

## 🧠 3. KAPSÜLLEME (ENCAPSULATION)

Kapsülleme, verileri **dış müdahalelere karşı korumak** anlamına gelir.  
Değişkenleri `private` yapıp, erişimi `public` fonksiyonlarla sağlarız.
```cpp
#include <iostream>
using namespace std;

class Ogrenci {
private:
    string isim;
    int yas;
public:
    void setBilgi(string i, int y) {
        isim = i;
        yas = y;
    }
    void goster() {
        cout << isim << " " << yas << " yasinda." << endl;
    }
};

int main() {
    Ogrenci o1;
    o1.setBilgi("Ayse", 16);
    o1.goster();
    return 0;
}
```

📤 **Çıktı:**

```
Ayse 16 yasinda.
```

💬 `private` veriler doğrudan erişilemez, sadece sınıf içindeki fonksiyonlarla kullanılabilir.

## 🚀 4. YAPICI (CONSTRUCTOR) ve YIKICI (DESTRUCTOR)

Bir sınıftan nesne oluşturulduğunda **constructor** otomatik çalışır.  
Program bittiğinde ise **destructor** devreye girer.

```cpp
#include <iostream>
using namespace std;

class Araba {
public:
    string marka;
    int hiz;

    Araba(string m, int h) { // Constructor
        marka = m;
        hiz = h;
        cout << marka << " olusturuldu!" << endl;
    }

    ~Araba() { // Destructor
        cout << marka << " yok edildi!" << endl;
    }

    void bilgileriGoster() {
        cout << marka << " " << hiz << " km/s" << endl;
    }
};

int main() {
    Araba a1("Toyota", 150);
    a1.bilgileriGoster();
    return 0;
}
```

📤 **Çıktı:**

```
Toyota olusturuldu!
Toyota 150 km/s
Toyota yok edildi!
```

## 🌿 5. KALITIM (INHERITANCE)

Bir sınıfın özelliklerini başka bir sınıfa **aktarabilmek** OOP’nin güçlü yanıdır.  
Bu sayede kod tekrarı azalır, yapılar genişleyebilir hale gelir.
```cpp
#include <iostream>
using namespace std;

class Arac {
public:
    string renk;
    void calistir() { cout << "Arac calisti." << endl; }
};

class Araba : public Arac {
public:
    string marka;
    void bilgileriGoster() {
        cout << "Marka: " << marka << ", Renk: " << renk << endl;
    }
};

int main() {
    Araba a1;
    a1.marka = "Honda";
    a1.renk = "Kirmizi";
    a1.calistir();
    a1.bilgileriGoster();
    return 0;
}

```

📤 **Çıktı:**

```
Arac calisti. Marka: Honda, Renk: Kirmizi
```

💬 `Araba` sınıfı, `Arac` sınıfının tüm özelliklerini **miras aldı**.

## 🪄 6. POLİMORFİZM (POLYMORPHISM)

Aynı isimli bir fonksiyonun, farklı sınıflarda **farklı davranmasıdır.**
```cpp
#include <iostream>
using namespace std;

class Hayvan {
	public:     
		virtual void sesCikar() {
			cout << "Bir hayvan ses cikardi." << endl; 
		} 
	};  
class Kedi : 
	public Hayvan { 
	public:     
		void sesCikar() override { 
			cout << "Miyav!" << endl; 
		} 
	};  
class Kopek : 
	public Hayvan { 
	public:     
		void sesCikar() override { 
			cout << "Hav hav!" << endl; 
		} 
	};  
int main() {     
	Hayvan* h1;     
	Kedi k;     
	Kopek ko;      
	h1 = &k;     
	h1->sesCikar();      
	h1 = &ko;     
	h1->sesCikar();      
	return 0; 
}
```

📤 **Çıktı:**

```
Miyav! Hav hav!
```

💡 _Polimorfizm sayesinde aynı fonksiyon adı, farklı sınıflarda farklı şekilde davranabilir._

## 🧩 7. NESNE YÖNELİMLİ YAPININ FAYDALARI

✅ Kod **daha düzenli ve anlaşılır** hale gelir  
✅ **Gerçek dünya mantığı** doğrudan koda aktarılabilir  
✅ **Kod tekrarı azalır**, yeniden kullanılabilirlik artar  
✅ **Bakım ve güncelleme** işlemleri kolaylaşır  
✅ Takım halinde proje geliştirmek **daha verimli** olur  
✅ Hata ayıklama (**debugging**) süreci sadeleşir  
✅ Kodun farklı bölümleri birbirini **bozmadan geliştirilebilir**

---

## 📘 8. ÖZET

|Kavram|Açıklama|
|---|---|
|Class (Sınıf)|Nesnelerin özellik ve davranışlarını tanımlar|
|Object (Nesne)|Sınıftan oluşturulan somut örnektir|
|Encapsulation (Kapsülleme)|Veriyi gizleme ve koruma yaklaşımıdır|
|Constructor / Destructor|Nesne oluşturulduğunda veya yok edildiğinde otomatik çalışan fonksiyonlardır|
|Inheritance (Kalıtım)|Bir sınıfın özelliklerini başka sınıfa aktarma|
|Polymorphism (Çok Biçimlilik)|Aynı fonksiyon adının farklı sınıflarda farklı davranması|
|OOP yapısı|Kodun daha modüler, yeniden kullanılabilir ve sürdürülebilir hale gelmesini sağlar|

---

> _Fonksiyonlar düşüncelerini düzenler,  Sınıflar ise onları kimlikli hale getirir 💭➡️🧱._

---

📅 **Hazırlayan:** [oemerfaruk](https://github.com/oemerfaruk)