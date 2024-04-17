#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string archivo = "output.txt";
    ofstream Archivo;
		
		Archivo.open(archivo.c_str(), fstream::out);
		
        cout <<"Hello world!";

		Archivo << "Hello world!"<< endl;
		
		Archivo.close();
    return 0;
}
