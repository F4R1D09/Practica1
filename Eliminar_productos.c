void eliminar_producto(){
	mostrar_carrito();
	int id, cantidad;
	printf("Que id de producto deseas eliminar\n");
	scanf("%d", &id);
	if (id < 1 || id > 5){
		printf("El id de producto no es correcto\n");
		} else{
			printf("Cuantos desea eliminar? \n");
			scanf("%d", &cantidad);
		if (cantidad > numeros [2][id-1] || 0 == numeros [2][id-1] ){
			printf("No tiene articulos de este tipo o intenta eliminar mas de lo que tiene\n");	
		} else{
			numeros [2][id-1] -= cantidad;
			numeros [1][id-1] += cantidad;
		}
	}
}