# 音频 compand 算法编解码的实现
clion 的调试配置跟参考其他目录的 README

`test.raw` 是需要进行压缩的音频，这个文件的 采样率是 8000，采样深度是 8 位，声道是单声道。

可以用以下命令播放 `silence-s8-ac1.pcm`

```
ffplay -ar 8000 -ac 1 -f s8 -showmode 2 -i test.pcm
```

---

压缩命令如下：

```
compand_c test.raw encode 7
```

解压命令如下：

```
compand_e encode decode.raw
```

