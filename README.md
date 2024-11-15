# Rozwiązania do zadań z lab na polibudzie rzeszowskiej

Moje propozycje rozwiązań jakby ktoś szukał i nie wiedział

## Dla windows z visual studio code
Instalowanie kompilatora
1.Pobierz instalator z strony https://www.msys2.org/  
2.Zainstaluj z domyślnymi obcjami  
3.W otwartym terminalu po instalacji albo po uruchomieniu exe z katalogu C:/msys2/msys2.exe
```bash
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```
4.Dodaj ścieżkę do PATH "C:\msys64\ucrt64\bin" jak instalowałeś wszystko domyślnie
5.W visual studio code kliknij f5 i z listy u góry na środku wybierz 3 obcję 

###Jak nie działa to pisz do mnie pomogę.

## Dla linux 
Instalacja kompilatora
```bash
sudo apt update
sudo apt install build-essential
```
Kompilowanie
Przechodzisz do folderu z interesującym plikiem zad*.cpp
```bash
gcc ./zad*.cpp -o ./output/zad*
```
Uruchomianie
```bash
./output/zad*
```

## Pobieranie repo

1. Sklonuj repozytorium:
   ```bash
   git clone https://github.com/iczopl1/Rozwi-zania_zada-_z_lab_informatyka-programowanie-.git
   ```