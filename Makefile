all: atm

atm: main.o autenticacao.o consulta_saldo.o saque.o deposito.o historico.o
	gcc -o atm main.o autenticacao.o consulta_saldo.o saque.o deposito.o historico.o

main.o: main.c autenticacao.h consulta_saldo.h saque.h deposito.h historico.h contas.h
	gcc -c main.c

autenticacao.o: autenticacao.c autenticacao.h contas.h
	gcc -c autenticacao.c

consulta_saldo.o: consulta_saldo.c consulta_saldo.h contas.h
	gcc -c consulta_saldo.c

saque.o: saque.c saque.h contas.h
	gcc -c saque.c

deposito.o: deposito.c deposito.h contas.h
	gcc -c deposito.c

historico.o: historico.c historico.h contas.h
	gcc -c historico.c

clean:
	rm -f *.o atm
