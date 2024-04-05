import unittest
from geometry import *

class TestGeometryFunctions(unittest.TestCase):

    def test_circle_area(self):
        self.assertAlmostEqual(circle_area(5), 78.54, places=2)

    def test_circle_perimeter(self):
        self.assertAlmostEqual(circle_perimeter(5), 31.42, places=2)

    def test_rectangle_area(self):
        self.assertEqual(rectangle_area(4, 6), 24)

    def test_rectangle_perimeter(self):
        self.assertEqual(rectangle_perimeter(4, 6), 20)

    def test_triangle_area(self):
        self.assertEqual(triangle_area(3, 4), 6)

    def test_triangle_perimeter(self):
        self.assertEqual(triangle_perimeter(3, 4, 5), 12)

    def test_trapezoid_area(self):
        self.assertEqual(trapezoid_area(4, 6, 5), 25)

    def test_trapezoid_perimeter(self):
        self.assertEqual(trapezoid_perimeter(2, 3, 4, 5), 14)

    def test_rhombus_area(self):
        self.assertEqual(rhombus_area(6, 8), 24)

    def test_rhombus_perimeter(self):
        self.assertEqual(rhombus_perimeter(5), 20)

if __name__ == '__main__':
    unittest.main()
