#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "test.mosquitto.org";
const int mqtt_port = 1883;
const char* mqtt_topic = "wokwi/dht22";

WiFiClient espClient;
PubSubClient client(espClient);
DHT dht(15, DHT22);

void setup() {
  Serial.begin(115200);
  Serial.println("\nDémarrage du programme...");
  dht.begin();
  WiFi.begin(ssid, password);
  Serial.print("Connexion au WiFi");
  unsigned long startAttemptTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - startAttemptTime < 20000) { 
    delay(500);
    Serial.print(".");}

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWiFi connecté !");
    Serial.print("Adresse IP: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("\nÉchec de connexion WiFi !");}
    client.setServer(mqtt_server, mqtt_port);}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Connexion à MQTT...");
    if (client.connect("ESP32-Wokwi")) {
      Serial.println("Connecté à MQTT !");
    } else {
      Serial.print("Échec, code d'erreur: ");
      Serial.println(client.state());
      Serial.println("Nouvelle tentative dans 5s...");
      delay(5000);}}}

void checkWiFi() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi perdu ! Tentative de reconnexion...");
    WiFi.disconnect();
    WiFi.reconnect();
    delay(5000);}}

void loop() {
  checkWiFi();
  if (!client.connected()) {reconnect();}
  client.loop();

  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (!isnan(temp) && !isnan(hum)) {
    String payload = "{\"temperature\":" + String(temp) + ",\"humidity\":" + String(hum) + "}";
    client.publish(mqtt_topic, payload.c_str());
    Serial.println("Publié: " + payload);
  } else {
    Serial.println("Erreur de lecture du DHT22 !");}

  delay(5000);}
