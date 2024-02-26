#!/bin/bash

function_key="$1"  # The function key (F1, F2, etc.)
text_to_copy=""

# Set the text to copy based on the function key
case "$function_key" in
    "focusing")
        text_to_copy="Focus Music"
        notify-send "Playing" "$text_to_copy"
        spt play --name "Focusing 🎧" --playlist
        exit 1
        ;;
    "japanese")
        text_to_copy="Japanese City Pop"
        notify-send "Playing" "$text_to_copy"
        spt play --name "Japanese City Pop" --playlist
        exit 1
        ;;
    "rap")
        text_to_copy="Rap Music"
        notify-send "Playing" "$text_to_copy"
        spt play --name "Grind/Work" --playlist
        exit 1
        ;;
    "OPM")
        text_to_copy="OPM Music"
        notify-send "Playing" "$text_to_copy"
        spt play --name "OPM" --playlist
        exit 1
        ;;
    "indie")
        text_to_copy="Indie Mix"
        notify-send "Playing" "$text_to_copy"
        spt play --name "Indie Mix" --playlist
        exit 1
        ;;
    "whitenoise")
        text_to_copy="White noise"
        notify-send "Playing" "$text_to_copy"
        spt play --name "White Noise" --playlist
        exit 1
        ;;
    # Add cases for other function keys as needed
    *)
        notify-send "Error" "Function key not recognized"
        exit 1
        ;;
esac

