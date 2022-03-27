void Mostrar_productos(){
	int i;
	printf("\no) Producto\tPrecio\tCantidad\n");
	for (i=0; i<5; i++ ){
		printf("%d) %s\t%0.2f\t%.0f\n", i+1, productos[i], numeros[0][i], numeros[1][i]);
	}
	printf("\n");
}
