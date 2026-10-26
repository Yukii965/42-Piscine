#!/bin/sh
ifconfig 2>/dev/null | awk '/ether / {print $2} /HWaddr/ {print $NF}'
