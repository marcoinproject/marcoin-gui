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

#include <QDateTime>
#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredByPeriodTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredByPeriodTransactionsModel)

public:
  explicit FilteredByPeriodTransactionsModel(QObject* _parent);
  ~FilteredByPeriodTransactionsModel();

  void setFilter(const QDateTime& _begin, const QDateTime& _end);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  QDateTime m_begin;
  QDateTime m_end;
};

}
