#!/bin/bash

tmux new-session -d -n "api/app/admin" -s "work_session" # create new session , detached
tmux send-keys -t 1 "r-start-api" Enter # this actually launches `glances` in my first window

tmux split-window -h -p 60 # split it into two halves
tmux send-keys -t 2 "r-admin" Enter # change to specific subdir for these two panes
tmux split-window -h -p 60 # split it into two halves
tmux send-keys -t 3 "r-app" Enter # change to specific subdir for these two panes
tmux select-pane -t 1 # go back to the first pane

# etc..you can keep adding more new windows as needed..

sleep 1 # not sure why I had this...
tmux select-window -t "work_session" # go back to the first window
tmux attach-session -d
