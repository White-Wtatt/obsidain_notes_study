sites = {'Goole', 'Runoob', 'Taobao', 'Baidu', 'QQ', 'Facebook'}
print(sites)

if 'Runoob' in sites:
    print('Runoob 在集合中') 
else:    print('Runoob 不在集合中')

a = set('abracadabra')
b = set('alacazam')

print(a)  # 输出：{'a', 'b', 'c', 'd', 'r'}
print(a - b)  # 输出：{'r', 'd', 'b'} 差集
print(a | b)  # 输出：{'a', 'b', 'c', 'd', 'r', 'l', 'z', 'm'} 并集
print(a & b)  # 输出：{'a', 'c'} 交集
print(a ^ b)  # 输出：{'b', 'd', 'r', 'l', 'z', 'm'} 不同时存在于a和b中的元素集合（对称差集）