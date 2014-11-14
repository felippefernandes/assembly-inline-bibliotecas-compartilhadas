int e_logico (int x, int y){

	int resultado = 0;

	asm ("andi %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}

int ou_logico (int x, int y){

	int resultado = 0;

	asm ("ori %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}

int ou_exclusivo (int x, int y){

	int resultado = 0;

	asm ("eori %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}


int nao_logico (int x, int y){

	int resultado = 0;

	asm ("not %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}


