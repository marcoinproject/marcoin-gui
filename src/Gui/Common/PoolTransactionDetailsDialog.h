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

#include <QDialog>
#include <QPersistentModelIndex>

namespace Ui {
  class PoolTransactionDetailsDialog;
}

namespace WalletGui {

class PoolTransactionDetailsDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(PoolTransactionDetailsDialog)

public:
  explicit PoolTransactionDetailsDialog(QAbstractItemModel* _transactionPoolModel, const QModelIndex& _index, QWidget* _parent);
  ~PoolTransactionDetailsDialog();

  virtual bool eventFilter(QObject* _object, QEvent* _event) override;

protected:
  void showEvent(QShowEvent* _event) override;

private:
  QScopedPointer<Ui::PoolTransactionDetailsDialog> m_ui;
  QPersistentModelIndex m_index;
};

}
