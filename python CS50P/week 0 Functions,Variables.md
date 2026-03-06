
print 输出变量:

```python
name = input("What is your name? ")

print(f"Hello, {name}!") # 可以用于 str
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



## 浮点数基础

你可以通过以下方式修改你的代码来支持浮点数：

```python
x = float(input("What's x? "))
y = float(input("What's y? "))

print(x + y)
```

---

查看 `round` 的 Python 文档，可用的参数是 `round(number[, ndigits])` 。这些方括号表示程序员可以指定一些可选的内容。可以执行 `round(n)` 来将一个数字四舍五入到其最接近的整数

```python
# Get the user's input
x = float(input("What's x? "))
y = float(input("What's y? "))

# Create a rounded result
z = round(x + y)

# Print the result
print(z)
```

输出将四舍五入为最接近的整数。

---

如果我们想格式化长数字的输出呢？例如，而不是看到 `1000` ，你可能希望看到 `1,000` 。你可以按照以下方式修改你的代码：

```python
# Get the user's input
x = float(input("What's x? "))
y = float(input("What's y? "))

# Create a rounded result
z = round(x + y)

# Print the formatted result
print(f"{z:,}")
```

