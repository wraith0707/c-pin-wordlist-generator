# 🔑 C PIN Wordlist Generator

A fast and lightweight 4-digit PIN wordlist generator written in C. Built for cybersecurity research, penetration testing simulations, and brute-force testing.

C dilinde geliştirilmiş, siber güvenlik araştırmaları, sızma testi simülasyonları ve kaba kuvvet (brute-force) senaryoları için hızlı ve hafif 4 haneli PIN sözlük (wordlist) üreticisi.

---

## 🇬🇧 English Description

### 🚀 Features
- **Guaranteed 4-Digit Range:** Generates standard PIN numbers strictly between `1000` and `9999`.
- **Custom Quantity:** Dynamically creates the exact number of PINs requested by the user.
- **Randomized Seeds:** Utilizes `srand(time(NULL))` to ensure non-repetitive output across executions.
- **CLI Pipeline Ready:** Compatible with terminal redirection (`>`) to stream output straight into `.txt` files for tools like Burp Suite, Hydra, or Hashcat.

### 🛠️ Compilation & Usage
1. **Compile with GCC:**
   ```bash
   gcc main.c -o pin_gen
   ```
2. **Execute:**
   ```bash
   ./pin_gen
   ```
3. **Save Output Directly to a Wordlist File:**
   ```bash
   ./pin_gen > wordlist.txt
   ```

### 💻 Sample Output
```text
PIN Olusturma Sistemine Hosgeldiniz!
Lutfen Olusturmak Istediginiz PIN Sayisini Giriniz: 
4
PIN Olusturuluyor...
=========================================
1. PIN = 4829
2. PIN = 1042
3. PIN = 9381
4. PIN = 7510
```

---

## 🇹🇷 Türkçe Açıklama

### 🚀 Özellikler
- **Garantili 4 Hane:** Yalnızca `1000` ile `9999` arasında standart PIN kodları üretir.
- **Dinamik Miktar:** Kullanıcının belirttiği sayı kadar PIN'i anında oluşturur.
- **Rastgele Tohumlama:** Program her çalıştığında farklı sayılar üretmek için `srand(time(NULL))` kullanır.
- **Terminal Boru Hattı (Piping) Uyumlu:** Çıktıları doğrudan Burp Suite, Hydra veya Hashcat gibi araçların kullanabileceği `.txt` dosyalarına aktarabilir.

### 🛠️ Derleme ve Kullanım
1. **GCC ile Derleme:**
   ```bash
   gcc main.c -o pin_gen
   ```
2. **Çalıştırma:**
   ```bash
   ./pin_gen
   ```
3. **Çıktıyı Doğrudan Sözlük Dosyasına Kaydetme:**
   ```bash
   ./pin_gen > wordlist.txt
   ```

---

## 📝 License / Lisans
Distributed under the MIT License. See `LICENSE` for more information.

MIT Lisansı kapsamında dağıtılmaktadır.
