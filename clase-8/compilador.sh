g++ usuario.cpp -c
g++ main.cpp -c
g++ -o ejecutable usuario.o main.o
rm *.o
./ejecutable