def factorialPila(num):
    if(num == 1):
        return num
    else:        
        return num * factorialPila(num - 1)

num = int(input("Digite un numero: "))

if(num < 0):
    print("No exite factorial para un numero negativo")
elif(num == 0):
    print("El factorial de 0 es 1")
else:
    print("El factorial de", num, "es", factorialPila(num))
