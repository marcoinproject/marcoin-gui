/*
 * Copyright (c) 2018, The Marcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Marcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "CopyMagicLabel.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char COPY_MAGIC_LABEL_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--CopyMagicLabel {"
    "color: %fontColorGreen%;"
    "font-size: %fontSizeSmall%;"
  "}";

}

CopyMagicLabel::CopyMagicLabel(QWidget* _parent) : MagicLabel(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(COPY_MAGIC_LABEL_STYLE_SHEET_TEMPLATE));
}

CopyMagicLabel::~CopyMagicLabel() {
}

}
