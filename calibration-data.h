/*
 * calibration-data.h
 *
 */ 

/**********************************************************************************

Description:		Constants for calibrating the serial interface

					If the internal rc oscillator deviates too much from its nominal 
					frequency, the serial interface might not work correctly. In this 
					case you need to calibrate your Hacklace.
					
					For calibration choose one of the following methods:
					
					METHOD 1 - calibrate serial interface
					Start your Hacklace so that the display is active. Measure the pulses
					on pin 1 of the ISP connector with an oscilloscope or a frequency 
					counter. (Use ground potential (GND) on pin 6 of the ISP connector 
					as reference potential.) Measure the time from the rising edge of 
					one pulse to the rising edge of the next pulse. Enter the time 
					(in milliseconds) as T_MEASURED in this file.
					
					METHOD 2 - calibrate main oscillator
					You can use procedures described by Atmel to find an appropriate 
					OSCCAL value for calibrating the internal rc oscillator. Enter this 
					value as EXT_OSCCAL. See Atmel application notes for details.

License:			This software is distributed under the creative commons license
					CC-BY-NC-SA.
Disclaimer:			This software is provided by the copyright holder "as is" and any 
					express or implied warranties, including, but not limited to, the 
					implied warranties of merchantability and fitness for a particular 
					purpose are disclaimed. In no event shall the copyright owner or 
					contributors be liable for any direct, indirect, incidental, 
					special, exemplary, or consequential damages (including, but not 
					limited to, procurement of substitute goods or services; loss of 
					use, data, or profits; or business interruption) however caused 
					and on any theory of liability, whether in contract, strict 
					liability, or tort (including negligence or otherwise) arising 
					in any way out of the use of this software, even if advised of 
					the possibility of such damage.
					
**********************************************************************************/


#ifndef CALIBRATION_DATA_H_
#define CALIBRATION_DATA_H_


/*************************
 * calibration constants *
 *************************/

// METHOD 1: calibrate serial interface
// Note: remove comment from following line if you want to use this method.
//#define T_MEASURED			5.00		// measured column cycle time (ms)

// METHOD 2: calibrate main oscillator
// Note: remove comment from following line if you want to use this method.
//#define EXT_OSCCAL			51


#endif /* CALIBRATION_DATA_H_ */