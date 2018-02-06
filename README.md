# UFCFVK-15-2 IoT Challenges

## Prerequisites
Set `yotta` target before building application. Then copy executable to micro:bit. [Learn more](https://lancaster-university.github.io/microbit-docs/offline-toolchains "Yotta Offline Build System")

```
target bbc-microbit-classic-gcc
yt build
```
Executable .hex file in directory:
```
build/bbc-microbit-classic-gcc/source/
```


## Challenge 1 - Raindrop :droplet:
A very simple game, which uses both buttons and accelerometer to control tray and catch raindrops. Raindrops will fall **_quicker_** as score goes higher!

**GAME OVER** when misses Raindrop. :skull:


### Installation
At _Raindrop_ directory, simply build application and flash executable to micro:bit.
```
cp build/bbc-microbit-classic-gcc/source/raindrop-combined.hex /media/[username]/MICROBIT

```

### Controls
 Action | Button / Gesture
---|---|
**←** | **A** or **Tilt Left**
**→** |**B** or **Tilt Right**
Reset | **Button Reset** behind micro:bit

### Author
- **WeiJun Chai** - [16031162]
