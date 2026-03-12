dict = {}
dict["name"] = "Alice"
dict["age"] = 30

tiny_dict = {"name": "Bob", "age": 25}

print(dict)       # {'name': 'Alice', 'age': 30}
print(tiny_dict)  # {'name': 'Bob', 'age': 25}
print(dict["name"])  # Alice
print(tiny_dict.keys())  # dict_keys(['name', 'age']) 输出字典的键
print(tiny_dict.values())  # dict_values(['Bob', 25]) 输出字典的值