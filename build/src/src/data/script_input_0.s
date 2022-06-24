.module script_input_0

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_3, _scene_3

.area _CODE_255

ACTOR = -4

___bank_script_input_0 = 255
.globl ___bank_script_input_0

_script_input_0::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; Actor Hide
        VM_SET_CONST            ACTOR, 1
        VM_ACTOR_SET_HIDDEN     ACTOR, 1
        VM_ACTOR_DEACTIVATE     ACTOR

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 31, 25, 1, 13, 10, 1, 0, 0, 1
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 5, 11, 2, 3, 5, 1, 31, 31, 31
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 31, 25, 1, 13, 10, 1, 0, 0, 1
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 5, 11, 2, 3, 5, 1, 31, 31, 31
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 31, 25, 1, 13, 10, 1, 0, 0, 1
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 5, 11, 2, 3, 5, 1, 31, 31, 31
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 31, 25, 1, 13, 10, 1, 0, 0, 1
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_LOAD_PALETTE         16, ^/(.PALETTE_BKG | .PALETTE_COMMIT)/
        .CGB_PAL                31, 31, 31, 5, 11, 2, 3, 5, 1, 31, 31, 31
        ; Wait N Frames
        VM_PUSH_CONST           6
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_3

        ; Stop Script
        VM_STOP
