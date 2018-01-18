## Nefry BTでMQTTを使おう

## MQTTとは

[MQTT の基本知識](https://www.ibm.com/developerworks/jp/iot/library/iot-mqtt-why-good-for-iot/)から引用

モノのインターネット (IoT) デバイスでは、インターネットに接続することが要件となります。IoT デバイスはインターネットに接続することで、他のデバイスやバックエンド・サービスと通信するからです。インターネットの基礎となっているネットワーク・プロトコルは TCP/IP であり、IoT 通信では TCP/IP スタックをベースに作成された MQTT (Message Queue Telemetry Transport) が標準的な通信プロトコルとなっています。

MQTT は、1990 年代後半に IBM が考案して開発したプロトコルです。当初は油田パイプラインに取り付けられたセンサーを衛星とリンクするために使用されていました。その名前が示唆するように、MQTT は 2 者間の非同期通信をサポートするプロトコルです。非同期メッセージング・プロトコルは、メッセージの送信側と受信側を空間という点でも、時間という点でも切り離すため、信頼できないネットワーク環境内でスケーラブルな性質を発揮します。一方、その名前に反して、MQTT はメッセージング・キューとはまったく関係がなく、パブリッシュ/サブスクライブ・モデルに従っています。2014 の後半になって MQTT は正式に OASIS オープン・スタンダードになりました。現在は、よく使われているプログラミング言語で、さまざまなオープンソース実装を使用して MQTT がサポートされるようになっています。

## MQTTの特徴

* 省電力
* 

## MQTTの登場人物たち

* Broker - 通信のサーバー
* Publisher - 情報の送信側
* Subscriber - 情報の受信側

WebSocketではサーバーとクライアントだけで双方向通信をしますが、MQTTではサーバーはBrocker、クライアント側が送信者のPublisherと受信者のSubscriberに分かれます。

![](https://dotstud.io/img/blog/141/1.png)

## 1. Publisherを実装してみよう

Publisher(パブリッシャー) = データの送信側です。

[こちらのコード](https://github.com/n0bisuke/20180119_tokushima/blob/master/step5_tips/5.3_mqtt/5.3.1_publisher/5.3.1_publisher.ino)をNefryに書き込んで実行してみましょう。

![](https://i.gyazo.com/9e3a1d1a700b1284ce39957e4238be18.png)

このような形でシリアルモニタが表示されればOKです。

前のスクリーンで自分のデータが送られているか確認してみましょう。

### チャレンジ

* TOPICを"tokushima20180119"に変更
* 送信しているメッセージの"hello world"の部分を別のメッセージに変更してみよう。

前のスクリーンで自分のデータが送られているか確認してみましょう。

### 消費電力

0.14A程度でした。

![](https://i.gyazo.com/33b1601aedc85a196e3f656aa112841d.jpg)

## 2. Subscriberを実装してみよう

[こちらのコード](https://github.com/n0bisuke/20180119_tokushima/blob/master/step5_tips/5.3_mqtt/5.3.2_subscriber/5.3.2_subscriber.ino)をNefryに書き込んで実行してみましょう。

![](https://i.gyazo.com/7d02cd7509e64017ddd3f1a3c0e69aaf.gif)