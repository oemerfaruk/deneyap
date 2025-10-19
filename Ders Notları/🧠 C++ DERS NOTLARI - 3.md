### Konu: Modül Oluşturma (Header & Source Yapısı)

---

![modules funny](https://media.giphy.com/media/26ufdipQqU2lhNA4g/giphy.gif)

> “Kodun modüler olması, gelecekteki hatalardan seni korur 😎.”

---

## 🧩 1. MODÜLER PROGRAMLAMA NEDİR?

Modüler programlama, programı **küçük, anlamlı parçalara (modüllere)** ayırarak geliştirme yaklaşımıdır.  

Bu sayede:
- Kod **daha okunabilir** olur,  
- Hataları bulmak **kolaylaşır**,  
- **Tekrar kullanılabilir** yapılar elde edilir.  

C++’ta modüler yapıyı genellikle **iki dosya türüyle** oluştururuz:
- `.h` → Header (başlık) dosyası  
- `.cpp` → Source (kaynak) dosyası  

---

## 🧱 2. HEADER DOSYASI (.h)

Header dosyaları, fonksiyonların **bildirimlerini (declaration)** içerir.  
Fonksiyonun ne yapacağı değil, sadece **nasıl çağrılacağı** belirtilir.

**Örnek — `matematik.h`**

```cpp
#ifndef MATEMATIK_H
#define MATEMATIK_H

int toplama(int a, int b);
int cikarma(int a, int b);

#endif
```

🧠 **Açıklama:**

- `#ifndef`, `#define`, `#endif` → bu satırlar **“include guard”** olarak bilinir.  
    Aynı dosya birden fazla kez eklendiğinde oluşabilecek hataları önler.

## ⚙️ 3. SOURCE DOSYASI (.cpp)

Kaynak dosyasında fonksiyonların **tanımlamaları (definition)** yapılır.

**Örnek — `matematik.cpp**

```cpp
#include "matematik.h"

int toplama(int a, int b) {
    return a + b;
}

int cikarma(int a, int b) {
    return a - b;
}
```

💡 **Not:**  

**Header** dosyasında sadece fonksiyonun “var olduğunu” söylüyoruz,  
**Source** dosyasında ise **nasıl çalıştığını** anlatıyoruz.

## 🧠 4. ANA PROGRAM (main.cpp)
Şimdi oluşturduğumuz modülü ana programda kullanabiliriz.

**Örnek — `main.cpp`**

```cpp
#include <iostream>
#include "matematik.h"
using namespace std;
int main() {
     cout << "Toplam: " << toplama(3, 5) << endl;
     cout << "Fark: " << cikarma(10, 4) << endl;
     return 0;
     }
```

📤 **Çıktı:**

```bash
Toplam: 8
Fark: 6
```
## 🧩 5. DERLEME (COMPILATION)

Birden fazla dosyayı tek programda çalıştırmak için **hepsini birlikte derlememiz gerekir.**

💻 Komut satırından derleme örneği:

```bash
g++ main.cpp matematik.cpp -o program
```

Ardından çalıştırmak için:

```bash
./program
```

Eğer IDE (Code::Blocks, VS Code, Dev-C++) kullanıyorsan,  
tüm dosyaları aynı proje içine eklemen yeterlidir.

---

## 🧩 6. MODÜLER YAPININ FAYDALARI

✅ Kod okunabilirliği artar  
✅ Büyük projelerde iş bölümü kolaylaşır  
✅ Fonksiyonlar tekrar kullanılabilir hale gelir  
✅ Derleme süresi kısalır  
✅ Hata ayıklama (debugging) daha kolay olur

---

## 📘 7. ÖZET

|Kavram|Açıklama|
|---|---|
|Header (.h)|Fonksiyon bildirimleri bulunur|
|Source (.cpp)|Fonksiyon tanımlamaları yapılır|
|include guard|Dosyanın birden fazla eklenmesini önler|
|g++ main.cpp matematik.cpp -o program|Derleme komutu|
|Modüler yapı|Kodun daha düzenli, yeniden kullanılabilir hâli|

---

> 💬 _Kodunuzu modüllere ayırmak, gelecekteki hataların önüne geçmenin en akıllı yoludur._

---

📅 **Hazırlayan:** [oemerfaruk](https://github.com/oemerfaruk)