.module script_s32_init

.include "vm.i"
.include "data/game_globals.i"

.globl _plat_walk_vel, b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

ACTOR = -4

___bank_script_s32_init = 255
.globl ___bank_script_s32_init

_script_s32_init::
        VM_LOCK

        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_vel, 5000

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Actor Set Movement Speed
        VM_ACTOR_SET_MOVE_SPEED ACTOR, 8

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Actor Set Animation Tick
        VM_ACTOR_SET_ANIM_TICK  ACTOR, 7

        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 3, 1$, 0
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 2, 3$, 0
        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 1, 5$, 0
        VM_JUMP                 6$
5$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(ACTOR + 1)/, 2
        VM_ACTOR_SET_ANIM_FRAME ACTOR

6$:

        VM_JUMP                 4$
3$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME ACTOR

4$:

        VM_JUMP                 2$
1$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_ACTOR_SET_ANIM_FRAME ACTOR

2$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
