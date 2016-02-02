# little-big
Write one program that acts as two: little.c, that exits with status 0 if is running on a little-endian machine,
and 1 otherwise. If the executable is named big it exits with status 0 if it is running on a big-endian machine,
and 1 otherwise.

% if little ; then echo little; else big; fi
little
% if big ; then echo big; else little; fi
little
