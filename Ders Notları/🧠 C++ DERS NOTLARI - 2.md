### Konular: Listeler (Arrays) · Fonksiyonlar

---

![array funny](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExb3FvZG8wcW1lZnpqeWVtZ3phaGFkN2g5MzJsMmJiandudnF3NmpudyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/W8tizn4VT7bAqSJxkY/giphy.gif)

> “Diziler olmadan kod, karman çorman bir dolap gibidir 🧩.”

---

## 🧩 1. LİSTELER (ARRAYS)

C++’ta **array (dizi)**, aynı veri tipine sahip değerleri **tek bir isim altında toplamanıza** olanak sağlar.  

---

### 1.1 Tek Boyutlu Dizi

```cpp
#include <iostream>
using namespace std;

int main() {
    int sayilar[5] = {1, 2, 3, 4, 5};
    cout << sayilar[2]; // 3
    return 0;
}
```

- İndeksler **0’dan başlar**.
- Boyut `[]` içinde belirtilir ve sabittir.
- Elemanlara indeks ile erişilir: `dizi[0]`, `dizi[1]`, ...

### 1.2 Çok Boyutlu Dizi (2D Array)

```cpp
#include <iostream>
using namespace std;

int main() {
    int matris[2][3] = {{1,2,3}, {4,5,6}};
    cout << matris[1][2]; // 6
    return 0;
}
```

- `matris[satır][sutun]` şeklinde kullanılır.
- Çok boyutlu diziler **tablo veya matris** gibi veriler için idealdir.

## 🧩 2. FONKSİYONLAR (FUNCTIONS)

Fonksiyonlar, programı **daha düzenli ve tekrar kullanılabilir** hale getiren kod bloklarıdır.

### 2.1 Parametre Alan ve Değer Döndüren Fonksiyon

```cpp
#include <iostream>
using namespace std;

int topla(int a, int b) {
     return a + b;
}

int main() {
     int sonuc = topla(3, 5);
     cout << sonuc; // 8     return 0; 
}
```

- Fonksiyonlar **parametre alabilir** ve **değer döndürebilir**.
- `return` ile değer döndürülür.

### 2.2 Değer Döndürmeyen Fonksiyon (void)

```cpp
void merhaba() {
	cout << "Merhaba Dünya!" << endl;
}
int main() {
	merhaba(); // Merhaba Dünya!
	return 0;
}
```

- `void` tipinde fonksiyonlar **değer döndürmez**, sadece işlem yapar.
- Fonksiyonlar, kodun okunabilirliğini ve bakımını kolaylaştırır.
- Tekrarlayan işlemleri fonksiyon içine almak **programı modüler yapar**.


## 📘 3. ÖZET

| Konu              | Önemli Nokta                                                       |
| ----------------- | ------------------------------------------------------------------ |
| Listeler (Arrays) | Tek boyutlu ve çok boyutlu diziler; indekslerle erişim             |
| Fonksiyonlar      | Parametre alabilir, değer döndürebilir veya `void` olabilir        |
| Kod Modülerliği   | Fonksiyonlar kodu daha okunabilir ve tekrar kullanılabilir yapar   |
| İndeksler         | Diziler 0’dan başlar, 2D diziler satır-sütun formatında kullanılır |

> 🧩 _Fonksiyonlar ve diziler, kod yazarken hayat kurtarıcıdır. Biraz karışık gözükse de pratikle her şey kolaylaşır!_

📅 **Hazırlayan:** [oemerfaruk](https://github.com/oemerfaruk)