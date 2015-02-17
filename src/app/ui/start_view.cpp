// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "app/ui/start_view.h"

#include "app/ui/skin/skin_theme.h"
#include "ui/label.h"
#include "ui/textbox.h"
#include "ui/view.h"

namespace app {

using namespace ui;
using namespace skin;

StartView::StartView()
  : Box(JI_VERTICAL)
{
  SkinTheme* theme = static_cast<SkinTheme*>(getTheme());
  setBgColor(theme->colors.workspace());

  child_spacing = 8 * guiscale();

  Label* label = new Label("Welcome to " PACKAGE " v" VERSION);
  label->setTextColor(theme->colors.workspaceText());
  addChild(label);
}

StartView::~StartView()
{
}

std::string StartView::getTabText()
{
  return "Start";
}

WorkspaceView* StartView::cloneWorkspaceView()
{
  return NULL;                  // This view cannot be cloned
}

void StartView::onClonedFrom(WorkspaceView* from)
{
  ASSERT(false);                // Never called
}

void StartView::onWorkspaceViewSelected()
{
}

} // namespace app
