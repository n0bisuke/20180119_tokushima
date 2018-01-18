'use strict';

const mqtt = require('mqtt');
const client = mqtt.connect({
    host: '0.tcp.ngrok.io',
    port: 14293,
});

client.on('connect', () => console.log('publisher.connected.'));

setInterval(() => {
    const message = Date.now().toString();
    client.publish('n0bisuke', message);
    console.log('publisher.publish:', message);
}, 1000);