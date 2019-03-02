# Arduino TFT Projects
I am using a TFT screen and Arduino MEGA.
Using Adafruit-GFX and MCUFRIEND_kbv.2.9.8

In MCUFRIEND_kbv-2.9.8/MCUFRIEND_kbv.cpp, uncomment these lines 11 and 12:

```
#define SUPPORT_8347D             //HX8347-D, HX8347-G, HX8347-I, HX8367-A +520 bytes, 0.27s
#define SUPPORT_8347A             //HX8347-A +500 bytes, 0.27s
```

This makes the TFT screen work.





