#!/bin/bash

# Use xinput and awk to find the ELECOM TrackBall Mouse HUGE TrackBall under Virtual core pointer
ELECOM_TRACKBALL_ID=$(xinput | awk '
    /Virtual core pointer/ { inPointerSection = 1 } 
    /Virtual core keyboard/ { inPointerSection = 0 } 
    inPointerSection && /ELECOM TrackBall Mouse HUGE TrackBall/ { 
        match($0, /id=[0-9]+/); 
        id = substr($0, RSTART+3, RLENGTH-3); 
        print id; 
        exit;
    }
')

# Check if we got an ID
if [ -n "$ELECOM_TRACKBALL_ID" ]; then
  xinput get-button-map "$ELECOM_TRACKBALL_ID" 
  xinput set-prop "pointer:ELECOM TrackBall Mouse HUGE TrackBall" 'libinput Button Scrolling Button' 9 
  xinput set-prop "pointer:ELECOM TrackBall Mouse HUGE TrackBall" 'libinput Scroll Method Enabled' 0 0 1
  xinput set-button-map "$ELECOM_TRACKBALL_ID" 1 2 3 4 5 6 7 8 2 8 9 12 
    # You can use $ELECOM_TRACKBALL_ID in other methods here
else
    echo "ELECOM TrackBall Mouse not found."
fi


