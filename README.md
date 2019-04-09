# PS3 Eye camera OpenCV demo

A quick minimal demo program that showcases the use of [https://github.com/inspirit/PS3EYEDriver](https://github.com/inspirit/PS3EYEDriver)
to get frames from a PS3 Eye camera into an OpenCV Mat.

Should work on macOS, Linux and Windows. Tested on macOS Mojave

**Note** Parts of the code in this repository has been developed by
[https://github.com/inspirit/PS3EYEDriver](https://github.com/inspirit/PS3EYEDriver).


## Getting started

1. Clone this repository
2. Make sure you have libusb > 1.0 installed
3. Make sure you have OpenCV > 3 installed
4. In project directory `cmake .`
5. `make`
6. `./ps3eye`


## Adjusting frame rate

Change the `FPS` definition and the resolution definition in the `main.cpp` file.
THe following settings seem to work fine:


|   Resolution  | Frame Rate    | Notes |
| ------------- | ------------- | ----- |
| 640x480       | 83 Hz         | _Partially corrupted frames._ |
| 640x480       | 75 Hz         |       |
| 640x480       | 60 Hz         |       |
| 640x480       | 50 Hz         |       |
| 640x480       | 40 Hz         |       |
| 640x480       | 30 Hz         |       |
| 640x480       | 25 Hz         |       |
| 640x480       | 20 Hz         |       |
| 640x480       | 15 Hz         |       |
| 640x480       | 10 Hz         |       |
| 640x480       |  8 Hz         |       |
| 640x480       |  5 Hz         |       |
| 640x480       |  3 Hz         |       |
| 640x480       |  2 Hz         |       |
| 320x240       | 290 Hz        | _Partially corrupted frames._ |
| 320x240       | 205 Hz        | _Partially corrupted frames._ |
| 320x240       | 187 Hz        |       |
| 320x240       | 150 Hz        |       |
| 320x240       | 137 Hz        |       |
| 320x240       | 125 Hz        |       |
| 320x240       | 100 Hz        |       |
| 320x240       | 75 Hz         |       |
| 320x240       | 60 Hz         |       |
| 320x240       | 50 Hz         |       |
| 320x240       | 40 Hz         |       |
| 320x240       | 37 Hz         |       |
| 320x240       | 30 Hz         |       |
| 320x240       | 17 Hz         |       |
| 320x240       | 15 Hz         |       |
| 320x240       | 12 Hz         |       |
| 320x240       | 10 Hz         |       |
| 320x240       |  7 Hz         |       |
| 320x240       |  5 Hz         |       |
| 320x240       |  3 Hz         |       |
| 320x240       |  2 Hz         |       |
