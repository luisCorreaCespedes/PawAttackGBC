.module script_s10a17_update

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

ACTOR = -4

___bank_script_s10a17_update = 255
.globl ___bank_script_s10a17_update

_script_s10a17_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_S10A10_LOCAL_4, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Wait N Frames
        VM_PUSH_CONST           60
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Wait N Frames
        VM_PUSH_CONST           48
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 18

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    96
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    -32
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           0
        VM_ACTOR_GET_ANGLE      ^/(ACTOR - 3)/, .ARG0
        VM_PROJECTILE_LAUNCH    1, .ARG2
        VM_POP                  3
4$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
