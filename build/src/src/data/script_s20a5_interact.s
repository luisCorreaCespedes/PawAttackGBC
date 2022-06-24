.module script_s20a5_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _plat_walk_vel, _plat_max_fall_vel, _plat_walk_acc, _plat_run_acc, _plat_min_vel, _plat_grav, b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_15, _scene_15

.area _CODE_255

ACTOR = -4

___bank_script_s20a5_interact = 255
.globl ___bank_script_s20a5_interact

_script_s20a5_interact::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; If Parameter 0 Equals 0
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 0, 1$, 1
        VM_JUMP                 2$
1$:
        ; Actor Hide
        VM_SET_CONST            ACTOR, 6
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        ; Variable Set To True
        VM_SET_CONST            VAR_DISPAROS, 1

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_vel, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_max_fall_vel, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_acc, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_run_acc, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_min_vel, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_grav, 0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Actor Set Animation Tick
        VM_ACTOR_SET_ANIM_TICK  ACTOR, 255

        VM_LOAD_PALETTE         128, ^/(.PALETTE_SPRITE | .PALETTE_COMMIT)/
        .CGB_PAL                29, 31, 14, 29, 31, 14, 29, 21, 3, 0, 0, 1
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Actor Emote
        VM_ACTOR_EMOTE          ACTOR, ___bank_emote_0, _emote_0

        ; Wait N Frames
        VM_PUSH_CONST           60
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Wait N Frames
        VM_PUSH_CONST           60
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 7
        VM_FADE_OUT             1
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_15

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
