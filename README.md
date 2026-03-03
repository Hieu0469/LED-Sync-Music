## LED-Sync-Music

# How it works
1. The microphone collects samples from music playing
2. The STM32 MCU analyze the frequecy and intensity of the sound
3. Based on that data, the MCU decides which colors and which pattern to play
4. The data for colors and patterns are stored in arrays and converted to PWM signals
5. The LEDs receive the PWM signal and display the magnificent light show!
