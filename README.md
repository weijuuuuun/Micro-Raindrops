# UFCFVK-15-2 IoT Challenges

Set build target before building application. Then copy executable to micro:bit.
```
target bbc-microbit-classic-gcc
yt build
```
Executable .hex file in directory:
```
build/bbc-microbit-classic-gcc/source/
```
## Challenge 1 - Raindrop :droplet:
A very simple game, which uses both buttons and accelerometer to control tray to catch raindrops. Raindrops will fall **_quicker_** as score goes higher!

**GAME OVER** when misses Raindrop. :skull:

### Controls
- Move tray **←**, **Button A** or **Tilt Left**
- Move tray **→**, **Button B** or **Tilt Right**
- Reset Game, **Button Reset** behind **_micro:bit_**

### Installation
Simply build application and copy executable to micro:bit.
```
cp build/bbc-microbit-classic-gcc/source/raindrop-combined.hex /media/[username]/MICROBIT

```
