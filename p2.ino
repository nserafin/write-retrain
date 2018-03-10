/*
 * Copyright 2018, Nathan Serafin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
constexpr int LED1_PIN = 2;
constexpr int LED2_PIN = 3;
constexpr int LED3_PIN = 4;
constexpr int LED4_PIN = 5;
constexpr int LED5_PIN = 6;

constexpr int SENSOR_PIN = A0;

constexpr int THRESH1 = 650;
constexpr int THRESH2 = 670;
constexpr int THRESH3 = 690;
constexpr int THRESH4 = 710;
constexpr int THRESH5 = 730;

void setup()
{
    pinMode(LED1_PIN, OUTPUT);
    pinMode(LED2_PIN, OUTPUT);
    pinMode(LED3_PIN, OUTPUT);
    pinMode(LED4_PIN, OUTPUT);
    pinMode(LED5_PIN, OUTPUT);

    pinMode(SENSOR_PIN, INPUT);
}

void loop()
{
    int sensor_val = analogRead(SENSOR_PIN);

    int led1 = LOW;
    int led2 = LOW;
    int led3 = LOW;
    int led4 = LOW;
    int led5 = LOW;

    Serial.println(sensor_val);

    if (sensor_val >= THRESH1) {
        led1 = HIGH;
    }
    if (sensor_val >= THRESH2) {
        led2 = HIGH;
    }
    if (sensor_val >= THRESH3) {
        led3 = HIGH;
    }
    if (sensor_val >= THRESH4) {
        led4 = HIGH;
    }
    if (sensor_val >= THRESH5) {
        led5 = HIGH;
    }

    digitalWrite(LED1_PIN, led1);
    digitalWrite(LED2_PIN, led2);
    digitalWrite(LED3_PIN, led3);
    digitalWrite(LED4_PIN, led4);
    digitalWrite(LED5_PIN, led5);
}
