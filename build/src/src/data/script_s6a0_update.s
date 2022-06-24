.module script_s6a0_update

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, ___bank_scene_15, _scene_15, ___bank_scene_0, _scene_0

.area _CODE_255

ACTOR = -4

___bank_script_s6a0_update = 255
.globl ___bank_script_s6a0_update

_script_s6a0_update::
        ; Local Actor
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0
        VM_PUSH_CONST           0

2$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 1

        ; If Actor At Position
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    512
            .R_OPERATOR .EQ
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    1024
            .R_OPERATOR .EQ
            .R_OPERATOR .AND
            .R_STOP
        VM_IF_CONST .EQ         .ARG0, 0, 3$, 1
        ; If Input
        VM_PUSH_CONST           0
        VM_GET_INT8             .ARG0, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .ARG0
            .R_INT8     16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST .NE         .ARG0, 0, 5$, 2
        ; If Input
        VM_PUSH_CONST           0
        VM_GET_INT8             .ARG0, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .ARG0
            .R_INT8     8
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST .NE         .ARG0, 0, 7$, 2
        VM_JUMP                 8$
7$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 1

        ; Actor Set Position
        VM_SET_CONST            ^/(ACTOR + 1)/, 768
        VM_SET_CONST            ^/(ACTOR + 2)/, 1280
        VM_ACTOR_SET_POS        ACTOR

        ; Wait N Frames
        VM_PUSH_CONST           12
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

8$:

        VM_JUMP                 6$
5$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_VIDAS_JUGADOR, 3

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

6$:

        VM_JUMP                 4$
3$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 1

        ; If Actor At Position
        VM_ACTOR_GET_POS        ACTOR
        VM_RPN
            .R_REF      ^/(ACTOR + 1)/
            .R_INT16    768
            .R_OPERATOR .EQ
            .R_REF      ^/(ACTOR + 2)/
            .R_INT16    1280
            .R_OPERATOR .EQ
            .R_OPERATOR .AND
            .R_STOP
        VM_IF_CONST .EQ         .ARG0, 0, 9$, 1
        ; If Input
        VM_PUSH_CONST           0
        VM_GET_INT8             .ARG0, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .ARG0
            .R_INT8     16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST .NE         .ARG0, 0, 11$, 2
        ; If Input
        VM_PUSH_CONST           0
        VM_GET_INT8             .ARG0, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .ARG0
            .R_INT8     4
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST .NE         .ARG0, 0, 13$, 2
        VM_JUMP                 14$
13$:
        ; Actor Set Active
        VM_SET_CONST            ACTOR, 1

        ; Actor Set Position
        VM_SET_CONST            ^/(ACTOR + 1)/, 512
        VM_SET_CONST            ^/(ACTOR + 2)/, 1024
        VM_ACTOR_SET_POS        ACTOR

        ; Wait N Frames
        VM_PUSH_CONST           12
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

14$:

        VM_JUMP                 12$
11$:
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 15
        VM_FADE_OUT             1
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 0
        VM_SET_CONST            ^/(ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_0

12$:

        VM_JUMP                 10$
9$:
10$:

4$:

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 2$
        ; Stop Script
        VM_STOP
