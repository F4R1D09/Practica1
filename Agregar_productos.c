void agregar_producto(){
	Mostrar_productos();
	int id, cantidad;
	printf("Que id de producto deseas comprar\n");
	scanf("%d", &id);
	if (id < 1 || id > 5){
		printf("El id de producto no es correcto\n");
		} else{
			printf("Cuantos desea pedir? \n");
			scanf("%d", &cantidad);
		if (cantidad < 1 || cantidad > numeros [1][id-1] ){
			printf("El producto que usted desea esta agotado o no existe \n");	
		} else{
			numeros [2][id-1] += cantidad;
			numeros [1][id-1] -= cantidad;
		}
	}
}