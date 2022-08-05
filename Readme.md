# OLED display and local server with nodeMCU ESP8266

```
Servicios iniciados

Red:            aKAP
IP:             192.168.0.8

Servidor iniciado
```

[![K-081.jpg](https://i.postimg.cc/bYWsQMb4/K-081.jpg)](https://postimg.cc/140mSvvK)

Mostrar texto en un display OLED de 128x64 pixeles con una conexión local con el nodeMCU ESP8266 usando el protocolo I2C y etiquetas forms de HTML con las librerías: 

- Adafruit_SSD1306
- Adafruit_GFX
- ESP8266WiFi
- ESP8266WebServer

## Archivo de Arduino
Se definen las librerías personalizadas y de Arduino para el display y el servidor.

### Password
Funciones donde se almacena la contraseña y SSID de la red WiFi.

### Web
Funciones que contienen la pagina en HTML para el servidor.

### PP
Funciones que contienen el código para el display y el servidor.
