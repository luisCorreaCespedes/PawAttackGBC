.module script_s16a8_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

ACTOR = -4

___bank_script_s16a8_interact = 255
.globl ___bank_script_s16a8_interact

_script_s16a8_interact::
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
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 9

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
        VM_SET                  VAR_S16A8_LOCAL_0, .ARG1
        VM_SET                  VAR_S16A8_LOCAL_1, .ARG0
        VM_POP                  2

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 9

        ; Actor Set Collisions
        VM_ACTOR_SET_COLL_ENABLED ACTOR, 0

        ; Actor Hide
        VM_SET_CONST            ACTOR, 9
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Actor Set Position To Variables
        VM_RPN
            .R_REF      VAR_S16A8_LOCAL_0
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_REF      VAR_S16A8_LOCAL_1
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_STOP
        VM_SET                  ^/(ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_ACTOR_SET_POS        ACTOR

        ; Actor Show
        VM_SET_CONST            ACTOR, 4
        VM_ACTOR_SET_HIDDEN     ACTOR, 0
        VM_ACTOR_ACTIVATE       ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Actor Set Movement Speed
        VM_ACTOR_SET_MOVE_SPEED ACTOR, 4

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Actor Set Animation Tick
        VM_ACTOR_SET_ANIM_TICK  ACTOR, 15

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Actor Move Relative
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    -384
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  ^/(ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(ACTOR + 3)/, 0
        VM_ACTOR_MOVE_TO        ACTOR

        ; Actor Hide
        VM_SET_CONST            ACTOR, 4
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
