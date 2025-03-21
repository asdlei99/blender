/* SPDX-FileCopyrightText: 2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup freestyle
 */

#pragma once

#include "../BPy_StrokeShader.h"

///////////////////////////////////////////////////////////////////////////////////////////

extern PyTypeObject ThicknessNoiseShader_Type;

#define BPy_ThicknessNoiseShader_Check(v) \
  (PyObject_IsInstance((PyObject *)v, (PyObject *)&ThicknessNoiseShader_Type))

/*---------------------------Python BPy_ThicknessNoiseShader structure definition----------*/
typedef struct {
  BPy_StrokeShader py_ss;
} BPy_ThicknessNoiseShader;

///////////////////////////////////////////////////////////////////////////////////////////
