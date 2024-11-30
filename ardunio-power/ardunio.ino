#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h>

// Wi-Fi credentials
const char* ssid = "IHDSB.CA";
const char* password = "HDSBsecure";

// NTP server details
const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = -18000; // GMT-5 (adjust based on your timezone)
const int   daylightOffset_sec = 3600; // Daylight saving time offset

// GPIO pin and PWM configuration
const int pwmPin = 9; // GPIO pin for PWM output (use pin 9 for Uno)
int pwmValue = 0;     // PWM duty cycle value (0-255)

// Initialize Wi-Fi and NTPClient objects
WiFiUDP udp;
NTPClient timeClient(udp, ntpServer, gmtOffset_sec, 60000); // Update every minute

// Function to get the current electricity rate based on the time
int getElectricityRate() {
  timeClient.update(); // Get the latest time from NTP server
  int hour = timeClient.getHours();

  // Time-based pricing schedule
  if (hour >= 7 && hour < 11) {
    return 50; // On-Peak: 50% PWM
  } else if (hour >= 11 && hour < 17) {
    return 75; // Mid-Peak: 75% PWM
  } else {
    return 100; // Off-Peak: 100% PWM
  }
}

void setup() {
  Serial.begin(115200);

  // Connecting to Wi-Fi
  Serial.print("Connecting to Wi-Fi");
  WiFi.begin(ssid, password);
  
  // Wait for the Wi-Fi to connect
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected!");

  // Start NTP client
  timeClient.begin();

  // Set PWM pin as output
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  // Get the current electricity rate
  int rate = getElectricityRate();
  pwmValue = map(rate, 0, 100, 0, 255); // Map % power to PWM duty cycle

  // Apply the PWM value to the GPIO pin
  analogWrite(pwmPin, pwmValue); // Using analogWrite() for PWM control

  // Print the current rate and PWM value
  Serial.print("Electricity rate: ");
  Serial.print(rate);
  Serial.print("%, PWM value: ");
  Serial.println(pwmValue);

  // Update every minute
  delay(60000);
}
