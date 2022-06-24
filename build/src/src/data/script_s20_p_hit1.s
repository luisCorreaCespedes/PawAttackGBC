.module script_s20_p_hit1

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _plat_walk_vel, _plat_walk_acc, _plat_run_acc, _plat_min_vel, _pl_vel_y, b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_19, _scene_19, ___bank_scene_37, _scene_37

.area _CODE_255

ACTOR = -4

___bank_script_s20_p_hit1 = 255
.globl ___bank_script_s20_p_hit1

_script_s20_p_hit1::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

        ; If Parameter 0 Equals 2
        VM_PUSH_CONST           0
        VM_GET_TLOCAL           .ARG0, 0
        VM_IF_CONST .EQ         .ARG0, 2, 1$, 1
        VM_JUMP                 2$
1$:
        ; Variable Set To True
        VM_SET_CONST            VAR_DISPAROS, 1

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_vel, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_walk_acc, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_run_acc, 0

        ; Engine Field Set To Value
        VM_SET_CONST_INT16      _plat_min_vel, 0

        ; Actor Set Active
        VM_SET_CONST            ACTOR, 0

        ; Actor Set Spritesheet
        VM_ACTOR_SET_SPRITESHEET ACTOR, ___bank_spritesheet_0, _spritesheet_0

        ; Player Bounce
        VM_SET_CONST_INT16      _pl_vel_y, -24576

        ; Wait N Frames
        VM_PUSH_CONST           18
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_VIDAS_JUGADOR
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_VIDAS_JUGADOR, .ARG0
        VM_POP                  1

        ; If Variable .EQ Value
        VM_IF_CONST .EQ         VAR_VIDAS_JUGADOR, 0, 3$, 0
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 7
        VM_FADE_OUT             1
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_19

        VM_JUMP                 4$
3$:
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 7
        VM_FADE_OUT             1
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_37

4$:

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
