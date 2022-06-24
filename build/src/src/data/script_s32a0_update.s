.module script_s32a0_update

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

ACTOR = -4

___bank_script_s32a0_update = 255
.globl ___bank_script_s32a0_update

_script_s32a0_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; If Input
        VM_PUSH_CONST           0
        VM_GET_INT8             .ARG0, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .ARG0
            .R_INT8     16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST .NE         .ARG0, 0, 3$, 2
        VM_JUMP                 4$
3$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           0
        VM_ACTOR_GET_ANGLE      ^/(ACTOR - 3)/, .ARG0
        VM_PROJECTILE_LAUNCH    0, .ARG2
        VM_POP                  3
        ; Wait N Frames
        VM_PUSH_CONST           30
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

4$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
