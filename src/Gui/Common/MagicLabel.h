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

#include <QGraphicsOpacityEffect>
#include <QLabel>
#include <QPropertyAnimation>

namespace WalletGui {

class MagicLabel : public QLabel {
  Q_OBJECT
  Q_DISABLE_COPY(MagicLabel)

public:
  explicit MagicLabel(QWidget* _parent);
  MagicLabel(quint32 _showDuration, quint32 _hideDuration, QWidget* _parent);
  ~MagicLabel();

  void start();

private:
  QGraphicsOpacityEffect m_effect;
  QPropertyAnimation m_showAnimation;
  QPropertyAnimation m_hideAnimation;

Q_SIGNALS:
  void completedSignal();
};

}
