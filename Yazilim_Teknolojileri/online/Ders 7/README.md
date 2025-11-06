# CAESAR Şifreleme Dokümantasyonu
Bu **README** dosyası *markdown* ile doküman oluşturmayı öğrenmek üzere oluşturuldu.

> İstikbal Göklerdedir. Mustafa Kemal Atatürk.

## Dosya Yapısı
- caesar_chiper.cpp
- metin.txt
- README.md
  
### Çalışma mantığı

caesar_chiper.cpp çalıştırıldığında kullanıcıdan şifrelenecek dosyanın adını ve şifre anahtarını alır. Şifrelenmiş ve deşifre edilmiş dosyaları oluşturur.

### Kod Blokları
```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;
```
```cpp
void writeFile(string text, string fileName){
    ofstream file(fileName);

    file << text;
    file.close();
}
```


## Bazı Markdown Özellikleri
1. birinci madde
2. ikinci madde
3. üçüncü madde

|Dil|Seviye|
|----|----|
|C++|:star::star::star:|
|python|:star::star::star:|
|java|:star::star:|

[GITHUB: oemerfaruk](https://github.com/oemerfaruk)

[Instagram: Kahvekokanfizikci](https://instagram.com/kahvekokanfizikci)

[Instagram: oemerfaruk.dev](https://instagram.com/oemerfaruk.dev)

![GIF Görseli](https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExazM5aTJ0bm1ndzBpZnpucjFpNG12NDZrODU2dWVteGFrdXpsbHM0NSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/3NtY188QaxDdC/giphy.gif)