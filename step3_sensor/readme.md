
## Groveセンサー

* Seeed社が開発した規格
* 初心者でも配線知識なくセンサーを使うことができる

![](https://i.gyazo.com/4fedfbb4ae2abef4dc9d7f546ee5c0ad.png)

## Groveセンサーの使い方

Nefry BTでのGroveセンサーの使い方は簡単で、Grove用のポートに接続するだけです。

センサーによって通信方式が違うので、Seeed社のWikiを確認して仕様を確認しましょう。

* アナログ
* デジタル
* I2C
* SPI
* UART

のどれかとなっています。今回利用するセンサーは以下の二つですが、どちらもアナログの値が取れます。

* [Grove Light Sensor](http://wiki.seeed.cc/Grove-Light_Sensor/)
* [Grove Sound Snesor](http://wiki.seeed.cc/Grove-Sound_Sensor/)

写真のように、Nefry BTの左下のA0表示の部分に差し込みましょう。

![](https://i.gyazo.com/2d0d0015df703b109a2cd54f683dc573.jpg)

## Nefry BTにコードを書き込む

[Light Sensorのコード](https://github.com/n0bisuke/20180119_tokushima/blob/master/step3_sensor/3.1_light_sensor/3.1_light_sensor.ino)を書き込んでみましょう。

Arduino IDEのファイル -> 新規ファイルから新規のファイルを作成し、コードを貼り付けて書き込みをしてみましょう。

センサーをA0に刺していて、プログラム的にA1となってますが シルク印刷のミスとなっています。（すみません）

## 値の確認 / シリアルモニタ

ツール -> シリアルモニタを選択しましょう。

![](https://i.gyazo.com/92f5d6b5ad2de451ccece0b1a6a777f1.png)

値が確認できます。

## Nefry BTの再起動

再起動の仕方を紹介します。

左下のResetボタンを押すとNefry BTが再起動します。

調子が悪い時は再起動しましょう。

USBの抜き差しでも再起動できますが、シリアルモニタが切断されてしまうのでResetボタンを利用した方が開発しやすいです。