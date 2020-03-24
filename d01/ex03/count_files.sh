#!/bin/sh
find . -type d -o -type f | awk 'END { print NR }'
