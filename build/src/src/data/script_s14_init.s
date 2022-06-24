.module script_s14_init

.include "vm.i"
.include "data/game_globals.i"

.globl _plat_walk_vel, _plat_max_fall_vel, _plat_walk_acc, _plat_run_acc, _plat_min_vel, _plat_grav, b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

ACTOR = -4

___bank_script_s14_init = 255
.globl ___bank_script_s14_init

_script_s14_init::
        VM_LOCK

        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; Actor Hide
        VM_SET_CONST            ACTOR, 3
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        ; Actor Hide
        VM_SET_CONST            ACTOR, 4
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        ; Variable Set To False
        VM_SET_CONST            VAR_S14A14_LOCAL_2, 0

        ; Variable Set To False
        VM_SET_CONST            VAR_S14A14_LOCAL_2_1, 0

        ; Variable Set To False
        VM_SET_CONST            VAR_S14A14_LOCAL_2_2, 0

        ; Variable Set To False
        VM_SET_CONST            VAR_DISPAROS, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_vel, 5000

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_max_fall_vel, 21030

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_acc, 152

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_run_acc, 228

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_min_vel, 304

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_grav, 1792

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
