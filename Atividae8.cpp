#include <cstring>
#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {

char nome[30];
int i;
printf ("Informe seu nome: ");
scanf ("%s", &nome[i], 30, stdin);

for (i = 0; i < 30; i++)
{
nome[i] = tolower (nome[i]); //minusculo
}
printf ("\nNome minusculo: %s", nome);
for (i = 0; i < 30; i++)
{
nome[i] = toupper (nome[i]); //maiusculo
}
printf ("\nNome maiusculo: %s", nome);
    return 0;
}