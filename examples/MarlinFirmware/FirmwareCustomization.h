/*
 *
 *  Customization for a particular printer
 *

    Although you could define all of your customization here,
    the preferred procedure is to assign a unique id to each printer
    and place the customization for that printer in the customization area.
    You can then reference that file either from the command line or by defining the path here.


    If you have multiple printers, it is suggested that you create a file for each of them.
    You can then select one of them from a menu in the Arduino IDE.
    Please see ... for more information

    Even if you have only one, you can utilize that same mechanism to specify the id that you have assigned to that printer
    or, you could define it here *
 */

    
#define I2C_AXIS_ENCODERS

#if 0

  // You can obtain a unique id by visiting https://www.uuidgenerator.net/version4

  #define  SPECIFIC_PRINTER_ID e9cbe275

#endif

/*
 *
 *  Printer specification
 *

    Whether specified here, or in a unique specification file, the following printer description should be followed.

 */

#if 0
  // If you are still using a configuration file from Marlin 1.1, you could simply include it.

  #include "configurations/vendor/Aus3D/Configuration.h"

#endif

// but it is preferable to convert to the inherited customization structure

#if 0

  #define  UUID "e9cbe275-aaee-4383-9352-01c1bac200ac"

  // Place all of your overrides first
  #define BUILD_HEIGHT_ADJUSTMENT ( -23 )

  // Calibration values

  #define A_ENDSTOP_ADJUSTMENT (   0 )
  #define B_ENDSTOP_ADJUSTMENT (  47 )
  #define C_ENDSTOP_ADJUSTMENT ( 174 )


  // Then include a standard kit

  #define VENDOR OpenBeam
  #define MODEL KosselPro

  //  or define the individual parts of the kit

  #define KINEMATICS delta
  #define PROCESSOR  Arduino/mega2560
  #define DRIVER     Ramps/v1_4
  #define DISPLAY    none

  ...

  //  or directly include some particular specification
  #include "configurations/vendor/generic/delta/Customization.h"


#endif

// Sanity check
#ifndef MARLIN
  #error Compilation using cores other than those provided in this distribution are unsupported
#endif