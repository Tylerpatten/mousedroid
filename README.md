## Design Documentation

The goal of this project is to make a working mouse droid as see in Star Wars. 

- Drivetrain: FWD system, with steerable front wheels that can deflect up to 60 degrees. The wheels will be synchronously driven by two seperate pwm drivers driven by different pwm signals from an Arduino. 
- Control Modes: Switch on the bottom of droid to allow for autonomus operation with proximity sensors and pathfinding, and for manual operation from a remote control.
- Remote Control: Multiple options TBD; Joystick vs Trigger and Wheel. Controlled via 2.4Ghz transmitter for decent range and signal stability.
- Power: Ideally run on 6vdc provided by 4xAA batteries, each running at 1.5vdc. Controller to run on simple lipo button battery to provide 3.3vdc (or 5vdc if needed).
- Dimensions: Offical documentation outlines simply that the droid is .25M tall, dimensions to be finalized later.
- Extras: Bluetooth enabled speaker to allow for maximum annoyance, and dog terror.

## Parts Needed

- 4x Wheels
- 2x Control for wheels
- 1x 4xAA Battery Enclosure
- 1x Arduino Uno for mainboard
- 1x Arduino Micro for controller
- 2x 2.4Ghz transmitters
- 2x PWM DC motor drivers
- 1x Bluetooth speaker
- 4x IR Proximity sensors

