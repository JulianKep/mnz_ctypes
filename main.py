import ctypes
import cv2
from pathlib import Path
import numpy as np

#get path of dll relative to current directory
lib_path = Path(__file__).parent / "clibrary.so"
img_path = Path(__file__).parent / "monstera-blatt.jpg"


#generate c-lib file with 'gcc -fPIC -shared -o clibrary.so clibrary.c'
clibrary = ctypes.CDLL(str(lib_path))

#specify types that are handed to c-function by python
clibrary.k_means.argtypes =(ctypes.POINTER(ctypes.c_int), ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.c_int)
clibrary.k_means.restype = None



""" image = cv2.imread(str(img_path)) """



image = [[[4,5,6], [4,6,6], [4,7,6]],
         [[3,5,6], [3,5,6], [3,5,6]],
         [[2,5,6], [2,5,6], [2,5,6]],
         [[1,5,6], [1,5,6], [1,5,6]]]

image = np.array(image)

rows, cols, value_array_length = image.shape


# Convert the 3D array to a 1D array in row-major order to make it passable to c function
image = image.ravel()

#create array pointer
image_ptr = image.ctypes.data_as(ctypes.POINTER(ctypes.c_int))

#call c function
clibrary.k_means(image_ptr, rows, cols, value_array_length, 5)

""" cv2.imshow("Monsterra", image)
cv2.waitKey(0)
cv2.destroyAllWindows() """

