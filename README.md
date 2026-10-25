# GUINOO_BCA188_Laboratory9
Set up Wi-Fi Manager on an ESP32

This activity is about using WiFiManager with an ESP32. It allows the ESP32 to connect to a Wi-Fi network without putting the Wi-Fi name and password directly in the code. Instead, we can connect to the ESP32's setup network and enter the Wi-Fi details using a phone.

## Objectives

- To learn how to use WiFiManager with an ESP32.
- To connect the ESP32 to a Wi-Fi network.
- To test what happens when the Wi-Fi password is incorrect.
- To reset the saved Wi-Fi settings using the BOOT button.
- To change the setup network name.
- To connect the ESP32 to a different Wi-Fi network.

## Materials Used

- ESP32-S3 development board
- USB cable
- Computer with Arduino IDE
- WiFiManager library by tzapu
- Smartphone with Wi-Fi access

## Setup and Configuration

1. Open Arduino IDE and select the ESP32-S3 Dev Module board.
2. Install the WiFiManager library by tzapu.
3. Include the `WiFi.h` and `WiFiManager.h` libraries in the code.
4. Set the setup network name to `BCA188-ESP32-2024-2155`.
5. Upload the code to the ESP32.
6. Connect a phone to the setup network created by the ESP32.
7. Open `192.168.4.1` in the phone's browser.
8. Choose a Wi-Fi network and enter its password.
9. Check the Serial Monitor to see if the ESP32 connects successfully.

### BCA188-ESP32-2024-2155
<img width="1080" height="1986" alt="24b0ca8c-6a33-4c01-90c4-c38745655f92" src="https://github.com/user-attachments/assets/f58d3b8b-a0c0-4367-8652-dfd46c15df96" />
<img width="1080" height="1523" alt="2801ffee-307e-4be4-a1a8-b0f37e2b321e" src="https://github.com/user-attachments/assets/905e8668-447e-4550-ab70-5fb982d4e435" />

## Tasks and Results

### Task 1: Test an Incorrect Wi-Fi Password

I entered an incorrect Wi-Fi password to check what would happen. The ESP32 failed to connect to the Wi-Fi network, and the Serial Monitor showed a connection error.

<img width="1535" height="862" alt="75a5fff5-2706-425a-96e6-b53b58df4977" src="https://github.com/user-attachments/assets/719c46c8-674e-4e5c-9f17-df497dd4e34b" />
Result: The ESP32 could not connect because the Wi-Fi password was incorrect.

### Task 2: Reset the Saved Wi-Fi Settings

I added a function that checks if the BOOT button is held for three seconds. When I held the button, the ESP32 erased the saved Wi-Fi settings and restarted.

<img width="1535" height="862" alt="f9d87b84-9c08-4b70-8f73-5a88cbabbdb5" src="https://github.com/user-attachments/assets/3b7beae0-0940-42da-89ce-7bef271263fe" />
Result: The saved Wi-Fi details were erased, and the ESP32 returned to the setup process.

### Task 3: Change the Setup Network Name
<img width="1080" height="1526" alt="741ed1e4-dc92-4aa9-b1db-501fabe1453a" src="https://github.com/user-attachments/assets/3f33e0eb-00cf-42b1-8f10-602ad335c82b" />


I changed the setup network name from `BCA188-ESP32-2024-2155` to `BCA188-ESP32-2024-2155-TEST`. After uploading the updated code, I checked the Wi-Fi list on my phone.

<img width="1535" height="862" alt="d7958c60-d87b-43e6-8e9d-ade40da006cb" src="https://github.com/user-attachments/assets/73764d3e-4d2a-4848-86fb-455a1351a01f" />
Result: The new setup network name appeared on my phone. After testing, I changed the name back to `BCA188-ESP32-2024-2155`.

### Task 4: Connect to a Different Wi-Fi Network

I used my phone's hotspot named `candice` instead of my usual Wi-Fi network. The ESP32 connected successfully and received the IP address `192.168.43.125`.

<img width="1535" height="862" alt="e21ba9f7-b69c-44ea-8aac-c02df9d344f5" src="https://github.com/user-attachments/assets/be15e671-c1fd-49e2-b12b-ad73e91bd912" />
Result: The ESP32 was able to connect to a different Wi-Fi network without changing the Wi-Fi credentials directly in the code.

## Conclusion

In this activity, I learned how to use WiFiManager to connect an ESP32 to a Wi-Fi network. I also learned how to test an incorrect password, reset saved Wi-Fi settings using the BOOT button, change the setup network name, and connect to another network. These tasks helped me understand how WiFiManager works and how it makes connecting an ESP32 to Wi-Fi easier.
