# LED-Sync-Music
<img width="1080" height="703" alt="image" src="https://github.com/user-attachments/assets/da24deb8-7e35-4ad3-8df3-bd1e1a3596c1" />

## How it works
1. The microphone collects samples from music playing
2. The STM32 MCU analyze the frequecy and intensity of the sound
3. Based on that data, the MCU decides which colors and which pattern to play
4. The data for colors and patterns are stored in arrays and converted to PWM signals
5. The WS2812B LEDs receive the PWM signal and display the magnificent light show!

For more videos: https://drive.google.com/drive/folders/19R12WrHFEDq-pBJKhr277760kc8Yym1f?usp=sharing
