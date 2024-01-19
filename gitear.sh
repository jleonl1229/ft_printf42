#!/bin/bash

echo "Introdue un commit: "
read comiteame
git status && git add . && git commit -m "$comiteame" && git push
