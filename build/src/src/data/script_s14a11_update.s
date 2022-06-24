.module script_s14a11_update

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

ACTOR = -4

___bank_script_s14a11_update = 255
.globl ___bank_script_s14a11_update

_script_s14a11_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_S14A14_LOCAL_2_1, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 12

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 13440
        VM_SET_CONST            ^/(ACTOR + 2)/, 1280
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 12

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
        VM_SET_CONST            ACTOR, 12

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 12544
        VM_SET_CONST            ^/(ACTOR + 2)/, 1280
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 12

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 12800
        VM_SET_CONST            ^/(ACTOR + 2)/, 1280
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 12

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    80
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
        VM_SET_CONST            ACTOR, 12

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 13824
        VM_SET_CONST            ^/(ACTOR + 2)/, 1280
        VM_SET_CONST            ^/(ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        ACTOR

4$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
