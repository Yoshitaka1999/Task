import math

def dsin(num):
    return math.sin(math.radians(num))

def dcos(num):
    return math.cos(math.radians(num))

def dtan(num):
    return math.tan(math.radians(num))

print("sin15°: {}".format(dsin(15)))
print("cos15°: {}".format(dcos(15)))
print("tan15°: {}".format(dtan(15)))
