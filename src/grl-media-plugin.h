/*
 * Copyright (C) 2010 Igalia S.L.
 *
 * Contact: Iago Toral Quiroga <itoral@igalia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef _GRL_MEDIA_PLUGIN_H_
#define _GRL_MEDIA_PLUGIN_H_

#include <glib.h>
#include <glib-object.h>

/* Macros */

#define GRL_TYPE_MEDIA_PLUGIN                   \
  (grl_media_plugin_get_type ())

#define GRL_MEDIA_PLUGIN(obj)                           \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj),                   \
                               GRL_TYPE_MEDIA_PLUGIN,   \
                               GrlMediaPlugin))

#define GRL_IS_MEDIA_PLUGIN(obj)                        \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj),                   \
                               GRL_TYPE_MEDIA_PLUGIN))

#define GRL_MEDIA_PLUGIN_CLASS(klass)                   \
  (G_TYPE_CHECK_CLASS_CAST((klass),                     \
                           GRL_TYPE_MEDIA_PLUGIN,       \
                           GrlMediaPluginClass))

#define GRL_IS_MEDIA_PLUGIN_CLASS(klass)                \
  (G_TYPE_CHECK_CLASS_TYPE((klass),                     \
                           GRL_TYPE_MEDIA_PLUGIN))

#define GRL_MEDIA_PLUGIN_GET_CLASS(obj)                 \
  (G_TYPE_INSTANCE_GET_CLASS ((obj),                    \
                              GRL_TYPE_MEDIA_PLUGIN,    \
                              GrlMediaPluginClass))

/* GrlMediaPlugin object */

typedef struct _GrlMediaPlugin        GrlMediaPlugin;
typedef struct _GrlMediaPluginPrivate GrlMediaPluginPrivate;

struct _GrlMediaPlugin {

  GObject parent;

  /*< private >*/
  GrlMediaPluginPrivate *priv;
};

/* GrlMediaPlugin class */

typedef struct _GrlMediaPluginClass GrlMediaPluginClass;

struct _GrlMediaPluginClass {

  GObjectClass parent_class;

};

/* Function prototypes */

G_BEGIN_DECLS

GType grl_media_plugin_get_type (void);

gchar *grl_media_plugin_get_id (GrlMediaPlugin *plugin);
gchar *grl_media_plugin_get_name (GrlMediaPlugin *plugin);
gchar *grl_media_plugin_get_description (GrlMediaPlugin *plugin);
gchar *grl_media_plugin_get_version (GrlMediaPlugin *plugin);
gchar *grl_media_plugin_get_license (GrlMediaPlugin *plugin);
gchar *grl_media_plugin_get_author (GrlMediaPlugin *plugin);
gchar *grl_media_plugin_get_site (GrlMediaPlugin *plugin);

G_END_DECLS

#endif /* _GRL_MEDIA_PLUGIN_H_ */