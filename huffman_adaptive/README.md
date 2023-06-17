# 可适应的哈夫曼编解码的实现
`huff_adaptive_c` 是压缩程序，`huff_adaptive_e` 是解压缩程序。

调试 `huff_adaptive_c` 程序的 clion 配置如下：

```
./huffman_adaptive/huff_adaptive.c ./huffman_adaptive/encode.txt
```

![1-1](README/1-1.png)

上图是把 `huff.c` 的内容进行 哈夫曼 压缩，生成 `encode.txt`。

---

调试 `huff_adaptive_e`  程序的 clion 配置如下：

```
./huffman_adaptive/encode.txt ./huffman_adaptive/decode.txt
```

![1-2](README/1-2.png)

上图是把 `encode.txt`的内容进行 哈夫曼 解缩，生成 `decode.txt`。

会发现  `decode.txt` 跟 `main.h` 的内容是一样的。

