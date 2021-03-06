/*
 * Copyright (c) 2017 gnome-mpv
 *
 * This file is part of GNOME MPV.
 *
 * GNOME MPV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNOME MPV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNOME MPV.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef MPRIS_TRACK_LIST_H
#define MPRIS_TRACK_LIST_H

#include "gmpv_mpris_module.h"
#include "gmpv_application_private.h"

#include <glib-object.h>

G_BEGIN_DECLS

#define GMPV_TYPE_MPRIS_TRACK_LIST (gmpv_mpris_track_list_get_type())
G_DECLARE_FINAL_TYPE(GmpvMprisTrackList, gmpv_mpris_track_list, GMPV, MPRIS_TRACK_LIST, GmpvMprisModule)

GmpvMprisTrackList *gmpv_mpris_track_list_new(	GmpvApplication *app,
						GDBusConnection *conn );

G_END_DECLS

#endif
