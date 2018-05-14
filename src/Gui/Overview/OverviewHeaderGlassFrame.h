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

#include "Gui/Common/GlassFrame.h"

class QLabel;

namespace WalletGui {

class OverviewHeaderGlassFrame : public GlassFrame {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewHeaderGlassFrame)

public:
  OverviewHeaderGlassFrame(QMovie* _syncMovie, QWidget* _parent);
  ~OverviewHeaderGlassFrame();

  virtual void install(QWidget* _parent);
  virtual void remove();

private:
  QLabel* m_syncLabel;
};

}
