#!/bin/sh
ifconfig -a link | grep ether | sed 's/ether//g' | sed 's/[[:space:]]//g'
