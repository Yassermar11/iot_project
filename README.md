# ESP32 DHT22 MQTT Publisher

This project reads temperature and humidity data from a DHT22 sensor using an ESP32, and publishes the data to a public MQTT broker over Wi-Fi.

## 📡 Features

- Reads temperature and humidity using DHT22
- Connects to Wi-Fi (Wokwi-GUEST by default)
- Publishes sensor data to the MQTT broker `test.mosquitto.org` on topic `wokwi/dht22`
- Reconnects automatically to Wi-Fi and MQTT if connection is lost
- Designed to run on Wokwi simulator or a real ESP32 board

## 🧰 Requirements

- **ESP32 board**
- **DHT22 sensor** connected to GPIO 15
- Arduino IDE or PlatformIO
- Libraries:
  - `WiFi.h`
  - `PubSubClient.h`
  - `DHT.h`

## 🔌 Wiring

| DHT22 Pin | ESP32 Pin |
|-----------|-----------|
| VCC       | 3.3V      |
| GND       | GND       |
| DATA      | GPIO 15   |

## 🔄 MQTT Topic and Payload

- **Topic:** `wokwi/dht22`
- **Payload format (JSON):**
  ```json
  {
    "temperature": 25.4,
    "humidity": 60.1
  }
🌐 Default Wi-Fi Configuration
```
const char* ssid = "Wokwi-GUEST";
const char* password = "";
```
You can change this in the code to match your own Wi-Fi credentials if you're using a real MAteriel.
