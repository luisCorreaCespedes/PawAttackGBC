.module script_s18_p_hit1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

ACTOR = -4

___bank_script_s18_p_hit1 = 255
.globl ___bank_script_s18_p_hit1

_script_s18_p_hit1::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; If Parameter 0 Equals 2
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 2, 1$, 1
        VM_JUMP                 2$
1$:
        ; Actor Hide
        VM_SET_CONST            ACTOR, 0
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Store Position In Variables
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_STOP
        VM_SET                  VAR_POS__HOR, .ARG1
        VM_SET                  VAR_POS__VER, .ARG0
        VM_POP                  2

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Variable Set To Value
        VM_SET_CONST            VAR_TEMP_1, 17

        ; Actor Set Position To Variables
        VM_RPN
            .R_REF      VAR_POS__HOR
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_REF      VAR_TEMP_1
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_STOP
        VM_SET                  ^/(ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_ACTOR_SET_POS        ACTOR

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
