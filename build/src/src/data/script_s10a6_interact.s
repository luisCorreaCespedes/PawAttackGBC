.module script_s10a6_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_s10a6_interact = 255
.globl ___bank_script_s10a6_interact

_script_s10a6_interact::
        ; If Parameter 0 Equals 2
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 2, 1$, 1
        VM_JUMP                 2$
1$:
        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
