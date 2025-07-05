# 🌡️ IoT-Based Environmental Monitoring System with Real-Time Dashboard & Alerts

This project demonstrates a complete IoT solution that collects temperature and humidity data using an ESP32 and DHT22 sensor, sends the data over MQTT, stores it in InfluxDB, visualizes it in Grafana, and sends email alerts when predefined thresholds are exceeded.

🔗 Check out the full project summary and discussion here 👉 [View on LinkedIn](https://www.linkedin.com/posts/yasser-marzouhi-590a23260_iot-based-environmental-monitoring-system-activity-7347302416733642754-rqk1/)

## 🚀 Features

- 📶 ESP32 + DHT22 sensor for temperature and humidity readings  
- 🔗 MQTT protocol (Mosquitto broker) for real-time data transmission  
- 📥 Telegraf agent to forward data from MQTT to InfluxDB  
- 🧠 InfluxDB 2.0 for efficient time-series data storage  
- 📊 Grafana dashboards for live data visualization  
- 📧 SMTP alerts using Gmail when thresholds are exceeded  

## 🎯 Project Goal

To build a complete IoT system that collects temperature and humidity data, processes it in real time, visualizes it through interactive dashboards, and sends automatic email alerts when thresholds are exceeded.

## 🧰 Technologies Used

| Tool         | Purpose                                |
|--------------|----------------------------------------|
| Wokwi        | Virtual simulation for ESP32 & DHT22   |
| ESP32        | IoT microcontroller with built-in Wi-Fi|
| DHT22        | Digital sensor for Temp & Humidity     |
| MQTT         | Lightweight messaging protocol         |
| InfluxDB     | Time-series database                   |
| Telegraf     | Data collector between MQTT & InfluxDB |
| Grafana      | Data visualization and alerts          |
| Gmail SMTP   | Sending email alerts                   |

## 🛠️ Setup Overview

1. **Wokwi Virtual Environment** for simulating ESP32 & DHT22  
2. **MQTT Broker** (public broker used: `broker.hivemq.com`)  
3. **Telegraf** agent configured to parse MQTT JSON data  
4. **InfluxDB** used to store time-series data  
5. **Grafana** connected to InfluxDB for live dashboards  
6. **Email Alerts** via Gmail SMTP for anomalies

   
![image](https://github.com/user-attachments/assets/963dd040-b1f2-4a30-8db2-7153c8980402)

## 📄 Report

This document explains how the system was built, step by step — from data collection to dashboard and alert setup, with clear visuals and configurations.  
📎 [PDF Report](https://www.linkedin.com/posts/yasser-marzouhi-590a23260_iot-based-environmental-monitoring-system-activity-7347302416733642754-rqk1/)

## 🧠 Future Improvements

- Deploy to cloud (e.g., AWS, GCP, Azure)
- Add more sensor types (CO2, light, motion)
- Use encrypted MQTT (port 8883 + TLS)
- Mobile notifications via Telegram or Firebase

## 📲 Follow Me

<a href="https://linkedin.com/in/yasser-marzouhi-590a23260"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/960px-LinkedIn_logo_initials.png" width="30" height="30" alt="LinkedIn"></a>
<a href="https://github.com/Yassermar11"><img src="https://upload.wikimedia.org/wikipedia/commons/9/91/Octicons-mark-github.svg" width="30" height="30" alt="GitHub"></a>
<a href="https://www.instagram.com/its_yasser_33/"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/95/Instagram_logo_2022.svg/1200px-Instagram_logo_2022.svg.png" width="30" height="30" alt="Instagram"></a>

### 📌 Made by Yasser Marzouhi
