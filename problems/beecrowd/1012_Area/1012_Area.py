values = list(map(float, input().split()))
A = values[0]
B = values[1]
C = values[2]
print("TRIANGULO: %.3f" % (A * C * 0.5))
print("CIRCULO: %.3f" % (3.14159 * C * C))
print("TRAPEZIO: %.3f" % (((A + B) / 2) * C))
print("QUADRADO: %.3f" % (B * B))
print("RETANGULO: %.3f" % (A * B))
