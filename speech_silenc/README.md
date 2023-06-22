# 静音数据 编解码的实现
clion 的调试配置跟参考其他目录的 README

`silence-s8-ac1.pcm` 是需要进行压缩的音频，这个文件的 采样率是 44100，采样深度是 8 位，声道是单声道。

可以用以下命令播放 `silence-s8-ac1.pcm`

```
ffplay -ar 44100 -ac 1 -f s8 -showmode 2 -i silence-s8-ac1.pcm
```

前面 8 秒基本都是没有声音的，后面有我唱的几句歌。

---

压缩命令如下：

```
silence_c silence-s8-ac1.pcm encode
```

解压命令如下：

```
silence_e encode decode.pcm
```

---

现在我们可以用 `ffplay` 播放解压后的音频，可以看到，是可以清晰听到我的歌声的。压缩率达到 80%

```
ffplay -ar 44100 -ac 1 -f s8 -showmode 2 -i decode.pcm
```

