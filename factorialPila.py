import time

def factorialPila(num):

    # condicion de salida
    if(num == 0):

        return 1

    else:        

        # llamada recursiva
        return num * factorialPila(num - 1)

# inicio del contador de tiempo
begin = time.time()

num = 20

# condicion del numero de entrada
if(num < 0):

    print("No exite factorial para un numero negativo")

elif(num == 0):

    print("El factorial de 0 es 1")

else:

    print("El factorial de", num, "es", factorialPila(num))

# finalizacion del contador de tiempo
end = time.time()

timeSpent = end - begin

print("El tiempo total de ejecucion fue de", timeSpent, " segundos")
