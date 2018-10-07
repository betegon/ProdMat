#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/betegon/vivado/practica1_clase/solution1/.autopilot/db/a.g.bc ${1+"$@"}
