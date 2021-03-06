// Aseprite Undo Library
// Copyright (C) 2001-2013 David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef UNDO_MODIFICATION_H_INCLUDED
#define UNDO_MODIFICATION_H_INCLUDED
#pragma once

namespace undo {

// The modification flag is used to know if an Undoer item
// modifies the document's "saved state". It means that if the
// item modifies the document the user should be asked for "save
// changes" when he closes the document.
enum Modification {
  ModifyDocument,      // This item changes the "saved status" of the document.
  DoesntModifyDocument // This item doesn't modify the document.
};

} // namespace undo

#endif // UNDO_MODIFICATION_H_INCLUDED
