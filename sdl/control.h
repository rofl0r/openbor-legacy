/*
 * OpenBOR - http://www.LavaLit.com
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef	CONTROL_H
#define	CONTROL_H

// Generic control stuff (keyboard+joystick).
#include <SDL_keysym.h>
#include "joysticks.h"

#ifdef DINGOO
	#define	CONTROL_ESC                 DINGOO_BUTTON_SELECT
	#define	CONTROL_DEFAULT1_START		DINGOO_BUTTON_START
	#define	CONTROL_DEFAULT1_UP         DINGOO_BUTTON_UP
	#define	CONTROL_DEFAULT1_DOWN		DINGOO_BUTTON_DOWN
	#define	CONTROL_DEFAULT1_LEFT		DINGOO_BUTTON_LEFT
	#define	CONTROL_DEFAULT1_RIGHT		DINGOO_BUTTON_RIGHT
	#define	CONTROL_DEFAULT1_FIRE1		DINGOO_BUTTON_A
	#define	CONTROL_DEFAULT1_FIRE2		DINGOO_BUTTON_Y
	#define	CONTROL_DEFAULT1_FIRE3		DINGOO_BUTTON_R
	#define	CONTROL_DEFAULT1_FIRE4		DINGOO_BUTTON_L
	#define	CONTROL_DEFAULT1_FIRE5		DINGOO_BUTTON_B
	#define	CONTROL_DEFAULT1_FIRE6		DINGOO_BUTTON_X
	#define	CONTROL_DEFAULT1_SCREENSHOT	SDLK_F12
#elif GP2X
	#define	CONTROL_ESC                 (JOY_LIST_FIRST + 15)
	#define	CONTROL_DEFAULT1_UP         (JOY_LIST_FIRST + 1)
	#define	CONTROL_DEFAULT1_RIGHT		(JOY_LIST_FIRST + 2)
	#define	CONTROL_DEFAULT1_DOWN		(JOY_LIST_FIRST + 3)
	#define	CONTROL_DEFAULT1_LEFT		(JOY_LIST_FIRST + 4)
	#define CONTROL_DEFAULT1_FIRE1		(JOY_LIST_FIRST + 5)
	#define CONTROL_DEFAULT1_FIRE2		(JOY_LIST_FIRST + 6)
	#define	CONTROL_DEFAULT1_FIRE3		(JOY_LIST_FIRST + 7)
	#define	CONTROL_DEFAULT1_FIRE4		(JOY_LIST_FIRST + 8)
	#define	CONTROL_DEFAULT1_FIRE5		(JOY_LIST_FIRST + 9)
	#define	CONTROL_DEFAULT1_FIRE6		(JOY_LIST_FIRST + 10)
	#define CONTROL_DEFAULT1_START		(JOY_LIST_FIRST + 11)
	#define CONTROL_DEFAULT1_SCREENSHOT (JOY_LIST_FIRST + 12)
#else
	#define	CONTROL_ESC                 SDLK_ESCAPE
	#define	CONTROL_DEFAULT1_START		SDLK_RETURN
	#define	CONTROL_DEFAULT1_UP         SDLK_UP
	#define	CONTROL_DEFAULT1_DOWN		SDLK_DOWN
	#define	CONTROL_DEFAULT1_LEFT		SDLK_LEFT
	#define	CONTROL_DEFAULT1_RIGHT		SDLK_RIGHT
	#define	CONTROL_DEFAULT1_FIRE1		SDLK_a
	#define	CONTROL_DEFAULT1_FIRE2		SDLK_s
	#define	CONTROL_DEFAULT1_FIRE3		SDLK_z
	#define	CONTROL_DEFAULT1_FIRE4		SDLK_x
	#define	CONTROL_DEFAULT1_FIRE5		SDLK_d
	#define	CONTROL_DEFAULT1_FIRE6		SDLK_f
	#define	CONTROL_DEFAULT1_SCREENSHOT	SDLK_F12
#endif

#define	CONTROL_DEFAULT2_UP			((JOY_LIST_FIRST + 1) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_RIGHT		((JOY_LIST_FIRST + 2) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_DOWN		((JOY_LIST_FIRST + 3) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_LEFT		((JOY_LIST_FIRST + 4) + JOY_MAX_INPUTS)
#define CONTROL_DEFAULT2_FIRE1		((JOY_LIST_FIRST + 5) + JOY_MAX_INPUTS)
#define CONTROL_DEFAULT2_FIRE2		((JOY_LIST_FIRST + 6) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_FIRE3		((JOY_LIST_FIRST + 7) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_FIRE4		((JOY_LIST_FIRST + 8) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_FIRE5		((JOY_LIST_FIRST + 9) + JOY_MAX_INPUTS)
#define	CONTROL_DEFAULT2_FIRE6		((JOY_LIST_FIRST + 10) + JOY_MAX_INPUTS)
#define CONTROL_DEFAULT2_START		((JOY_LIST_FIRST + 11) + JOY_MAX_INPUTS)
#define CONTROL_DEFAULT2_SCREENSHOT ((JOY_LIST_FIRST + 12) + JOY_MAX_INPUTS)

#define	CONTROL_DEFAULT3_UP			((JOY_LIST_FIRST + 1) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_RIGHT		((JOY_LIST_FIRST + 2) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_DOWN		((JOY_LIST_FIRST + 3) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_LEFT		((JOY_LIST_FIRST + 4) + (JOY_MAX_INPUTS * 2))
#define CONTROL_DEFAULT3_FIRE1		((JOY_LIST_FIRST + 5) + (JOY_MAX_INPUTS * 2))
#define CONTROL_DEFAULT3_FIRE2		((JOY_LIST_FIRST + 6) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_FIRE3		((JOY_LIST_FIRST + 7) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_FIRE4		((JOY_LIST_FIRST + 8) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_FIRE5		((JOY_LIST_FIRST + 9) + (JOY_MAX_INPUTS * 2))
#define	CONTROL_DEFAULT3_FIRE6		((JOY_LIST_FIRST + 10) + (JOY_MAX_INPUTS * 2))
#define CONTROL_DEFAULT3_START		((JOY_LIST_FIRST + 11) + (JOY_MAX_INPUTS * 2))
#define CONTROL_DEFAULT3_SCREENSHOT ((JOY_LIST_FIRST + 12) + (JOY_MAX_INPUTS * 2))

#define	CONTROL_DEFAULT4_UP			((JOY_LIST_FIRST + 1) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_RIGHT		((JOY_LIST_FIRST + 2) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_DOWN		((JOY_LIST_FIRST + 3) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_LEFT		((JOY_LIST_FIRST + 4) + (JOY_MAX_INPUTS * 3))
#define CONTROL_DEFAULT4_FIRE1		((JOY_LIST_FIRST + 5) + (JOY_MAX_INPUTS * 3))
#define CONTROL_DEFAULT4_FIRE2		((JOY_LIST_FIRST + 6) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_FIRE3		((JOY_LIST_FIRST + 7) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_FIRE4		((JOY_LIST_FIRST + 8) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_FIRE5		((JOY_LIST_FIRST + 9) + (JOY_MAX_INPUTS * 3))
#define	CONTROL_DEFAULT4_FIRE6		((JOY_LIST_FIRST + 10) + (JOY_MAX_INPUTS * 3))
#define CONTROL_DEFAULT4_START		((JOY_LIST_FIRST + 11) + (JOY_MAX_INPUTS * 3))
#define CONTROL_DEFAULT4_SCREENSHOT ((JOY_LIST_FIRST + 12) + (JOY_MAX_INPUTS * 3))

#define JOYBUTTON(index, btn) (1 + i * JOY_MAX_INPUTS + btn)
#define JOYAXIS(index, axis, dir) (JOYBUTTON(index, joysticks[index].NumButtons) + 2 * axis + dir)


typedef struct{
	int		settings[JOY_MAX_INPUTS];
	u32		keyflags, newkeyflags;
	int		kb_break;
}s_playercontrols;

void control_exit();
void control_init(int joy_enable);
int control_usejoy(int enable);
int control_getjoyenabled();

void control_setkey(s_playercontrols * pcontrols, unsigned int flag, int key);
int control_scankey();

char *control_getkeyname(unsigned int keycode);
void control_update(s_playercontrols ** playercontrols, int numplayers);
void control_rumble(int port, int msec);
int keyboard_getlastkey();

#endif

