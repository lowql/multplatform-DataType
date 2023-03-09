import sys



int_t  = 100
print(type(int_t),sys.getsizeof(int_t))

bool_t = True
print(type(bool_t),sys.getsizeof(bool_t))

float_t = 0.1
print(type(float_t),sys.getsizeof(float_t))

str_t = ""
print(type(str_t),sys.getsizeof(str_t))

list_t = []
print(type(list_t),sys.getsizeof(list_t))

tuple_t = ()
print(type(tuple_t),sys.getsizeof(tuple_t))

dict_t = {}
print(type(dict_t),sys.getsizeof(dict_t))
