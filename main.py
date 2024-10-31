
import ctypes

#generate c-lib file with 'gcc -fPIC -shared -o clibrary.so clibrary.c'
clibrary = ctypes.CDLL("./clibrary.so")

#binary string b because of c argument
clibrary.display(b"John", 18)


print(clibrary.add(4, 5))