#!/bin/bash

xinput get-button-map "28" 
xinput set-prop "pointer:ELECOM TrackBall Mouse HUGE TrackBall" 'libinput Button Scrolling Button' 9 
xinput set-prop "pointer:ELECOM TrackBall Mouse HUGE TrackBall" 'libinput Scroll Method Enabled' 0 0 1
xinput set-button-map "28" 1 2 3 4 5 6 7 8 2 8 9 12 
