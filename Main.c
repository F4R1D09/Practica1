#include<stdio.h>

char *productos [] = {
	"Mangos", "Platanos", "Mandarinas", "Guayaba", "Limon"
};
float numeros [3][5] = {{22.50, 23.50, 0.60, 10.40, 60.90},
						{15.0, 8.0, 1000.0, 9.0, 20.0},
						{0.0, 0.0, 0.0, 0.0, 0.0}
						};

#include"Mostrar_productos.c"
#include"Agregar_productos.c"
#include"Mostrar_carrito.c"	
#include"Eliminar_productos.c"					
#include"Menu.c"

int main(){
	menu();
}

