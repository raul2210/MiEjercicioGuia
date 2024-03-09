#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char peticion [100];
	char(respuesta[100]);
	strcpy (peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19");
	char* p;
	char nombre[20];
	int edad;
	p = strtok(peticion,"/");
	while(p != NULL)
	{
		strcpy(nombre,p);
		p = strtok(NULL,"/");
		edad = atoi(p);
		sprintf(respuesta,"%s%s*%d-",respuesta,nombre,edad);
		p = strtok(NULL,"/");
	}
	respuesta[strlen(respuesta)-1]= '\n';
	printf("respuesta:%s",respuesta);
	return 0;
}

