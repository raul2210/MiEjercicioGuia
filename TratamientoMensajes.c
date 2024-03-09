#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char peticion [100];
	strcpy (peticion, "3/MiguelELGupo76/17/1.78");
	
	int codigo;
	char nombre[100];
	int edad;
	float altura;
	
	char *p =strtok(peticion, "/");
	codigo =atoi(p);
	p = strtok(NULL,"/");
	strcpy(nombre, p);
	p = strtok(NULL,"/");
	edad = atoi(p);
	p = strtok(NULL,"/");
	altura = atof(p);
	
	printf("codigo:%d, nombre: %s, edad : %d, altura %f\n",codigo,nombre,edad,altura);
	
	char(respuesta[100]);
	if (edad>18)
	sprintf(respuesta,"Eres mayor de edad\n");
	else
		sprintf(respuesta, "todavia eres demasiasdo joven :c solo tines %d\n", edad);
	printf("%s",respuesta);
	return 0;
}

