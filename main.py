import ctypes
from pathlib import Path

#get path of dll relative to current directory
lib_path = Path(__file__).parent / "clibrary.so"

print(__file__)

#generate c-lib file with 'gcc -fPIC -shared -o clibrary.so clibrary.c'
clibrary = ctypes.CDLL(str(lib_path))

#binary string b because of c argument
clibrary.display(b"John", 18)


print(clibrary.add(4, 5))
print(clibrary.add(5, 6))