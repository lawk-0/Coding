import numpy as np
a=np.array([5,6,9])
print(a.dtype)
print(a.ndim)
print(a.itemsize)

b=np.array([[1,2],[3,4],[5,6]])
print(b.dtype)
print(b.ndim)
print(b.itemsize)

c=np.array([[1,2],[3,4],[5,6]],dtype=np.float64)
print(c.dtype)
print(c.ndim)
print(c.itemsize)
print(c)
print(c.shape) #the length and breadth of the array 

c=np.array([[1,2],[3,4],[5,6]],dtype=complex)
print(c)

print(np.zeros(c.shape))
print(np.zeros((3,4)))
print(np.ones((3,2)))
print(np.arange(1,10,3))
print(np.arange(1,5))
print(np.linspace(1,5,13))#generate 13 numbers between 1 and 5 linealy spaced
print(c.ravel())#make an array 1D but not touch the original array
# a.reshape(1,4) reshapes the array dimensions to 1 and 4 lines
#none of it touches the original array
