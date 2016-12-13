/*
 * Copyright 2016 Steven Jackson <sj@oscode.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ANDROID_NDK_WORKAROUNDS_H
#define ANDROID_NDK_WORKAROUNDS_H

#ifndef PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP
#include <pthread.h>
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP PTHREAD_RECURSIVE_MUTEX_INITIALIZER
#endif

#ifndef DEV_BSIZE
#define DEV_BSIZE 512
#endif

#endif /* ANDROID_NK_WORKAROUNDS_H */
