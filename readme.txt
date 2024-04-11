This is an example C++ library for the PicUNO RP2040 developed by AtrivaTECH in conjunction
with ESC crasci. Developed and coded by Atul Ravi in 2024.

Installation
--------------------------------------------------------------------------------

To install this library, just place this entire folder as a subfolder in your
Arduino/lib/targets/libraries folder.

When installed, this library should look like:

Arduino/lib/targets/libraries/AtrivaTECH_PicUNO              (this library's folder)
Arduino/lib/targets/libraries/AtrivaTECH_PicUNO/AtrivaTECH_PicUNO.cpp     (the library implementation file)
Arduino/lib/targets/libraries/AtrivaTECH_PicUNO/AtrivaTECH_PicUNO.h       (the library description file)
Arduino/lib/targets/libraries/AtrivaTECH_PicUNO/keywords.txt (the syntax coloring file)
Arduino/lib/targets/libraries/AtrivaTECH_PicUNO/examples     (the examples in the "open" menu)
Arduino/lib/targets/libraries/AtrivaTECH_PicUNO/readme.txt   (this file)

Building
--------------------------------------------------------------------------------

After this library is installed, you just have to start the Arduino application.
You may see a few warning messages as it's built.

To use this library in a sketch, go to the Sketch | Import Library menu and
select Test.  This will add a corresponding line to the top of your sketch:
#include <AtrivaTECH_PicUNO.h>

To stop using this library, delete that line from your sketch.

Geeky information:
After a successful build of this library, a new file named "AtrivaTECH_PicUNO.o" will appear
in "Arduino/lib/targets/libraries/AtrivaTECH_PicUNO". This file is the built/compiled library
code.

If you choose to modify the code for this library (i.e. "AtrivaTECH_PicUNO.cpp" or "AtrivaTECH_PicUNO.h"),
then you must first 'unbuild' this library by deleting the "AtriaTECH_PicUNO.o" file. The
new "AtrivaTECH_PicUNO.o" with your code will appear after the next press of "verify"

