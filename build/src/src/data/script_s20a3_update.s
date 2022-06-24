.module script_s20a3_update

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

ACTOR = -4

___bank_script_s20a3_update = 255
.globl ___bank_script_s20a3_update

_script_s20a3_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_DISPAROS_BOSS_1, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Wait N Frames
        VM_PUSH_CONST           60
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    -80
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    -32
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           0
        VM_ACTOR_GET_ANGLE      ^/(ACTOR - 3)/, .ARG0
        VM_PROJECTILE_LAUNCH    1, .ARG2
        VM_POP                  3
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 5

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 1024
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

        ; Wait N Frames
        VM_PUSH_CONST           48
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    -80
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    -32
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           0
        VM_ACTOR_GET_ANGLE      ^/(ACTOR - 3)/, .ARG0
        VM_PROJECTILE_LAUNCH    1, .ARG2
        VM_POP                  3
        ; Wait N Frames
        VM_PUSH_CONST           60
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 5

        ; Launch Projectile In Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    16
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           128
        VM_PROJECTILE_LAUNCH    2, .ARG2
        VM_POP                  3
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 5

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 512
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

        ; Wait N Frames
        VM_PUSH_CONST           48
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 4

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    -80
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    -32
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           0
        VM_ACTOR_GET_ANGLE      ^/(ACTOR - 3)/, .ARG0
        VM_PROJECTILE_LAUNCH    1, .ARG2
        VM_POP                  3
        ; Wait N Frames
        VM_PUSH_CONST           48
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 5

        ; Launch Projectile In Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    16
            .R_OPERATOR .ADD
            .R_STOP
        VM_PUSH_CONST           128
        VM_PROJECTILE_LAUNCH    2, .ARG2
        VM_POP                  3
4$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
