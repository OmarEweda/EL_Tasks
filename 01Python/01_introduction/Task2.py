#Area of a Circle
def CArea(rad):
    area = 2 * float(rad) * 3.14
    return area


radius = input("Enter radius to get area: ")
area = CArea(radius)
print(area)