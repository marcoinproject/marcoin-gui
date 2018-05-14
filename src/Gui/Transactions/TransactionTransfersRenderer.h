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

#include <QFrame>

class QAbstractItemModel;
class QAbstractProxyModel;

namespace Ui {
  class TransactionTransfersRenderer;
}

namespace WalletGui {

class IAddressBookManager;
class ICryptoNoteAdapter;

class TransactionTransfersRenderer : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionTransfersRenderer)

public:
  explicit TransactionTransfersRenderer(ICryptoNoteAdapter* _cryptoNoteAdapter, IAddressBookManager* _addressBookManager, const QModelIndex& _transactionIndex,
    const QString& _walletAddress, QWidget* _parent);
  ~TransactionTransfersRenderer();

  static int calculateItemHeight(quintptr _transferCount);

private:
  QScopedPointer<Ui::TransactionTransfersRenderer> m_ui;
};

}
