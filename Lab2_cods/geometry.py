import math

def circle_area(radius):
    """Функция для вычисления площади круга."""
    return math.pi * radius ** 2

def circle_perimeter(radius):
    """Функция для вычисления периметра круга."""
    return 2 * math.pi * radius

def rectangle_area(width, height):
    """Функция для вычисления площади прямоугольника."""
    return width * height

def rectangle_perimeter(width, height):
    """Функция для вычисления периметра прямоугольника."""
    return 2 * (width + height)

def triangle_area(base, height):
    """Функция для вычисления площади треугольника."""
    return 0.5 * base * height

def triangle_perimeter(side1, side2, side3):
    """Функция для вычисления периметра треугольника."""
    return side1 + side2 + side3

def trapezoid_area(base1, base2, height):
    """Функция для вычисления площади трапеции."""
    return 0.5 * (base1 + base2) * height

def trapezoid_perimeter(side1, side2, side3, side4):
    """Функция для вычисления периметра трапеции."""
    return side1 + side2 + side3 + side4

def rhombus_area(diagonal1, diagonal2):
    """Функция для вычисления площади ромба."""
    return 0.5 * diagonal1 * diagonal2

def rhombus_perimeter(side):
    """Функция для вычисления периметра ромба."""
    return 4 * side

# Пример использования функций
print("Площадь круга с радиусом 5:", circle_area(5))
print("Периметр круга с радиусом 5:", circle_perimeter(5))

print("Площадь прямоугольника с шириной 4 и высотой 6:", rectangle_area(4, 6))
print("Периметр прямоугольника с шириной 4 и высотой 6:", rectangle_perimeter(4, 6))

print("Площадь треугольника с основанием 3 и высотой 4:", triangle_area(3, 4))
print("Периметр треугольника со сторонами 3, 4, и 5:", triangle_perimeter(3, 4, 5))

print("Площадь трапеции с основаниями 4 и 6 и высотой 5:", trapezoid_area(4, 6, 5))
print("Периметр трапеции со сторонами 2, 3, 4, и 5:", trapezoid_perimeter(2, 3, 4, 5))

print("Площадь ромба с диагоналями 6 и 8:", rhombus_area(6, 8))
print("Периметр ромба со стороной 5:", rhombus_perimeter(5))
