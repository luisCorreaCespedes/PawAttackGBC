.module script_s10a1_update

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

ACTOR = -4

___bank_script_s10a1_update = 255
.globl ___bank_script_s10a1_update

_script_s10a1_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 3, 3$, 0
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 2, 5$, 0
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 1, 7$, 0
        VM_JUMP                 8$
7$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(ACTOR + 1)/, 2
        VM_ACTOR_SET_ANIM_FRAME ACTOR

8$:

        VM_JUMP                 6$
5$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME ACTOR

6$:

        VM_JUMP                 4$
3$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_ACTOR_SET_ANIM_FRAME ACTOR

4$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
