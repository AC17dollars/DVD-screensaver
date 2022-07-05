# DVD-screensaver
A C++ graphics test to simulate DVD screensaver.

## Compilation
### Requirements:
SFML 2.5.1

Provided that the libraries are in standard path use the following:
```
g++ -c dvd_ss.cpp
g++ dvd_ss.o -o dvd_app -lsfml-graphics -lsfml-window -lsfml-system
```
If the libraries are in non-standard path use the following:
```
g++ -c dvd_ss.cpp -I<sfml-install-path>/include
g++ dvd_ss.o -o dvd_app -L<sfml-install-path>/lib -lsfml-graphics -lsfml-window -lsfml-system
```
Run with `./dvd_app`
## Preview
![image](https://user-images.githubusercontent.com/82364981/177389849-771f3cfa-a885-44a1-a271-1ce0f4b69978.png)
