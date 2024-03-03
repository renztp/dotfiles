#!/bin/bash

# Frontend
tmux new-session -d -n "frontend" -s "frontend" # create new session , detached
tmux send-keys -t 1 "cd ~/Desktop/projects/Devto-clone/frontend" Enter # this actually launches `glances` in my first window
sleep 1
tmux send-keys -t 1 "v" Enter # this actually launches `glances` in my first window

# Backend
tmux new-session -d -n "backend" -s "backend" # create new session , detached
tmux send-keys -t 1 "cd ~/Desktop/projects/Devto-clone/backend" Enter # this actually launches `glances` in my first window
sleep 1
tmux send-keys -t 1 "v" Enter # this actually launches `glances` in my first window

