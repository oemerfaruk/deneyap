### Konular: Syntax · Değişkenler · Koşullar · Döngüler  

---

![funny cpp](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExdGpnano4M2tqbXc5bWJkcWoxanF3M3o5dHl5ZTl2Z3ZwMGs0YXJzNSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/13HgwGsXF0aiGY/giphy.gif)


> “C++ öğrenmek kahve içmek gibidir; önce acıdır ama sonra alışkanlık yapar ☕.”

---

## 🧩 1. SYNTAX (SÖZDİZİMİ)

C++, **derleyici temelli** bir programlama dilidir.  
Bir C++ programının iskeleti genellikle şu şekildedir:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```
### Açıklama:

- `#include <iostream>` → Giriş/çıkış işlemleri için gerekli kütüphane
    
- `using namespace std;` → `std::cout` yazma zorunluluğunu kaldırır
    
- `main()` → Programın başlangıç noktası
    
- `cout` → Ekrana çıktı verir
    
- `endl` → Satır sonu (yeni satır) karakteri



## 🔢 2. DEĞİŞKENLER ve VERİ TİPLERİ
Bir değişken, bilgisayarın belleğinde **değer saklamak** için kullanılan bir isimdir.
```cpp
int yas = 18;
double pi = 3.14;
char harf = 'A';
bool aktif = true;
```

### Temel Veri Tipleri:

| Tip               | Açıklama          | Örnek        |
| ----------------- | ----------------- | ------------ |
| `int`             | Tam sayılar       | 42           |
| `float`, `double` | Ondalıklı sayılar | 3.14         |
| `char`            | Tek karakter      | 'A'          |
| `bool`            | Doğru / Yanlış    | true / false |

### 🎯 İpucu:

- Değişken isimleri **rakamla başlayamaz**.
    
- C++ büyük/küçük harfe duyarlıdır (`age` ≠ `Age`).
    
- Sabitler için `const` anahtar kelimesi kullanılır:

```cpp
const int MAX = 100;
```

## 🔄 3. TİP DÖNÜŞÜMLERİ (TYPE CASTING)
C++ bazen veri tipleri arasında otomatik dönüşüm yapar (örneğin `int` → `double`).  

Ancak bazen manuel dönüşüm gerekebilir:
```cpp
int x = 5;
double y = (double)x / 2; // 2.5
```

Daraltıcı (narrowing) dönüşümler veri kaybına neden olabilir:
```cpp
double a = 3.99;
int b = (int)a; // b = 3
```

## ⚙️ 4. KOŞULLU DURUMLAR (if-else, switch-case)

### 🧭 if – else
```cpp
int x = 10;

if (x > 15)
    cout << "Büyük";
else if (x == 10)
    cout << "Eşit";
else
    cout << "Küçük";
```

Çıktı:
```
Eşit
```

### 🎚 switch – case

```cpp
int gun = 3;

switch (gun) {
    case 1: cout << "Pazartesi"; break;
    case 2: cout << "Salı"; break;
    case 3: cout << "Çarşamba"; break;
    default: cout << "Hafta Sonu";
}
```

Çıktı:
```
Çarşamba
```

🧠 _`default` zorunlu değildir ama önerilir._

## 🔁 5. DÖNGÜLER (LOOPS)
Döngüler, belirli bir koşul sağlandığı sürece kodun tekrarlanmasını sağlar.

### for döngüsü
```cpp
for (int i = 0; i < 5; i++)
    cout << i << " ";
```

Çıktı:
```
0 1 2 3 4
```

### continue & break
```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue; // 3’ü atla
    if (i == 5) break;    // döngüyü bitir
    cout << i << " ";
}
```

Çıktı:
```
1 2 4
```

### while döngüsü
```cpp
int i = 1;
while (i <= 3) {
    cout << i << " ";
    i++;
}
```

Çıktı:
```
1 2 3
```

### 🔁 do-while Döngüsü

`do-while` döngüsü, **koşul en sonda kontrol edildiği** için **en az bir kez çalışması garanti edilen** döngüdür.  
Yani koşul ilk başta yanlış olsa bile döngü gövdesi **bir kez mutlaka** çalışır.

**Genel yapısı:**

```cpp
do {
     // Tekrarlanacak işlemler 
} while (koşul);
```


**Örnek:**

```cpp
#include <iostream>
using namespace std;  
int main() {
     int sayi = 0;
     do {
         cout << "Sayi: " << sayi << endl;
         sayi++;     
    } while (sayi < 3);
    return 0;
}
```


📤 **Çıktı:**

`Sayi: 0 Sayi: 1 Sayi: 2`

🧠 **Not:**  
`while` döngüsünde koşul **baştan kontrol edilir**, `do-while` döngüsünde ise **sondan kontrol edilir.**  
Bu yüzden kullanıcıdan “en az bir kez giriş alınması” gereken durumlarda `do-while` idealdir.

## 📘 6. ÖZET

|Konu|Önemli Nokta|
|---|---|
|Syntax|Her program `main()` ile başlar|
|Değişkenler|Türüne göre tanımlanır (`int`, `double`, `char`...)|
|Sabitler|`const` ile tanımlanır|
|Tip dönüşümü|`(int)`, `(double)` şeklinde yapılabilir|
|if-else|Mantıksal karar yapıları|
|switch-case|Sabit değerlere göre dallanma|
|Döngüler|`while`, `for` ve `do-while` yapıları|

---

> 🧩 _Kod yazmak puzzle çözmek gibidir; bazen yanlış parçayı koyarsın ama sonunda resim tamamlanır._

📅 **Hazırlayan:** [oemerfaruk](https://github.com/oemerfaruk)