#!/bin/bash

if [$# -eq 0]; then
	var = "to_save"
fi
	var = "$1"
git add .
git commit -m var
git push

