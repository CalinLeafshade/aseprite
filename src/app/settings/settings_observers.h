/* Aseprite
* Copyright (C) 2001-2013  David Capello
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef APP_SETTINGS_SETTINGS_OBSERVERS_H_INCLUDED
#define APP_SETTINGS_SETTINGS_OBSERVERS_H_INCLUDED

#include "app/color.h"
#include "app/settings/ink_type.h"
#include "raster/pen_type.h"

namespace app {

  namespace tools {
    class Tool;
  }
  class ColorSwatches;

  class PenSettingsObserver {
  public:
    virtual ~PenSettingsObserver() {}

    virtual void onSetPenSize(int newSize) {}
    virtual void onSetPenType(raster::PenType newType) {}
    virtual void onSetPenAngle(int newAngle) {}
  };

  class ToolSettingsObserver {
  public:
    virtual ~ToolSettingsObserver() {}

    virtual void onSetOpacity(int newOpacity) {}
    virtual void onSetTolerance(int newTolerance) {}
    virtual void onSetFilled(bool filled) {}
    virtual void onSetPreviewFilled(bool previewFilled) {}
    virtual void onSetSprayWidth(int newSprayWidth) {}
    virtual void onSetSpraySpeed(int newSpraySpeed) {}
    virtual void onSetInkType(InkType newInkType) {}
  };

  class SelectionSettingsObserver {
  public:
    virtual ~SelectionSettingsObserver() {}

    virtual void onSetMoveTransparentColor(app::Color newColor) {}
  };

  class GlobalSettingsObserver {
  public:
    virtual ~GlobalSettingsObserver() {}

    virtual void onSetFgColor(app::Color newColor) {}
    virtual void onSetBgColor(app::Color newColor) {}
    virtual void onSetCurrentTool(tools::Tool* newTool) {}
    virtual void onSetColorSwatches(ColorSwatches* swaches) {}
  };

} // namespace app

#endif // APP_SETTINGS_SETTINGS_OBSERVERS_H_INCLUDED