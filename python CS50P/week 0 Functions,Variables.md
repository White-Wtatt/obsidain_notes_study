
print 输出变量:

```python
name = input("What is your name? ")

print(f"Hello, {name}!")
```

```python
print("Hello, " + name + "!")
```

```python
print("Hello,",name) # 可以加多个变量，逗号和空格效果相同
```

```python
print("Hello,")
print(name)

output:
Hello,
yang

print("Hello, ",end = " ")
print(name)

output:
Hello,yang
```

`print()` 里的 `sep` 用来指定**多个输出项之间的分隔符**。

```python
print("Hello,",name,sep = " ")
```

