/*
 * Copyright (c) 2018, The Marcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Marcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QPushButton>

namespace WalletGui {

class WalletNavigationButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletNavigationButton)

public:
  explicit WalletNavigationButton(QWidget* _parent);
  ~WalletNavigationButton();
};

}
