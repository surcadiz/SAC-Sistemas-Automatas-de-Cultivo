sac
===

Arduino Irrigation and Climate Control System

This code is for the following open source hardware device, known as SAC:
	http://sacultivo.com/productos/s-a-c/electronica/unidad-de-control/

If you are unfamilar with Git, this is a terminal command to download the code:
	git clone https://github.com/Artesanos/sac.git

As shipped the project builds a simulator of the SAC for running inside a
terminal emulator. The terminal handling library nchanterm is included with
the source - thus no further dependencies are neccesary.


To build for the real arduino device, you need the usual arduino dev tools:
libraries and integrated development environment. If you are unfamiliar,
here are some ways to download it:

on debian commandline

	apt-get install arduino

on windows, surf to http://arduino.cc/en/Main/Software


Run the arduino ide

Configure the ide and project

Choose Board: Arduino Leonardo

Copy&paste the code from sac.c into the arduino ide window text editor.
Click save.
Choose any name you wish. We suggest the name "sac" without quotes. Note that's not "sac.c" but just "sac" without any file suffix. It might automatically be given the suffix ".ino" which is expected, not a problem.
Click on the button to make a new tab in the arduino ide, and for the name of the new file, choose "sac.h" without quotes.
Copy&paste the code from sac.h into this new tab, and save it.

To build for arduino, find this line in sac.c:

	#define ARDUINO_MODE 0

and change to this:

	#define ARDUINO_MODE 1

Sac depends on the following arduino libraries:

TimerThree, EEPROM, SerialLCD and Software Serial.

EEPROM and Software Serial are distributed together with the usual Arduino IDE.
TimerThree and SerialLCD are included in this project for convenience, but you must copy them to the arduino library dir.

Then you are ready to build the project

Click "Verify" which is basically what you call "Compile" or "Build" in most other environments.

If there are weird errors, take a look at the temporary file arduino IDE generated under:

	C:\Users\owner\AppData\Local\Temp\

Under a folder called build1555865782840320506.tmp or like, you can find all the files generated by arduino IDE while compiling.

You can find more about these files on this blog post: http://smileymicros.com/blog/2011/02/10/where-is-the-arduino-hex-file/

