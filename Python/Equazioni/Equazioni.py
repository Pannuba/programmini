import math

print "Inserisci i valori a, b, c dell'equazione ax^2 + bx + c = 0"
a = float(raw_input("a = "))
b = float(raw_input("b = "))
c = float(raw_input("c = "))
delta = b*b - 4 * a*c

if delta < 0:
    print "eyy lmao"

else:
    xuno = (- b - math.sqrt(delta)) / (2 * a)
    xdue = (- b + math.sqrt(delta)) / (2 * a)
    print "xuno = %s \nxdue = %s" % (xuno, xdue)
raw_input("\nPremi Invio per uscire: ")