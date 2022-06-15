# 孙悟空穿衣服
shirts = ['蓝T恤', '红T恤', '白T恤']
shorts = ['黑短裤', '黄短裤']
for suit in ('%s %s' % (shirt, short) for shirt in shirts
             for short in shorts):  # 嵌套生成式
    print(suit)
