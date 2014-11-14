int soma (int x, int y){

	int resultado = 0;

	asm ("addl %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}

int subtracao (int x, int y){

	int resultado = 0;

	asm ("subl %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);
	
	return resultado;
}

int multiplicacao (int x, int y){

	int resultado = 0;

	asm ("imul %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}

int divisao (int x, int y){

	int resultado = 0;

	asm ("idiv %%ebx, %%eax\n\t"
	  //"addl %%esp, %%eax\n\t"
	  //"movl	%%ecx, %%esi\n\t"
	  //"divl %%esp\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}

int resto (int x, int y){

	int resultado = 0;

	asm ("idivl %%ebx, %%eax\n\t"
	  : "=a" (resultado)
	  : "a" (x), "b" (y)

	);

	return resultado;
}


