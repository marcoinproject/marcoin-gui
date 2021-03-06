/*
 * Copyright (c) 2018, The Marcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Marcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletDescriptionLabel.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_DESCRIPTION_LABEL_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletDescriptionLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeSmall%;"
    "padding-top: 0px;"
  "}";

}

WalletDescriptionLabel::WalletDescriptionLabel(QWidget* _parent) : QLabel(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_DESCRIPTION_LABEL_STYLE_SHEET_TEMPLATE));
}

WalletDescriptionLabel::~WalletDescriptionLabel() {
}

}
