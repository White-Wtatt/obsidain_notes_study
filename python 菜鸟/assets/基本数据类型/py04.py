def reverseWords(input):
     # 通过空格将字符串分隔符，把各个单词分隔为列表
    words = input.split()
    reversed_words = words[::-1]
    return ' '.join(reversed_words)

input_string = "Hello World"
reversed_string = reverseWords(input_string)
print(reversed_string)  # Output: "World Hello"