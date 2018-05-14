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

#include <QStyledItemDelegate>

namespace WalletGui {

class NewTransactionDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(NewTransactionDelegate)

public:
  explicit NewTransactionDelegate(QObject* _parent);
  ~NewTransactionDelegate();
  QWidget* createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void setEditorData(QWidget* _editor, const QModelIndex& _index) const override;
};

}
