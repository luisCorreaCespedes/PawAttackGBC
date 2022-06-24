.module script_s12a17_update

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

ACTOR = -4

___bank_script_s12a17_update = 255
.globl ___bank_script_s12a17_update

_script_s12a17_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 18

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 26240
        VM_SET_CONST            ^/(ACTOR + 2)/, 1408
        VM_SET_CONST            ^/(ACTOR + 3)/, 0
        VM_ACTOR_MOVE_TO        ACTOR

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 18

        ; Actor Move To
        VM_SET_CONST            ^/(ACTOR + 1)/, 26240
        VM_SET_CONST            ^/(ACTOR + 2)/, 768
        VM_SET_CONST            ^/(ACTOR + 3)/, 0
        VM_ACTOR_MOVE_TO        ACTOR

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
