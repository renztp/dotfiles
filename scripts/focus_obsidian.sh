#!/bin/bash

current_workspace=$(i3-msg -t get_workspaces | jq -r '.[] | select(.focused == true) | .name')

if [ -n "$current_workspace" == "4: Utils" ]; then
    i3-msg "workspace 4: Utils"
else
    # If not on the "2: Web" workspace, switch to it and then perform the actions
    i3-msg "workspace 4: Utils"
fi

tabbed_mode=$(i3-msg -t get_tree | jq '.. | select(.name == "obsidian") | .layout')
# sleep 0.5

if [ "$tabbed_mode" == "\"tabbed\"" ]; then
  # If Obsidian is in tabbed mode, focus on it
  sleep 0.5
  i3-msg "[class=\"Obsidian\"] focus"
  notify-send "opened tabbed"
else
  xdotool search --name "Obsidian" windowactivate
  notify-send "opened untab"
fi