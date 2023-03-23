# C-Projects

Secondary School Certificate ( MSA ) at the end of Year 10

Wien's displacement law

Formally, Wien's displacement law states that the spectral radiance of black-body radiation per unit wavelength, peaks at the wavelength λpeak given by: 

![image](https://user-images.githubusercontent.com/63067128/169418845-99b63b07-7e61-46e4-902c-d7e46e2470ec.png)

where T is the absolute temperature. b is a constant of proportionality called Wien's displacement constant, equal to 2.897771955...×10−3 m⋅K, or b ≈ 2898 μm⋅K.





![image](https://user-images.githubusercontent.com/63067128/169418868-f3da9962-b1eb-4d21-95ae-447d3abbf58a.png)

Black-body radiation as a function of wavelength for various temperatures. Each temperature curve peaks at a different wavelength and Wien's law describes the shift of that peak.


----
Wiensches Verschiebungsgesetz

by Harun Dastekin 2006

Das Wiensche Verschiebungsgesetz lautet: t*l=b, wobei t die Temperatur in Kelvin, l die strahlungsintensivste Wellenlaenge in m und b die Wien-Konstante mit b = 2,898*10^-3 m/K ist.

----

<!-- # Wiensches Verschiebungsgesetz

## Description

This program calculates temperature (in Kelvin) from the most intense wavelength of radiation (in meters) and vice versa, using Wien's displacement law. The Wien constant b is defined as 2.898*10^-3 m/K.

## How to Use

1. Run the program.
2. Select whether to calculate temperature or wavelength by typing 't' or 'l' and pressing Enter.
3. If you selected 't', enter the most intense wavelength of radiation in nanometers and press Enter. The program will calculate and display the temperature in Kelvin.
4. If you selected 'l', enter the temperature in Kelvin and press Enter. The program will calculate and display the most intense wavelength of radiation in nanometers.
5. Choose whether to continue with another calculation or quit by typing 'y' or 'n' and pressing Enter.
6. To reset and start from the beginning, type 'a' and press Enter.
-->

# Wiensches Verschiebungsgesetz

## Overview

This program implements Wien's displacement law, which describes the relationship between the temperature of a black body and the wavelength of its peak emission. The program prompts the user to enter either the temperature or the wavelength and calculates the corresponding value.

## Usage

To use the program, run the executable and follow the prompts.

1. When prompted, enter either "t" to calculate the temperature or "l" to calculate the wavelength.
2. If you chose to calculate the temperature, enter the wavelength in nanometers.
3. If you chose to calculate the wavelength, enter the temperature in Kelvin.
4. The program will calculate the corresponding value and display it.
5. You will then be prompted to continue or quit. To continue, enter "y". To quit, enter "n".
6. If you choose to continue, you will be prompted to reset the program or quit. To reset the program, enter "a". To quit, enter "n".

## Implementation Details

The program uses the following equation to calculate the temperature or wavelength:

t * l = b

where t is the temperature in Kelvin, l is the wavelength in meters, and b is the Wien constant with a value of 2.898 x 10^-3 m/K.

The program is implemented in C++ and uses the following variables:

* `b`: The Wien constant with a value of 2.898 x 10^-3 m/K.
* `l`: The wavelength in meters.
* `t`: The temperature in Kelvin.
* `ch0`, `ch1`, `ch2`, `ch3`: `unsigned char` variables used to store user input.
* `tl`, `yn1`, `yn2`, `an`: `int` variables used to store converted user input.

The program uses a do-while loop to prompt the user to enter either "t" or "l". If the user enters an invalid value, the program will continue to prompt the user until a valid value is entered.

After the user enters a valid value, the program will prompt the user to enter the temperature or wavelength. The program will calculate the corresponding value and display it.

The program will then prompt the user to continue or quit. If the user chooses to continue, the program will prompt the user to reset the program or quit.

The program uses the `pow` function from the `cmath` library to calculate powers of 10.

