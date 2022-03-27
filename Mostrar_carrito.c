void mostrar_carrito(){
	int i;
	printf("\no) Producto\tCantidad\tPrecio\n");
	for (i=0; i<5; i++ ){
		printf("%d) %s\t\t%g\t%0.2f\n", i+1, productos[i], numeros[2][i], numeros[2][i]*numeros[0][i]);
	}
	printf("\n");
}

void precio_compra(){
	float costo = 0;
	for (int i = 0; i < 5; i++){
		costo = costo + numeros[0][i]*numeros[2][i];
	}
	printf("La cantidad total a pagar es: $%g\n\n", costo);
}