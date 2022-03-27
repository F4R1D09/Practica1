#include <stdlib.h>
void menu(){
	printf("simon");
	int op=0;
	while(1){
	int i = 0;
    char *opciones[] = {
        "Mostrar Productos\t",
        "Agregar elementos al carrito\t",
        "Eliminar elementos del carrito\t",
        "Mostrar el carrito\t",
        "Finalizar compra\t"};
		
    while (i<5)
    {
        printf("%d) %s\n", i + 1, opciones[i]);
        i++;
    }
	printf("\n");
	printf( "Que opcion deseas elegir?" );
	scanf("%d",&op);
	printf("Otro commit pero esto es de lo que debes");
	printf("Smn");
	switch (op){
			case 1:
				printf("Mostrar productos \n");
				Mostrar_productos();
				break;
			case 2:
				printf("Agregar productos al carrito \n");
				agregar_producto();
				break;
			case 3:
				printf("Eliminar elementos del carrito \n");
				eliminar_producto();
				break; 
			case 4: 
				printf("Mostrar carrito \n");
				mostrar_carrito();
				precio_compra();
				break;
			case 5:
				printf("Su compra se realizo con exito \n");
				exit(0);
				break;
			default:
				printf("Opcion invalida \n");
				break;
		}
		}
}


