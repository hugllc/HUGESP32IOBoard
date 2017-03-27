HUG Nano IO Board
===================

Introduction
-------------------

This board is made with 8 inputs (analog or digital) as well as 8 digital
outputs capable of driving 15A.

Using the Library
-------------------
To use the library, add

```cpp
#include <HUGNanoIOBoard.h>
```

to the top of your file.

What it Provides
--------------------

This library provides labels for the inputs, outputs and devices on the board.  It is 
IN1-IN8 for the inputs, OUT1-OUT8 for the outputs, plus SW1 and SW2 for the switches,
and SPEAKER for the speaker.  These can be used anywhere you would use port labels, such
as in readAnalog() or writeDigital() calls.

```cpp
#include <HUGNanoIOBoard.h>

void setup(void)
{
    uint16_t test;
    pinMode(OUT1, OUTPUT);
    pinMode(IN1, INPUT);
    
    writeDigital(OUT1, HIGH);
    test = readAnalog(IN1);
}

```

License
----------------------

MIT License

Copyright (c) 2017 Hunt Utilities Group, LLC

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Contact
------------------------
```
Hunt Utilities Group, LLC
2331 Dancing Wind Rd SW
Pine River, MN 56474
(218) 587-5001
http://www.hugllc.com/
```